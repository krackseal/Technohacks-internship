#include<iostream>
#include<fstream>
#include<string>

int main() {
    int choice;
    std::string directoryPath;

    std::cout << "File and Folder Management Program" << std::endl;
    std::cout << "----------------------------------" << std::endl;

    do {
        std::cout << "Choose an option:" << std::endl;
        std::cout << "1. List files in a directory" << std::endl;
        std::cout << "2. Create a new text file" << std::endl;
        std::cout << "3. Quit" << std::endl;
        std::cout << "Enter your choice (1/2/3): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the directory path: ";
                std::cin >> directoryPath;
                try {
                    for (const auto &entry : fs::directory_iterator(directoryPath)) {
                        std::cout << entry.path().filename() << std::endl;
                    }
                } catch (const fs::filesystem_error& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                }
                break;

            case 2:
                std::cout << "Enter the file name: ";
                std::cin >> directoryPath;
                try {
                    std::ofstream newFile(directoryPath);
                    newFile.close();
                    std::cout << "File created successfully." << std::endl;
                } catch (const std::exception& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                }
                break;

            case 3:
                std::cout << "Exiting the program." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 3);

    return 0;
}


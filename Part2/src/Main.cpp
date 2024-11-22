// #include <opencv2/opencv.hpp>
// #include <opencv2/objdetect/objdetect.hpp>
// #include <opencv2/highgui/highgui.hpp>
// #include <opencv2/imgproc/imgproc.hpp>
// #include <dirent.h>
// #include <iostream>
// #include <string>

// int main(int argc, const char **argv)
// {
//     cv::CascadeClassifier face_cascade;
//     face_cascade.load("haarcascade_frontalface_alt.xml");

//     std::string folderPath = "path_to_your_folder";

//     DIR *dir;
//     struct dirent *ent;
//     if ((dir = opendir(folderPath.c_str())) != NULL)
//     {
//         while ((ent = readdir(dir)) != NULL)
//         {
//             std::string filePath = folderPath + "/" + ent->d_name;
//             if (filePath.substr(filePath.find_last_of(".") + 1) == "jpg") // Check if file is a JPEG
//             {
//                 cv::Mat image = cv::imread(filePath, cv::IMREAD_COLOR); // Read the file

//                 std::vector<cv::Rect> faces;
//                 face_cascade.detectMultiScale(image, faces, 1.1, 2, 0 | cv::CASCADE_SCALE_IMAGE, cv::Size(30, 30)); // Detect faces

//                 for (int i = 0; i < faces.size(); i++) // Loop through all detected faces
//                 {
//                     cv::Mat faceROI = image(faces[i]); // Crop the face

//                     std::string outputPath = "path_to_output_folder/" + std::to_string(i) + ".jpg"; // Replace with your output folder path
//                     cv::imwrite(outputPath, faceROI);                                               // Save the cropped face
//                 }
//             }
//         }
//         closedir(dir);
//     }
//     else
//     {
//         perror("Could not open directory");
//         return EXIT_FAILURE;
//     }

//     return 0;
// }

//
//  main.cpp
//  VulkanDemo
//
//  Created by Federico Torres on 24/01/24.
//

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>

#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include "fist_app.hpp"

int main() {
    lve::FirstApp app{};
    
    try {
        app.run();
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    
 
    return EXIT_SUCCESS;
}




#
#  compile.sh
#  VulkanDemo
#
#  Created by Federico Torres on 26/01/24.
#  

/opt/homebrew/bin/glslang -V shaders/simple_shader.vert -o shaders/simple_shader.vert.spv
/opt/homebrew/bin/glslang -V shaders/simple_shader.frag -o shaders/simple_shader.frag.spv

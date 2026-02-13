# C++ to WebAssembly Image Grayscale Filter

A simple project to convert an image to grayscale using a C++ function compiled to WebAssembly.

## How to Run

1.  **Compile:**
    ```bash
    emcc image.cpp -o image.js -s EXPORTED_FUNCTIONS="['_to_grayscale', '_malloc', '_free']" -s EXPORTED_RUNTIME_METHODS="['cwrap']"
    ```

2.  **Start Server:**
    ```bash
    python3 -m http.server 8000
    ```

3.  **Open in Browser:**
    Visit `http://localhost:8000`



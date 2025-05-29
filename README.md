# open_gl_demo

coded in c++, vscode

```
"args": [
				"-std=c++17",
				"-fcolor-diagnostics",
				"-fansi-escape-codes",
				"-Wall",
				"-g",
				"-I${workspaceFolder}/dependencies/include",
				"-L${workspaceFolder}/dependencies/library",
				"${workspaceFolder}/src/glad.cpp",
				"${workspaceFolder}/main.cpp",
				"${workspaceFolder}/dependencies/library/libglfw.3.4.dylib",
				"-o",
				"${workspaceFolder}/app",
				"-framework",
				"OpenGL",
				"-framework",
				"Cocoa",
				"-framework",
				"IOKit",
				"-framework",
				"CoreVideo",
				"-framework",
				"CoreFoundation",
				"-Wno-deprecated",
			],
```

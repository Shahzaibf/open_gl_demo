# open_gl_demo

coded in c++, vscode, mac

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

Created a circle using a set of triangles.
steps = # of slices
angle Beta = 2pi / steps
Initial point on X,Y rotated by angle beta
projection of new rotated point R _ sin(B) (X), -R _ cos(B) (Y)

# Programming Projects by Nitin Pathak

Welcome! 👋 This repository showcases my early journey into programming.  
I started coding less than two months ago, and these projects represent my initial steps in C programming - building tools from scratch without external libraries, purely with logic, math, and creativity. This project is not completed yet as i currently worjing on Eqation praser, once that get completed i will integrate that praser with it.

---

## 📊 Terminal Graph Plotter (C)

A feature-rich ASCII-based graph plotting engine written entirely in C.  
It transforms mathematical equations into visual graphs inside the terminal, simulating pixels using characters.

### ✨ Key Features
- **Equation Types**: Supports both *normal* and *implicit* equations.
- **Graph Styles**: Choose between *white graph* (negative space) or *simple graph* (filled).
- **Dynamic Axis Scaling**: Extra Small, Small, Medium, and Large coordinate grids.
- **Multi-Graph Overlay**: Plot multiple equations on the same axis to analyze intersections.
- **Zoom (in progress)**: Framework ready, activation coming soon.
- **File I/O**:
  - Save plotted graphs to `graph.txt`
  - Collect user reviews in `review.txt`
- **User Experience**:
  - Interactive menus with input validation
  - Continuous session until user exits
  - Feedback loop at the end of each run

### 🧮 Example Equations
- Parabola: `y = x²`
- Sinc function: `y = sin(x)/x`
- Implicit relation: `x = y`

### 📂 Technical Highlights
- **2D Array Manipulation**: Each element acts as a pixel in the coordinate system.
- **Coordinate Transformation**: Maps mathematical values to ASCII grid positions.
- **Math Integration**: Uses `<math.h>` for trigonometric functions.
- **Persistence**: Graphs and reviews saved with timestamps using `<time.h>`.

---

## 🟦 Pattern Printer (C)

A creative ASCII art generator that prints geometric shapes based on user input.

### ✨ Key Features
- Shapes: Can plot multiple eqations on a single axis if user wants to
- User-will choose if he wants to exit or want to plot a new graph if yes then on same axis or on new axis
- Decorative borders and clean terminal UI
- Input validation for smooth user experience
- Two diffrent types of coordinate axis White and Black
- Multiple plotting on same coordinate axis

### 📂 Technical Highlights
- **Algorithmic Geometry**: Calculations for curves and edges using loops and conditions.
- **2D Array Rendering**: Shapes drawn with `*` and spaces.
- **Interactive Flow**: Menu-driven design with options for more patterns.

---

## 🚀 In Progress
- **Equation Parser**: A robust parser to handle arbitrary user-input equations.
- **Zoom Activation**: Enable zooming for detailed graph analysis.
- **Python Port**: Rebuilding the graph plotter in Python using NumPy and Matplotlib for advanced visualization.

---

## 📸 Screenshots
---

## 🧑‍💻 About Me
I’m **Nitin Pathak**, a first-year B.Tech CS/IT student.  
I began programming in C just two months ago, and these projects are my way of learning by building. My focus is on:
- Strengthening fundamentals
- Exploring math + programming synergy
- Transitioning into Python for data science and visualization

---

## 🌟 Why This Repo Matters
This repository is not about “perfect” projects — it’s about **growth**.  
Every commit here represents:
- Learning new concepts
- Solving problems creatively
- Building functional applications from scratch
- Documenting progress openly

---

## 📌 Future Goals
- Continuously working on a Eqation praser so currently eqation is hardcoded
- Add color support in terminal
- Build a GUI version (SDL/OpenGL)
- Create a web-based graphing tool with Python + Flask/Django

---

## 🏷️ License
Open-source. Free to use, learn from, and improve.



<img width="552" height="862" alt="Screenshot 2026-06-19 125430" src="https://github.com/user-attachments/assets/f72f8fbd-3c40-4f90-b0d7-24a67b62f0e7" />
<img width="1051" height="935" alt="Screenshot 2026-05-31 185410" src="https://github.com/user-attachments/assets/56886705-1f61-493c-8e5b-5c2df4906fd3" />
<img width="895" height="698" alt="Screenshot 2026-05-31 184907" src="https://github.com/user-attachments/assets/827efd30-8bf4-4c3e-8e87-96f54c69b38b" />
<img width="649" height="573" alt="Screenshot 2026-05-27 010032" src="https://github.com/user-attachments/assets/2401ee51-df11-44c5-8867-5eda8b41a5c6" />
<img width="959" height="915" alt="Screenshot 2026-05-31 183008" src="https://github.com/user-attachments/assets/fa674e25-6894-4e30-a4af-37b0959c6bde" />
<img width="1117" height="953" alt="Screenshot 2026-05-31 185619" src="https://github.com/user-attachments/assets/91d51186-0eb6-472f-bfd8-48a26f9e2d03" />
<img width="948" height="818" alt="Screenshot 2026-06-07 093212" src="https://github.com/user-attachments/assets/bcd603a9-35e0-4694-ba46-a417e1489e56" />
<img width="1115" height="807" alt="Screenshot 2026-06-07 094936" src="https://github.com/user-attachments/assets/f25ffb3a-d6d7-4fec-8a70-a9912e0ae131" />
<img width="1122" height="923" alt="Screenshot 2026-06-12 162410" src="https://github.com/user-attachments/assets/b3073739-c1dc-416e-9edc-bddc0ed1f4fd" />
<img width="934" height="933" alt="Screenshot 2026-06-09 224147" src="https://github.com/user-attachments/assets/1fb30b74-237d-4e3e-884e-63fad5e5d121" />
<img width="552" height="862" alt="Screenshot 2026-06-19 125430" src="https://github.com/user-attachments/assets/b336f96c-d164-46d9-bce2-f4dc9c46ac08" />
[plotter.c](https://github.com/user-attachments/files/29158688/plotter.c)


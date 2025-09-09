# Reflection on Vehicle Management System
**Author:** Ngô Quang Trường  
**ID:** 24110142
## 1. Instructions to Run
The program is implemented in a single `.cpp` file.  
To run it, compile with a C++ compiler such as `g++`:

```bash
g++ Vehicle.cpp -o Vehicle
./Vehicle
```

### Running in Visual Studio Code (VS Code)
1. Open the project folder in **VS Code**.  
2. Make sure you have installed the **C/C++ extension** by Microsoft.  
3. Create a new file `Vehicle.cpp` (if not already).  
4. Open the integrated terminal in VS Code.  
5. Compile using:
   ```bash
   g++ Vehicle.cpp -o Vehicle
   ```
6. Run the program with:
   ```bash
   ./Vehicle
   ```
7. Alternatively, configure a **tasks.json** file to automate the build and run process.

After compilation, the program first demonstrates predefined vehicles and then allows the user to input their own vehicle. The output will display acceleration and vehicle information.

---
## 2. 🔍 Requirement Analysis  

When receiving the assignment, I applied the object-oriented development process:  

- **Identifying the main entity:** `Vehicle` is the central object to be modeled.  
- **Analyzing characteristics:** Attributes include `type` and `maxSpeed` as basics, with `fuelType` added as an extension.  
- **Defining behaviors:** The main behavior is `accelerate()`, with additional methods such as `displayInfo()`, `refuel()`, and comparison operators.  


## 3. Attributes and Methods
The core entity is the `Vehicle` class. Its private attributes are:

- `type`: represents the type of vehicle (Car, Truck, Motorcycle).
- `brand`: specifies the manufacturer.
- `maxSpeed`: the maximum speed in km/h.
- `fuelType`: the kind of fuel used (Petrol, Diesel, Electric).

The public methods include:

- A constructor to initialize the attributes.
- Getter functions to access each attribute.
- `accelerate()`: simulates the vehicle speeding up.
- `displayInfo()`: prints all information about the vehicle.

## 4. Challenges Faced
One of the main challenges was handling user input correctly, especially when dealing with string values that may contain spaces, such as brand names. Another difficulty was structuring the code to keep it readable and maintainable while following naming conventions. Ensuring the correct use of constructors and the `this` pointer also required careful attention.

## 5. Benefits of OOP
Object-oriented programming provided a clear structure by encapsulating attributes and behaviors into a single class. This modularity made the code easier to understand and extend. For example, adding a new attribute such as fuel type required changes only inside the class, without rewriting other parts of the program. OOP also supports reusability, since multiple objects (Car, Truck, Motorcycle) could be created easily from the same class. This approach not only simplified the development process but also ensured consistency and minimized errors during testing.
## 6. AI Help: ChatGPT
- ChatGPT suggested me the initial ideas. 
- ChatGPT corrected the program errors. 
- ChatGPT helped me write the Reflection file.

# MediaManagementSystem
Media Management System

This code demonstrates object-oriented programming and polymorphism concepts in C++ by creating a media management system. It was written by Marouane El Hizabri

It defines three classes:

Media: This is a base class representing generic media items. It has a protected member variable titre (title) and a public virtual function afficherDetails (display details) that prints the title.
Livre (Book): This class inherits from Media and represents books. It adds protected member variables auteur (author) and nbPages (number of pages), along with a constructor to initialize them and a afficherDetails override that displays book-specific details (author and page count) in addition to the inherited title.
Film (Movie): This class also inherits from Media and represents movies. It has protected member variables realisateur (director) and duree (duration), along with a constructor and an overridden afficherDetails function to print movie-specific details (director and duration) along with the title.
The main function creates a vector named allMedia that can hold pointers to objects of any class derived from Media. It then instantiates objects of Livre, Film, and Media classes using dynamic memory allocation (new) and populates the vector with these objects. Finally, it iterates through the vector and calls the virtual afficherDetails function on each object using polymorphism, resulting in the appropriate details being displayed based on the actual object type.

Key Points:

Inheritance: The Livre and Film classes inherit properties and behavior from the Media base class, promoting code reusability.
Polymorphism: The virtual afficherDetails function allows for different implementations in derived classes, enabling flexible output based on object type.
Dynamic Memory Allocation: Using new creates objects on the heap, allowing for objects of varying sizes and managing their lifetime manually with deletion (not shown in this code).
Vector: The vector container efficiently stores and manages a collection of media object pointers.

# Zomato Clone

A full-stack Zomato clone built using **JavaScript**, **React**, and **Node.js**, with **MySQL** as the database.

---

## Table of Contents

- [Project Description](#project-description)
- [Features](#features)
- [Tech Stack](#tech-stack)
- [Setup Instructions](#setup-instructions)
- [Usage](#usage)

---

## Project Description
The Zomato Clone is a web application that allows users to browse restaurants, view menus, and place orders. It provides a seamless user experience and implements authentication and user profiles for personalized features.

---

## Features

- User authentication (Sign up/Login).
- Browse and search restaurants.
- View menus and restaurant details.
- Add items to the cart and place orders.
- Admin panel for managing restaurants and menu items.

---

## Tech Stack

- **Frontend**: React, JavaScript, HTML, CSS
- **Backend**: Node.js, Express
- **Database**: MySQL
- **Other Tools**: Express, REST APIs

---

## Setup Instructions

### Prerequisites

- Node.js and npm installed
- MySQL installed and running

### Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/saurabh-raiii/zomato-clone.git
   cd zomato-clone
   ```

2. **Install dependencies:**
   ```bash
   npm install
   cd client
   npm install
   cd ..
   ```

3. **Set up the database:**
   - Create a MySQL database named `zomato_clone`.
   - Import the database schema from the `db/schema.sql` file provided.
   - Update the database credentials in the `.env` file (see below).

4. **Set up environment variables:**
   Create a `.env` file in the root directory with the following values:
   ```env
   PORT=5000
   DB_HOST=localhost
   DB_USER=root
   DB_PASSWORD=yourpassword
   DB_NAME=zomato_clone
   JWT_SECRET=your_jwt_secret
   ```

5. **Run the application:**
   - Start the backend server:
     ```bash
     npm start
     ```
   - Start the React frontend:
     ```bash
     cd client
     npm start
     ```

6. **Access the application:**
   Open your browser and navigate to `http://localhost:3000`.

---

## Usage

### Example Workflow

1. Sign up or log in to your account.
2. Browse or search for restaurants.
3. View restaurant details and menus.
4. Add items to your cart and place an order.
5. (Admin) Manage restaurants and menu items from the admin panel.
cmake_minimum_required(VERSION 2.8.12)

project (BOOST_ASIO_TUTORIAL)
add_executable(boost_tutorial main.cpp)
target_include_directories(boost_tutorial PUBLIC /usr/local/lib/boost_1_82_0/boost)
#include <iostream>
#include <boost/asio.hpp>
#include <boost/lambda/lambda.hpp>
#include <algorithm>

typedef boost::asio::steady_timer Boost_Timer;
typedef boost::asio::chrono::seconds boost_seconds;

void print(const boost::system::error_code& errorCode){
    std::cout << "Hello world" << std::endl;
}

int main(){
    boost::asio::io_context io;
    Boost_Timer timer(io, boost::asio::chrono::seconds(5));
    
    timer.async_wait(&print);
    
    io.run();
    std::cout << "Waiting on a hello" << std::endl;
    return 0;
}
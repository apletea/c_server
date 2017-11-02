#include <iostream>
#include <served/served.hpp>



int main(int argc, char *argv[])
{
    served::multiplexer mux;

    mux.handle("/start")
            .get([](served::response & res, const served::request & req){
                res << "TODAY";
            });

    served::net::server server("127.0.0.1", "8080", mux);
    server.run(100);

    return (EXIT_SUCCESS);
}

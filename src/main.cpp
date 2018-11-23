#include <iostream>
#include <occi.h>
#include "models/OracleDatabaseModel.h"

int main(int argc, char **argv) {


    const std::string userName = "victor";
    const std::string password = "root3358";
    const std::string connectionString = "//victor:1522/XE";


    oracle::occi::Environment *env = oracle::occi::Environment::createEnvironment();
    oracle::occi::Connection *conn = env->createConnection(userName, password, connectionString);

    OracleDatabaseModel databaseModel{userName, password, connectionString};
    auto tableColumns = databaseModel.getTableColumns("BUG_LOGGER");

    for (OracleTableColumn column : tableColumns) {
        std::cout << column.getColumn_name() << " " << column.getData_type() << std::endl;
    }


    for (int i = 0; i < 0; i++) {
        std::cout << i << std::endl;
    }


    return EXIT_SUCCESS;
}
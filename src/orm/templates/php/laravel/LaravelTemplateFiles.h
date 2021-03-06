//
// Created by victor on 3/19/20.
//

#ifndef DBCRUDGEN_CPP_LARAVELTEMPLATEFILES_H
#define DBCRUDGEN_CPP_LARAVELTEMPLATEFILES_H

#include "../../TemplateFiles.h"

namespace dbcrudgen {
    namespace orm {
        class LaravelTemplateFiles : TemplateFiles {
        public:
            static constexpr const char *CLASS_CONTROLLER_TEMPLATE = "templates/php/laravel/class_controller.php.mdl";
            static constexpr const char *CLASS_MODEL_TEMPLATE = "templates/php/laravel/class_model.php.mdl";

            static constexpr const char *METHOD_CONTROLLER_CREATE = "templates/php/laravel/method_controller_create.mdl";
            static constexpr const char *METHOD_CONTROLLER_DESTROY = "templates/php/laravel/method_controller_destroy.mdl";
            static constexpr const char *METHOD_CONTROLLER_EDIT = "templates/php/laravel/method_controller_edit.mdl";
            static constexpr const char *METHOD_CONTROLLER_SHOW = "templates/php/laravel/method_controller_show.mdl";
            static constexpr const char *METHOD_CONTROLLER_STORE = "templates/php/laravel/method_controller_store.mdl";
            static constexpr const char *METHOD_CONTROLLER_UPDATE = "templates/php/laravel/method_controller_update.mdl";

            static constexpr const char *METHOD_ROUTE_API_DELETE = "templates/php/laravel/method_route_api_delete.mdl";
            static constexpr const char *METHOD_ROUTE_API_GET = "templates/php/laravel/method_route_api_get.mdl";
            static constexpr const char *METHOD_ROUTE_API_POST = "templates/php/laravel/method_route_api_post.mdl";
            static constexpr const char *METHOD_ROUTE_API_PUT = "templates/php/laravel/method_route_api_put.mdl";

            static constexpr const char *METHOD_ROUTE_WEB_DELETE = "templates/php/laravel/method_route_web_delete.mdl";
            static constexpr const char *METHOD_ROUTE_WEB_GET = "templates/php/laravel/method_route_web_get.mdl";
            static constexpr const char *METHOD_ROUTE_WEB_POST = "templates/php/laravel/method_route_web_post.mdl";
            static constexpr const char *METHOD_ROUTE_WEB_PUT = "templates/php/laravel/method_route_web_put.mdl";

            static constexpr const char *METHODS_ROUTES_WEB_TABLE = "templates/php/laravel/methods_routes_web_table.mdl";
            static constexpr const char *METHODS_ROUTES_API_TABLE = "templates/php/laravel/methods_routes_api_table.mdl";

            static constexpr const char *SCRIPT_DATA_TABLE = "templates/php/laravel/script_data_table.mdl";
            static constexpr const char *SCRIPT_ROUTES_WEB = "templates/php/laravel/script_routes_web.mdl";
            static constexpr const char *SCRIPT_ROUTES_API = "templates/php/laravel/script_routes_api.mdl";
            static constexpr const char *SCRIPT_VIEW = "templates/php/laravel/script_view.mdl";
            static constexpr const char *SCRIPT_SCRUD_JS = "templates/php/laravel/script_js_scrud.mdl";
        };
    }
}
#endif //DBCRUDGEN_CPP_LARAVELTEMPLATEFILES_H

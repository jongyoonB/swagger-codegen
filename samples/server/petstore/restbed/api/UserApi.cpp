/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include <corvusoft/restbed/byte.hpp>
#include <corvusoft/restbed/string.hpp>
#include <corvusoft/restbed/settings.hpp>
#include <corvusoft/restbed/request.hpp>

#include "UserApi.h"

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

UserApi::UserApi() {
	std::shared_ptr<UserApiUserResource> spUserApiUserResource = std::make_shared<UserApiUserResource>();
	this->publish(spUserApiUserResource);
	
	std::shared_ptr<UserApiUserCreateWithArrayResource> spUserApiUserCreateWithArrayResource = std::make_shared<UserApiUserCreateWithArrayResource>();
	this->publish(spUserApiUserCreateWithArrayResource);
	
	std::shared_ptr<UserApiUserCreateWithListResource> spUserApiUserCreateWithListResource = std::make_shared<UserApiUserCreateWithListResource>();
	this->publish(spUserApiUserCreateWithListResource);
	
	std::shared_ptr<UserApiUserUsernameResource> spUserApiUserUsernameResource = std::make_shared<UserApiUserUsernameResource>();
	this->publish(spUserApiUserUsernameResource);
	
	std::shared_ptr<UserApiUserLoginResource> spUserApiUserLoginResource = std::make_shared<UserApiUserLoginResource>();
	this->publish(spUserApiUserLoginResource);
	
	std::shared_ptr<UserApiUserLogoutResource> spUserApiUserLogoutResource = std::make_shared<UserApiUserLogoutResource>();
	this->publish(spUserApiUserLogoutResource);
	
}

UserApi::~UserApi() {}

void UserApi::startService(int const& port) {
	std::shared_ptr<restbed::Settings> settings = std::make_shared<restbed::Settings>();
	settings->set_port(port);
	settings->set_root("/v2");
	
	this->start(settings);
}

void UserApi::stopService() {
	this->stop();
}

UserApiUserResource::UserApiUserResource()
{
	this->set_path("/user/");
	this->set_method_handler("POST",
		std::bind(&UserApiUserResource::POST_method_handler, this,
			std::placeholders::_1));
}

UserApiUserResource::~UserApiUserResource()
{
}

void UserApiUserResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));
			/**
			 * Get body params or form params here from the requestBody string
			 */
			
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 0) {
				session->close(0, "successful operation", { {"Connection", "close"} });
				return;
			}

		});
}



UserApiUserCreateWithArrayResource::UserApiUserCreateWithArrayResource()
{
	this->set_path("/user/createWithArray/");
	this->set_method_handler("POST",
		std::bind(&UserApiUserCreateWithArrayResource::POST_method_handler, this,
			std::placeholders::_1));
}

UserApiUserCreateWithArrayResource::~UserApiUserCreateWithArrayResource()
{
}

void UserApiUserCreateWithArrayResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));
			/**
			 * Get body params or form params here from the requestBody string
			 */
			
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 0) {
				session->close(0, "successful operation", { {"Connection", "close"} });
				return;
			}

		});
}



UserApiUserCreateWithListResource::UserApiUserCreateWithListResource()
{
	this->set_path("/user/createWithList/");
	this->set_method_handler("POST",
		std::bind(&UserApiUserCreateWithListResource::POST_method_handler, this,
			std::placeholders::_1));
}

UserApiUserCreateWithListResource::~UserApiUserCreateWithListResource()
{
}

void UserApiUserCreateWithListResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));
			/**
			 * Get body params or form params here from the requestBody string
			 */
			
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 0) {
				session->close(0, "successful operation", { {"Connection", "close"} });
				return;
			}

		});
}



UserApiUserUsernameResource::UserApiUserUsernameResource()
{
	this->set_path("/user/{username: .*}/");
	this->set_method_handler("DELETE",
		std::bind(&UserApiUserUsernameResource::DELETE_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("GET",
		std::bind(&UserApiUserUsernameResource::GET_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("PUT",
		std::bind(&UserApiUserUsernameResource::PUT_method_handler, this,
			std::placeholders::_1));
}

UserApiUserUsernameResource::~UserApiUserUsernameResource()
{
}

void UserApiUserUsernameResource::DELETE_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			// Getting the path params
			const std::string username = request->get_path_parameter("username", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 400) {
				session->close(400, "Invalid username supplied", { {"Connection", "close"} });
				return;
			}
			if (status_code == 404) {
				session->close(404, "User not found", { {"Connection", "close"} });
				return;
			}

}

void UserApiUserUsernameResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

			// Getting the path params
			const std::string username = request->get_path_parameter("username", "");
			
		
			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				std::shared_ptr<User> response = NULL;
				session->close(200, "successful operation", { {"Connection", "close"} });
				return;
			}
			if (status_code == 400) {
				session->close(400, "Invalid username supplied", { {"Connection", "close"} });
				return;
			}
			if (status_code == 404) {
				session->close(404, "User not found", { {"Connection", "close"} });
				return;
			}

}
void UserApiUserUsernameResource::PUT_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));

			// Getting the path params
			const std::string username = request->get_path_parameter("username", "");
			
		
			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 400) {
				session->close(400, "Invalid user supplied", { {"Connection", "close"} });
				return;
			}
			if (status_code == 404) {
				session->close(404, "User not found", { {"Connection", "close"} });
				return;
			}

		});
}


UserApiUserLoginResource::UserApiUserLoginResource()
{
	this->set_path("/user/login/");
	this->set_method_handler("GET",
		std::bind(&UserApiUserLoginResource::GET_method_handler, this,
			std::placeholders::_1));
}

UserApiUserLoginResource::~UserApiUserLoginResource()
{
}

void UserApiUserLoginResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			
			// Getting the query params
			const std::string username = request->get_query_parameter("username", "");
			const std::string password = request->get_query_parameter("password", "");

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				// Description: calls per hour allowed by the user
				session->set_header("X-Rate-Limit", ""); // Change second param to your header value
				// Description: date in UTC when toekn expires
				session->set_header("X-Expires-After", ""); // Change second param to your header value
				session->close(200, "successful operation", { {"Connection", "close"} });
				return;
			}
			if (status_code == 400) {
				session->close(400, "Invalid username/password supplied", { {"Connection", "close"} });
				return;
			}

}



UserApiUserLogoutResource::UserApiUserLogoutResource()
{
	this->set_path("/user/logout/");
	this->set_method_handler("GET",
		std::bind(&UserApiUserLogoutResource::GET_method_handler, this,
			std::placeholders::_1));
}

UserApiUserLogoutResource::~UserApiUserLogoutResource()
{
}

void UserApiUserLogoutResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 0) {
				session->close(0, "successful operation", { {"Connection", "close"} });
				return;
			}

}




}
}
}
}


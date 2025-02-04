#include <MD/Core/Exceptions/Generic.hpp>

using namespace MaurolepisDreki::Core::Exceptions;

MaurolepisDreki::Core::Exceptions::GenericException::GenericException() noexcept { }

MaurolepisDreki::Core::Exceptions::GenericException::GenericException( const GenericException& gx ) noexcept { }

GenericException& MaurolepisDreki::Core::Exceptions::GenericException::operator=( const GenericException& gx ) noexcept {
	return *this;
}

MaurolepisDreki::Core::Exceptions::GenericException::~GenericException() { }

const char* MaurolepisDreki::Core::Exceptions::GenericException::what() const noexcept {
	return "MDCore Generic Exception";
}


#ifndef INCLUDED_MAUROLEPISDREKI_CORE_EXCEPTIONS_GENERIC_HPP
#	define INCLUDED_MAUROLEPISDREKI_CORE_EXCEPTIONS_GENERIC_HPP

namespace MaurolepisDreki {
	namespace Core {
		namespace Exceptions {
			/// Base Class for Exceptions
			class GenericException {
				public:
					GenericException() noexcept;
					GenericException( const GenericException& ) noexcept;
					GenericException& operator=( const GenericException& ) noexcept;
					virtual ~GenericException();
					virtual const char* what() const noexcept; //< provides consistancy with the standard exception class
			};
		}
	}
}

#endif /* INCLUDED_MAUROLEPISDREKI_CORE_EXCEPTIONS_GENERIC_HPP */


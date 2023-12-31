#pragma once

#define GNERATE_SINGLE(classname)											\
private:																	\
	classname() {};															\
public:																		\
	static classname* GetInstance()											\
	{																		\
		if (s_instance == nullptr) s_instance = new classname();			\
		return s_instance;													\
	}																		\
private:																	\
	static classname* s_instance;											\


#define GET_SINGLE(classname) classname::GetInstance()

#define SAFE_DELETE(ptr)		\
	if (ptr)					\
	{							\
		delete ptr;				\
		ptr = nullptr;			\
	}							
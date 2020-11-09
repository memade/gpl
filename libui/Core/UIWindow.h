#if !defined(AFX_SK_H__C5258DE4_4686_4BB9_892E_C4472C828741__HEAD__)
#define AFX_SK_H__C5258DE4_4686_4BB9_892E_C4472C828741__HEAD__

namespace ui {

	class UIWindow
	{
	public:
		UIWindow();
		~UIWindow();
	public:
		intptr_t Identify() const;
		void Identify(const intptr_t&);
		void Identify(const void*);
	protected:
		intptr_t m_Identify = 0;
	};



}///namespace ui



//!@ /*新生联创®（上海）*/
//!@ /*Mon Nov 9 10:39:32 UTC+0800 2020*/
//!@ /*___www.skstu.com___*/
#endif /*AFX_SK_H__C5258DE4_4686_4BB9_892E_C4472C828741__HEAD__*/
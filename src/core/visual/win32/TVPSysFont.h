#ifndef __TVP_SYS_FONT_H__
#define __TVP_SYS_FONT_H__

class tTVPSysFont {
#if 0
	HFONT hFont_;
	HFONT hOldFont_;
	HDC hMemDC_;
	HBITMAP hBmp_;
	HBITMAP hOldBmp_;
#endif

private:
	void InitializeMemDC();

public:
	tTVPSysFont();
	tTVPSysFont( const tTVPFont &font );
	~tTVPSysFont();

	int GetAscentHeight();
	void Assign( const tTVPSysFont* font );
	void Assign( const tTVPFont &font );
#if 0
	void GetFont( LOGFONT* font ) const;
	HDC GetDC() { return hMemDC_; }
#endif
};

extern void TVPGetAllFontList( std::vector<tjs_string>& list );
extern void TVPGetFontList(std::vector<ttstr> & list, tjs_uint32 flags, const tTVPFont & font );
extern tjs_uint8 TVPGetCharSetFromFaceName( const tjs_char* face );
#endif // __TVP_SYS_FONT_H__

@interface DOMHTMLDocument : DOMDocument

@property (copy) NSString *alinkColor;
@property (copy) NSString *bgColor;
@property (readonly, copy) NSString *compatMode;
@property (copy) NSString *designMode;
@property (copy) NSString *dir;
@property (readonly) DOMHTMLCollection *embeds;
@property (copy) NSString *fgColor;
@property (readonly) int height;
@property (copy) NSString *linkColor;
@property (readonly) DOMHTMLCollection *plugins;
@property (readonly) DOMHTMLCollection *scripts;
@property (copy) NSString *vlinkColor;
@property (readonly) int width;

- (id)_createDocumentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;
- (id)_createDocumentFragmentWithText:(id)arg1;
- (id)alinkColor;
- (id)bgColor;
- (void)captureEvents;
- (void)clear;
- (void)close;
- (id)compatMode;
- (id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)createDocumentFragmentWithText:(id)arg1;
- (id)designMode;
- (id)dir;
- (id)embeds;
- (id)fgColor;
- (int)height;
- (id)linkColor;
- (void)open;
- (id)plugins;
- (void)releaseEvents;
- (id)scripts;
- (void)setAlinkColor:(id)arg1;
- (void)setBgColor:(id)arg1;
- (void)setDesignMode:(id)arg1;
- (void)setDir:(id)arg1;
- (void)setFgColor:(id)arg1;
- (void)setLinkColor:(id)arg1;
- (void)setVlinkColor:(id)arg1;
- (id)vlinkColor;
- (int)width;
- (void)write:(id)arg1;
- (void)writeln:(id)arg1;

@end

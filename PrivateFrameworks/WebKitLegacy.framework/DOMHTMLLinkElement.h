
@interface DOMHTMLLinkElement : DOMHTMLElement

@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *charset;
@property bool disabled;
@property (copy) NSString *href;
@property (copy) NSString *hreflang;
@property (copy) NSString *media;
@property (copy) NSString *rel;
@property (copy) NSString *rev;
@property (readonly) DOMStyleSheet *sheet;
@property (copy) NSString *target;
@property (copy) NSString *type;

- (bool)_mediaQueryMatches;
- (bool)_mediaQueryMatchesForOrientation:(int)arg1;
- (id)absoluteLinkURL;
- (id)as;
- (id)charset;
- (id)crossOrigin;
- (bool)disabled;
- (id)href;
- (id)hreflang;
- (id)media;
- (id)rel;
- (id)relList;
- (id)rev;
- (void)setAs:(id)arg1;
- (void)setCharset:(id)arg1;
- (void)setCrossOrigin:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHref:(id)arg1;
- (void)setHreflang:(id)arg1;
- (void)setMedia:(id)arg1;
- (void)setRel:(id)arg1;
- (void)setRev:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setType:(id)arg1;
- (id)sheet;
- (id)target;
- (id)type;

@end

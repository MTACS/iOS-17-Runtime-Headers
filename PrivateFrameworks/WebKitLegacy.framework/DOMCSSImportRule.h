
@interface DOMCSSImportRule : DOMCSSRule

@property (readonly, copy) NSString *href;
@property (readonly) DOMMediaList *media;
@property (readonly) DOMCSSStyleSheet *styleSheet;

- (id)href;
- (id)media;
- (id)styleSheet;

@end

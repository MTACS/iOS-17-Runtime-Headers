
@interface DOMCSSRule : DOMObject

@property (copy) NSString *cssText;
@property (readonly) DOMCSSRule *parentRule;
@property (readonly) DOMCSSStyleSheet *parentStyleSheet;
@property (readonly) unsigned short type;

- (id)cssText;
- (void)dealloc;
- (id)parentRule;
- (id)parentStyleSheet;
- (void)setCssText:(id)arg1;
- (unsigned short)type;

@end

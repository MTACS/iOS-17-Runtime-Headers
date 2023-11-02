
@interface DOMCSSPageRule : DOMCSSRule

@property (copy) NSString *selectorText;
@property (readonly) DOMCSSStyleDeclaration *style;

- (id)selectorText;
- (void)setSelectorText:(id)arg1;
- (id)style;

@end

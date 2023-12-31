
@interface DOMAttr : DOMNode

@property (readonly, copy) NSString *name;
@property (readonly) DOMElement *ownerElement;
@property (readonly) bool specified;
@property (readonly) DOMCSSStyleDeclaration *style;
@property (copy) NSString *value;

- (bool)isId;
- (id)name;
- (id)ownerElement;
- (void)setValue:(id)arg1;
- (bool)specified;
- (id)style;
- (id)value;

@end

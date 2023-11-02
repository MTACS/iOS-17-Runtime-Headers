
@interface DOMCSSValue : DOMObject

@property (copy) NSString *cssText;
@property (readonly) unsigned short cssValueType;

- (id)cssText;
- (unsigned short)cssValueType;
- (void)dealloc;
- (void)setCssText:(id)arg1;

@end

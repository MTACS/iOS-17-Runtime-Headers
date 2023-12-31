
@interface DOMHTMLHRElement : DOMHTMLElement

@property (copy) NSString *align;
@property bool noShade;
@property (copy) NSString *size;
@property (copy) NSString *width;

- (id)align;
- (bool)noShade;
- (void)setAlign:(id)arg1;
- (void)setNoShade:(bool)arg1;
- (void)setSize:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)size;
- (id)width;

@end

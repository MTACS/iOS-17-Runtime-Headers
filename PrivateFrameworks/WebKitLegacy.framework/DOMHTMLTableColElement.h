
@interface DOMHTMLTableColElement : DOMHTMLElement

@property (copy) NSString *align;
@property (copy) NSString *ch;
@property (copy) NSString *chOff;
@property int span;
@property (copy) NSString *vAlign;
@property (copy) NSString *width;

- (id)align;
- (id)ch;
- (id)chOff;
- (void)setAlign:(id)arg1;
- (void)setCh:(id)arg1;
- (void)setChOff:(id)arg1;
- (void)setSpan:(int)arg1;
- (void)setVAlign:(id)arg1;
- (void)setWidth:(id)arg1;
- (int)span;
- (id)vAlign;
- (id)width;

@end

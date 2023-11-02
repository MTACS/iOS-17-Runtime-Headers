
@interface DOMHTMLTableSectionElement : DOMHTMLElement

@property (copy) NSString *align;
@property (copy) NSString *ch;
@property (copy) NSString *chOff;
@property (readonly) DOMHTMLCollection *rows;
@property (copy) NSString *vAlign;

- (id)align;
- (id)ch;
- (id)chOff;
- (void)deleteRow:(int)arg1;
- (id)insertRow:(int)arg1;
- (id)rows;
- (void)setAlign:(id)arg1;
- (void)setCh:(id)arg1;
- (void)setChOff:(id)arg1;
- (void)setVAlign:(id)arg1;
- (id)vAlign;

@end

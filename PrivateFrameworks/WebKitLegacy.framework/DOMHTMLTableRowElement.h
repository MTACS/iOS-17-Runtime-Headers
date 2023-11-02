
@interface DOMHTMLTableRowElement : DOMHTMLElement

@property (copy) NSString *align;
@property (copy) NSString *bgColor;
@property (readonly) DOMHTMLCollection *cells;
@property (copy) NSString *ch;
@property (copy) NSString *chOff;
@property (readonly) int rowIndex;
@property (readonly) int sectionRowIndex;
@property (copy) NSString *vAlign;

- (id)align;
- (id)bgColor;
- (id)cells;
- (id)ch;
- (id)chOff;
- (void)deleteCell:(int)arg1;
- (id)insertCell:(int)arg1;
- (int)rowIndex;
- (int)sectionRowIndex;
- (void)setAlign:(id)arg1;
- (void)setBgColor:(id)arg1;
- (void)setCh:(id)arg1;
- (void)setChOff:(id)arg1;
- (void)setVAlign:(id)arg1;
- (id)vAlign;

@end

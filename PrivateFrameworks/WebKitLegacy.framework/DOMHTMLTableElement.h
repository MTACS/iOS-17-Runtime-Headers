
@interface DOMHTMLTableElement : DOMHTMLElement

@property (copy) NSString *align;
@property (copy) NSString *bgColor;
@property (copy) NSString *border;
@property (retain) DOMHTMLTableCaptionElement *caption;
@property (copy) NSString *cellPadding;
@property (copy) NSString *cellSpacing;
@property (copy) NSString *frameBorders;
@property (readonly) DOMHTMLCollection *rows;
@property (copy) NSString *rules;
@property (copy) NSString *summary;
@property (readonly) DOMHTMLCollection *tBodies;
@property (retain) DOMHTMLTableSectionElement *tFoot;
@property (retain) DOMHTMLTableSectionElement *tHead;
@property (copy) NSString *width;

- (id)align;
- (id)bgColor;
- (id)border;
- (id)caption;
- (id)cellPadding;
- (id)cellSpacing;
- (id)createCaption;
- (id)createTBody;
- (id)createTFoot;
- (id)createTHead;
- (void)deleteCaption;
- (void)deleteRow:(int)arg1;
- (void)deleteTFoot;
- (void)deleteTHead;
- (id)frameBorders;
- (id)insertRow:(int)arg1;
- (id)rows;
- (id)rules;
- (void)setAlign:(id)arg1;
- (void)setBgColor:(id)arg1;
- (void)setBorder:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setCellPadding:(id)arg1;
- (void)setCellSpacing:(id)arg1;
- (void)setFrameBorders:(id)arg1;
- (void)setRules:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTFoot:(id)arg1;
- (void)setTHead:(id)arg1;
- (void)setWidth:(id)arg1;
- (int)structuralComplexityContribution;
- (id)summary;
- (id)tBodies;
- (id)tFoot;
- (id)tHead;
- (id)width;

@end

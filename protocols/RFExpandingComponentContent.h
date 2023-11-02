
@protocol RFExpandingComponentContent <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (RFLongItemStandardCardSection *)long_item_standard_card_section;
- (RFReferenceFootnoteCardSection *)reference_footnote_card_section;
- (void)setLong_item_standard_card_section:(RFLongItemStandardCardSection *)arg1;
- (void)setReference_footnote_card_section:(RFReferenceFootnoteCardSection *)arg1;

@end

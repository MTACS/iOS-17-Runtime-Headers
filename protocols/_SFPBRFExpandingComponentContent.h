
@protocol _SFPBRFExpandingComponentContent <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBRFLongItemStandardCardSection *)long_item_standard_card_section;
- (_SFPBRFReferenceFootnoteCardSection *)reference_footnote_card_section;
- (void)setLong_item_standard_card_section:(_SFPBRFLongItemStandardCardSection *)arg1;
- (void)setReference_footnote_card_section:(_SFPBRFReferenceFootnoteCardSection *)arg1;
- (unsigned long long)whichValue;

@end

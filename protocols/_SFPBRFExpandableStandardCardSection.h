
@protocol _SFPBRFExpandableStandardCardSection <NSObject>

@required

- (void)addExpanding_component_content:(_SFPBRFExpandingComponentContent *)arg1;
- (void)clearExpanding_component_content;
- (_SFPBRFExpandingComponentContent *)expanding_component_contentAtIndex:(unsigned long long)arg1;
- (unsigned long long)expanding_component_contentCount;
- (NSArray *)expanding_component_contents;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setExpanding_component_contents:(NSArray *)arg1;
- (void)setSummary_item_standard_card_section:(_SFPBRFSummaryItemStandardCardSection *)arg1;
- (_SFPBRFSummaryItemStandardCardSection *)summary_item_standard_card_section;
- (unsigned long long)whichPrimary_Component;

@end

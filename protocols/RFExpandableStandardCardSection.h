
@protocol RFExpandableStandardCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSArray *)expanding_component_content;
- (NSData *)jsonData;
- (void)setExpanding_component_content:(NSArray *)arg1;
- (void)setSummary_item_standard_card_section:(RFSummaryItemStandardCardSection *)arg1;
- (RFSummaryItemStandardCardSection *)summary_item_standard_card_section;

@end


@protocol RFSummaryItemStandardCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setSuppress_text_2_if_text_1_exceeds_a_single_line:(bool)arg1;
- (void)setText_1:(RFTextProperty *)arg1;
- (void)setText_2:(NSArray *)arg1;
- (void)setText_3:(NSArray *)arg1;
- (void)setText_4:(RFTextProperty *)arg1;
- (void)setThumbnail:(RFVisualProperty *)arg1;
- (bool)suppress_text_2_if_text_1_exceeds_a_single_line;
- (RFTextProperty *)text_1;
- (NSArray *)text_2;
- (NSArray *)text_3;
- (RFTextProperty *)text_4;
- (RFVisualProperty *)thumbnail;

@end

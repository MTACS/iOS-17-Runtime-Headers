
@protocol RFSummaryItemShortNumberCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (RFTextProperty *)number;
- (void)setNumber:(RFTextProperty *)arg1;
- (void)setText_1:(RFTextProperty *)arg1;
- (void)setText_2:(RFTextProperty *)arg1;
- (void)setText_3:(NSArray *)arg1;
- (void)setText_4:(NSArray *)arg1;
- (void)setText_5:(RFTextProperty *)arg1;
- (void)setText_6:(RFTextProperty *)arg1;
- (void)setThumbnail:(RFVisualProperty *)arg1;
- (RFTextProperty *)text_1;
- (RFTextProperty *)text_2;
- (NSArray *)text_3;
- (NSArray *)text_4;
- (RFTextProperty *)text_5;
- (RFTextProperty *)text_6;
- (RFVisualProperty *)thumbnail;

@end

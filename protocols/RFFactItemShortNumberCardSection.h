
@protocol RFFactItemShortNumberCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (RFTextProperty *)number;
- (void)setNumber:(RFTextProperty *)arg1;
- (void)setText_1:(RFTextProperty *)arg1;
- (void)setText_2:(NSArray *)arg1;
- (void)setText_3:(NSArray *)arg1;
- (void)setText_4:(RFTextProperty *)arg1;
- (void)setThumbnail:(RFVisualProperty *)arg1;
- (void)setUnit:(RFTextProperty *)arg1;
- (RFTextProperty *)text_1;
- (NSArray *)text_2;
- (NSArray *)text_3;
- (RFTextProperty *)text_4;
- (RFVisualProperty *)thumbnail;
- (RFTextProperty *)unit;

@end

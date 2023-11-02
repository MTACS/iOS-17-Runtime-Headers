
@protocol RFFactItemStandardCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setText_1:(RFTextProperty *)arg1;
- (void)setText_2:(RFTextProperty *)arg1;
- (void)setText_3:(RFTextProperty *)arg1;
- (void)setText_4:(NSArray *)arg1;
- (void)setText_5:(NSArray *)arg1;
- (void)setThumbnail:(RFVisualProperty *)arg1;
- (RFTextProperty *)text_1;
- (RFTextProperty *)text_2;
- (RFTextProperty *)text_3;
- (NSArray *)text_4;
- (NSArray *)text_5;
- (RFVisualProperty *)thumbnail;

@end


@protocol RFSimpleItemRichCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setText_1:(RFTextProperty *)arg1;
- (void)setText_2:(RFTextProperty *)arg1;
- (void)setText_3:(NSArray *)arg1;
- (void)setText_4:(RFTextProperty *)arg1;
- (void)setText_5:(NSArray *)arg1;
- (void)setText_6:(RFTextProperty *)arg1;
- (void)setText_7:(RFTextProperty *)arg1;
- (void)setText_8:(RFTextProperty *)arg1;
- (void)setThumbnail:(RFVisualProperty *)arg1;
- (RFTextProperty *)text_1;
- (RFTextProperty *)text_2;
- (NSArray *)text_3;
- (RFTextProperty *)text_4;
- (NSArray *)text_5;
- (RFTextProperty *)text_6;
- (RFTextProperty *)text_7;
- (RFTextProperty *)text_8;
- (RFVisualProperty *)thumbnail;

@end


@protocol RFFactItemButtonCardSection <SFCardSection>

@required

- (SFButtonItem *)button_1;
- (SFButtonItem *)button_2;
- (SFButtonItem *)button_3;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setButton_1:(SFButtonItem *)arg1;
- (void)setButton_2:(SFButtonItem *)arg1;
- (void)setButton_3:(SFButtonItem *)arg1;
- (void)setText_1:(RFTextProperty *)arg1;
- (void)setText_2:(RFTextProperty *)arg1;
- (void)setText_3:(RFTextProperty *)arg1;
- (void)setText_4:(NSArray *)arg1;
- (void)setText_5:(RFTextProperty *)arg1;
- (void)setThumbnail:(RFVisualProperty *)arg1;
- (RFTextProperty *)text_1;
- (RFTextProperty *)text_2;
- (RFTextProperty *)text_3;
- (NSArray *)text_4;
- (RFTextProperty *)text_5;
- (RFVisualProperty *)thumbnail;

@end

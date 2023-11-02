
@protocol RFReferenceRichCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setText_1:(RFTextProperty *)arg1;
- (void)setText_2:(RFTextProperty *)arg1;
- (void)setThumbnail:(RFVisualProperty *)arg1;
- (RFTextProperty *)text_1;
- (RFTextProperty *)text_2;
- (RFVisualProperty *)thumbnail;

@end

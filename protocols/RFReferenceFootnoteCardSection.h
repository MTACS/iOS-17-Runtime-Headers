
@protocol RFReferenceFootnoteCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setText_1:(RFTextProperty *)arg1;
- (void)setText_2:(RFTextProperty *)arg1;
- (void)setText_3:(RFTextProperty *)arg1;
- (void)setText_4:(RFTextProperty *)arg1;
- (RFTextProperty *)text_1;
- (RFTextProperty *)text_2;
- (RFTextProperty *)text_3;
- (RFTextProperty *)text_4;

@end

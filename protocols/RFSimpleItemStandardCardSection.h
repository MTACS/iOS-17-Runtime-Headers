
@protocol RFSimpleItemStandardCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setText_1:(RFTextProperty *)arg1;
- (void)setText_2:(RFTextProperty *)arg1;
- (void)setText_3:(NSArray *)arg1;
- (void)setText_4:(NSArray *)arg1;
- (void)setText_5:(RFTextProperty *)arg1;
- (void)setText_6:(RFTextProperty *)arg1;
- (RFTextProperty *)text_1;
- (RFTextProperty *)text_2;
- (NSArray *)text_3;
- (NSArray *)text_4;
- (RFTextProperty *)text_5;
- (RFTextProperty *)text_6;

@end

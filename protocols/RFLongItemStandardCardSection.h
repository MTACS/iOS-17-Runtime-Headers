
@protocol RFLongItemStandardCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (bool)has_background_platter;
- (bool)is_quote;
- (NSData *)jsonData;
- (void)setHas_background_platter:(bool)arg1;
- (void)setIs_quote:(bool)arg1;
- (void)setText_1:(RFTextProperty *)arg1;
- (RFTextProperty *)text_1;

@end

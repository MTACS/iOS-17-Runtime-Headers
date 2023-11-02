
@protocol SFRowCardSection <SFCardSection>

@required

- (SFImage *)attributionImage;
- (bool)cardPaddingBottom;
- (NSDictionary *)dictionaryRepresentation;
- (SFImage *)image;
- (bool)imageIsRightAligned;
- (NSData *)jsonData;
- (NSString *)key;
- (bool)keyNoWrap;
- (NSNumber *)keyWeight;
- (SFRichText *)leadingSubtitle;
- (SFRichText *)leadingText;
- (void)setAttributionImage:(SFImage *)arg1;
- (void)setCardPaddingBottom:(bool)arg1;
- (void)setImage:(SFImage *)arg1;
- (void)setImageIsRightAligned:(bool)arg1;
- (void)setKey:(NSString *)arg1;
- (void)setKeyNoWrap:(bool)arg1;
- (void)setKeyWeight:(NSNumber *)arg1;
- (void)setLeadingSubtitle:(SFRichText *)arg1;
- (void)setLeadingText:(SFRichText *)arg1;
- (void)setTrailingSubtitle:(SFRichText *)arg1;
- (void)setTrailingText:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setValue:(NSString *)arg1;
- (void)setValueNoWrap:(bool)arg1;
- (void)setValueWeight:(NSNumber *)arg1;
- (SFRichText *)trailingSubtitle;
- (SFRichText *)trailingText;
- (NSString *)type;
- (NSString *)value;
- (bool)valueNoWrap;
- (NSNumber *)valueWeight;

@end

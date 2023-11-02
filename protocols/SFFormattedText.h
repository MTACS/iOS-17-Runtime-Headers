
@protocol SFFormattedText <SFText>

@required

- (NSDictionary *)dictionaryRepresentation;
- (int)encapsulationStyle;
- (SFImage *)glyph;
- (bool)isBold;
- (bool)isEmphasized;
- (NSData *)jsonData;
- (void)setEncapsulationStyle:(int)arg1;
- (void)setGlyph:(SFImage *)arg1;
- (void)setIsBold:(bool)arg1;
- (void)setIsEmphasized:(bool)arg1;
- (void)setTextColor:(int)arg1;
- (int)textColor;

@end

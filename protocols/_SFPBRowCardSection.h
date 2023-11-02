
@protocol _SFPBRowCardSection <NSObject>

@required

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBImage *)attributionImage;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (bool)cardPaddingBottom;
- (void)clearPunchoutOptions;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (_SFPBImage *)image;
- (bool)imageIsRightAligned;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)key;
- (bool)keyNoWrap;
- (int)keyWeight;
- (_SFPBRichText *)leadingSubtitle;
- (_SFPBRichText *)leadingText;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setAttributionImage:(_SFPBImage *)arg1;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setCardPaddingBottom:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setImage:(_SFPBImage *)arg1;
- (void)setImageIsRightAligned:(bool)arg1;
- (void)setKey:(NSString *)arg1;
- (void)setKeyNoWrap:(bool)arg1;
- (void)setKeyWeight:(int)arg1;
- (void)setLeadingSubtitle:(_SFPBRichText *)arg1;
- (void)setLeadingText:(_SFPBRichText *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTrailingSubtitle:(_SFPBRichText *)arg1;
- (void)setTrailingText:(_SFPBRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setValue:(NSString *)arg1;
- (void)setValueNoWrap:(bool)arg1;
- (void)setValueWeight:(int)arg1;
- (_SFPBRichText *)trailingSubtitle;
- (_SFPBRichText *)trailingText;
- (NSString *)type;
- (NSString *)value;
- (bool)valueNoWrap;
- (int)valueWeight;

@end

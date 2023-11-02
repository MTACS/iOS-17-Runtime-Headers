
@protocol _SFPBCommandRowCardSection <NSObject>

@required

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (_SFPBImage *)image;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setImage:(_SFPBImage *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitle:(_SFPBRichText *)arg1;
- (void)setTitle:(_SFPBRichText *)arg1;
- (void)setToggledImage:(_SFPBImage *)arg1;
- (void)setToggledTitle:(_SFPBRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (_SFPBRichText *)subtitle;
- (_SFPBRichText *)title;
- (_SFPBImage *)toggledImage;
- (_SFPBRichText *)toggledTitle;
- (NSString *)type;

@end


@protocol _SFPBVerticalLayoutCardSection <NSObject>

@required

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (bool)contentsLeading;
- (_SFPBRichText *)footnote;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
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
- (void)setContentsLeading:(bool)arg1;
- (void)setFootnote:(_SFPBRichText *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setThumbnail:(_SFPBImage *)arg1;
- (void)setThumbnailOverlayText:(_SFPBRichText *)arg1;
- (void)setTitle:(_SFPBRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setUseAppIconMetrics:(bool)arg1;
- (_SFPBImage *)thumbnail;
- (_SFPBRichText *)thumbnailOverlayText;
- (_SFPBRichText *)title;
- (NSString *)type;
- (bool)useAppIconMetrics;

@end

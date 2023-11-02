
@protocol _SFPBSuggestionCardSection <NSObject>

@required

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (_SFPBRichText *)detailText;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isContact;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (NSString *)scopedSearchSectionBundleIdentifier;
- (int)separatorStyle;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDetailText:(_SFPBRichText *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsContact:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setScopedSearchSectionBundleIdentifier:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSuggestionText:(_SFPBRichText *)arg1;
- (void)setSuggestionType:(int)arg1;
- (void)setThumbnail:(_SFPBImage *)arg1;
- (void)setTrailingBottomText:(_SFPBFormattedText *)arg1;
- (void)setTrailingMiddleText:(_SFPBFormattedText *)arg1;
- (void)setType:(NSString *)arg1;
- (_SFPBRichText *)suggestionText;
- (int)suggestionType;
- (_SFPBImage *)thumbnail;
- (_SFPBFormattedText *)trailingBottomText;
- (_SFPBFormattedText *)trailingMiddleText;
- (NSString *)type;

@end

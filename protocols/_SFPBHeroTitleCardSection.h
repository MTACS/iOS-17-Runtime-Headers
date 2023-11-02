
@protocol _SFPBHeroTitleCardSection <NSObject>

@required

- (void)addButtonItems:(_SFPBButtonItem *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (NSArray *)buttonItems;
- (_SFPBButtonItem *)buttonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buttonItemsCount;
- (bool)canBeHidden;
- (void)clearButtonItems;
- (void)clearPunchoutOptions;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (unsigned long long)maxVisibleButtonItems;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setButtonItems:(NSArray *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setMaxVisibleButtonItems:(unsigned long long)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitle:(_SFPBRichText *)arg1;
- (void)setTitle:(_SFPBRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (_SFPBRichText *)subtitle;
- (_SFPBRichText *)title;
- (NSString *)type;

@end

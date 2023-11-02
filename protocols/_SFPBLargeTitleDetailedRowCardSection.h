
@protocol _SFPBLargeTitleDetailedRowCardSection <NSObject>

@required

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)addTrailingButtonItems:(_SFPBButtonItem *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (void)clearTrailingButtonItems;
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
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitleButtonItem:(_SFPBButtonItem *)arg1;
- (void)setTitle:(_SFPBRichText *)arg1;
- (void)setTrailingButtonItems:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (_SFPBButtonItem *)subtitleButtonItem;
- (_SFPBRichText *)title;
- (NSArray *)trailingButtonItems;
- (_SFPBButtonItem *)trailingButtonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trailingButtonItemsCount;
- (NSString *)type;

@end


@protocol _SFPBCollectionCardSection <NSObject>

@required

- (void)addCardSections:(_SFPBCardSection *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (_SFPBCommandButtonItem *)buttonItem;
- (bool)canBeHidden;
- (NSArray *)cardSections;
- (_SFPBCardSection *)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)clearCardSections;
- (void)clearPunchoutOptions;
- (_SFPBCollectionStyle *)collectionStyle;
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
- (void)setButtonItem:(_SFPBCommandButtonItem *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setCardSections:(NSArray *)arg1;
- (void)setCollectionStyle:(_SFPBCollectionStyle *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTitle:(_SFPBRichText *)arg1;
- (void)setTitleButtonItem:(_SFPBCommandButtonItem *)arg1;
- (void)setType:(NSString *)arg1;
- (_SFPBRichText *)title;
- (_SFPBCommandButtonItem *)titleButtonItem;
- (NSString *)type;

@end

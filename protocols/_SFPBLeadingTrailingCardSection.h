
@protocol _SFPBLeadingTrailingCardSection <NSObject>

@required

- (void)addLeadingCardSections:(_SFPBCardSection *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)addTrailingCardSections:(_SFPBCardSection *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearLeadingCardSections;
- (void)clearPunchoutOptions;
- (void)clearTrailingCardSections;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)leadingCardSections;
- (_SFPBCardSection *)leadingCardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)leadingCardSectionsCount;
- (_SFPBGraphicalFloat *)leadingToTrailingRatio;
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
- (void)setLeadingCardSections:(NSArray *)arg1;
- (void)setLeadingToTrailingRatio:(_SFPBGraphicalFloat *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTrailingCardSections:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (NSArray *)trailingCardSections;
- (_SFPBCardSection *)trailingCardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trailingCardSectionsCount;
- (NSString *)type;

@end

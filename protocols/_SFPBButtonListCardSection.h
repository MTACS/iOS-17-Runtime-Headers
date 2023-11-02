
@protocol _SFPBButtonListCardSection <NSObject>

@required

- (NSString *)SectionTitle;
- (void)addButtons:(_SFPBButtonItem *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (NSArray *)buttons;
- (_SFPBButtonItem *)buttonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buttonsCount;
- (bool)canBeHidden;
- (void)clearButtons;
- (void)clearPunchoutOptions;
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
- (void)setButtons:(NSArray *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSectionTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setShowMoreButtonTitle:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)showMoreButtonTitle;
- (NSString *)type;

@end

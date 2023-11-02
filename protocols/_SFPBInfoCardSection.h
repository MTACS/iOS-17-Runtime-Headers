
@protocol _SFPBInfoCardSection <NSObject>

@required

- (void)addInfoTuples:(_SFPBInfoTuple *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearInfoTuples;
- (void)clearPunchoutOptions;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (NSArray *)infoTuples;
- (_SFPBInfoTuple *)infoTuplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)infoTuplesCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (unsigned long long)initiallyVisibleTuples;
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
- (void)setInfoTuples:(NSArray *)arg1;
- (void)setInitiallyVisibleTuples:(unsigned long long)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end

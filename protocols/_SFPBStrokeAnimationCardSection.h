
@protocol _SFPBStrokeAnimationCardSection <NSObject>

@required

- (void)addCharacters:(NSString *)arg1;
- (void)addPronunciations:(NSString *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)addStrokeNames:(NSString *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (NSArray *)characters;
- (NSString *)charactersAtIndex:(unsigned long long)arg1;
- (unsigned long long)charactersCount;
- (void)clearCharacters;
- (void)clearPronunciations;
- (void)clearPunchoutOptions;
- (void)clearStrokeNames;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)pronunciations;
- (NSString *)pronunciationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pronunciationsCount;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setCharacters:(NSArray *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPronunciations:(NSArray *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setStrokeAnimationRepresentation:(NSString *)arg1;
- (void)setStrokeNames:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)strokeAnimationRepresentation;
- (NSArray *)strokeNames;
- (NSString *)strokeNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)strokeNamesCount;
- (NSString *)type;

@end

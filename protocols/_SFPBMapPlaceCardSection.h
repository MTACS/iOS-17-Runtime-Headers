
@protocol _SFPBMapPlaceCardSection <NSObject>

@required

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (NSData *)detourInfoData;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSData *)mapsData;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDetourInfoData:(NSData *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setMapsData:(NSData *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setShouldSearchDirectionsAlongCurrentRoute:(bool)arg1;
- (void)setType:(NSString *)arg1;
- (bool)shouldSearchDirectionsAlongCurrentRoute;
- (NSString *)type;

@end

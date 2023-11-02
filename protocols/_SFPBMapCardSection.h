
@protocol _SFPBMapCardSection <NSObject>

@required

- (void)addPins:(_SFPBPin *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (_SFPBMapRegion *)boundingMapRegion;
- (bool)canBeHidden;
- (void)clearPins;
- (void)clearPunchoutOptions;
- (NSString *)footnote;
- (NSString *)footnoteLabel;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)interactive;
- (NSData *)jsonData;
- (_SFPBLatLng *)location;
- (int)pinBehavior;
- (_SFPBColor *)pinColor;
- (NSArray *)pins;
- (_SFPBPin *)pinsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pinsCount;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setBoundingMapRegion:(_SFPBMapRegion *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setFootnote:(NSString *)arg1;
- (void)setFootnoteLabel:(NSString *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setLocation:(_SFPBLatLng *)arg1;
- (void)setPinBehavior:(int)arg1;
- (void)setPinColor:(_SFPBColor *)arg1;
- (void)setPins:(NSArray *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSizeFormat:(int)arg1;
- (void)setType:(NSString *)arg1;
- (int)sizeFormat;
- (NSString *)type;

@end

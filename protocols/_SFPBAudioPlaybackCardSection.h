
@protocol _SFPBAudioPlaybackCardSection <NSObject>

@required

- (void)addPlayCommands:(_SFPBAbstractCommand *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)addStopCommands:(_SFPBAbstractCommand *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearPlayCommands;
- (void)clearPunchoutOptions;
- (void)clearStopCommands;
- (_SFPBRichText *)detailText;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)playCommands;
- (_SFPBAbstractCommand *)playCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)playCommandsCount;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDetailText:(_SFPBRichText *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPlayCommands:(NSArray *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setState:(int)arg1;
- (void)setStopCommands:(NSArray *)arg1;
- (void)setSubtitle:(_SFPBRichText *)arg1;
- (void)setThumbnail:(_SFPBImage *)arg1;
- (void)setTitle:(_SFPBRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (int)state;
- (NSArray *)stopCommands;
- (_SFPBAbstractCommand *)stopCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stopCommandsCount;
- (_SFPBRichText *)subtitle;
- (_SFPBImage *)thumbnail;
- (_SFPBRichText *)title;
- (NSString *)type;

@end

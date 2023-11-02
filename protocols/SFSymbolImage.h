
@protocol SFSymbolImage <SFImage>

@required

- (int)backgroundColor;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (int)primaryColor;
- (bool)punchThroughBackground;
- (int)secondaryColor;
- (void)setBackgroundColor:(int)arg1;
- (void)setPrimaryColor:(int)arg1;
- (void)setPunchThroughBackground:(bool)arg1;
- (void)setSecondaryColor:(int)arg1;
- (void)setSymbolName:(NSString *)arg1;
- (NSString *)symbolName;

@end

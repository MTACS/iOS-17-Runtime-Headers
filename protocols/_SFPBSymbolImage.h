
@protocol _SFPBSymbolImage <NSObject>

@required

- (int)backgroundColor;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
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

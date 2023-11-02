
@protocol _SFPBGradientColor <NSObject>

@required

- (void)addColors:(_SFPBColor *)arg1;
- (void)clearColors;
- (NSArray *)colors;
- (_SFPBColor *)colorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)colorsCount;
- (int)gradientType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setColors:(NSArray *)arg1;
- (void)setGradientType:(int)arg1;

@end

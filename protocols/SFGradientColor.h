
@protocol SFGradientColor <SFColor>

@required

- (NSArray *)colors;
- (NSDictionary *)dictionaryRepresentation;
- (int)gradientType;
- (NSData *)jsonData;
- (void)setColors:(NSArray *)arg1;
- (void)setGradientType:(int)arg1;

@end

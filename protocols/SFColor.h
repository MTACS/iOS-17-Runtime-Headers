
@protocol SFColor <NSObject>

@required

- (double)alphaComponent;
- (double)blueComponent;
- (int)colorTintStyle;
- (SFColor *)darkModeColor;
- (NSDictionary *)dictionaryRepresentation;
- (double)greenComponent;
- (NSData *)jsonData;
- (double)redComponent;
- (void)setAlphaComponent:(double)arg1;
- (void)setBlueComponent:(double)arg1;
- (void)setColorTintStyle:(int)arg1;
- (void)setDarkModeColor:(SFColor *)arg1;
- (void)setGreenComponent:(double)arg1;
- (void)setRedComponent:(double)arg1;

@end

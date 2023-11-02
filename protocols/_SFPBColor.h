
@protocol _SFPBColor <NSObject>

@required

- (_SFPBGraphicalFloat *)alphaComponent;
- (_SFPBAppColor *)appColor;
- (_SFPBGraphicalFloat *)blueComponent;
- (_SFPBCalendarColor *)calendarColor;
- (int)colorTintStyle;
- (_SFPBColor *)darkModeColor;
- (_SFPBGradientColor *)gradientColor;
- (_SFPBGraphicalFloat *)greenComponent;
- (_SFPBImageDerivedColor *)imageDerivedColor;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBGraphicalFloat *)redComponent;
- (void)setAlphaComponent:(_SFPBGraphicalFloat *)arg1;
- (void)setAppColor:(_SFPBAppColor *)arg1;
- (void)setBlueComponent:(_SFPBGraphicalFloat *)arg1;
- (void)setCalendarColor:(_SFPBCalendarColor *)arg1;
- (void)setColorTintStyle:(int)arg1;
- (void)setDarkModeColor:(_SFPBColor *)arg1;
- (void)setGradientColor:(_SFPBGradientColor *)arg1;
- (void)setGreenComponent:(_SFPBGraphicalFloat *)arg1;
- (void)setImageDerivedColor:(_SFPBImageDerivedColor *)arg1;
- (void)setRedComponent:(_SFPBGraphicalFloat *)arg1;
- (void)setWeatherColor:(_SFPBWeatherColor *)arg1;
- (_SFPBWeatherColor *)weatherColor;
- (unsigned long long)whichValue;

@end

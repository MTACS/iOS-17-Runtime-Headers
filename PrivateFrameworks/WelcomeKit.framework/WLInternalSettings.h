
@interface WLInternalSettings : NSObject {
    double  _accessibilityFontScale;
    bool  _enableAccessibilityDisplayInversion;
    bool  _enableDisplayDarkMode;
    bool  _enableDisplayZoom;
}

@property (nonatomic) double accessibilityFontScale;
@property (nonatomic) bool enableAccessibilityDisplayInversion;
@property (nonatomic) bool enableDisplayDarkMode;
@property (nonatomic) bool enableDisplayZoom;

+ (id)settingsWithData:(id)arg1;

- (double)accessibilityFontScale;
- (bool)enableAccessibilityDisplayInversion;
- (bool)enableDisplayDarkMode;
- (bool)enableDisplayZoom;
- (id)initWithJSONDictionary:(id)arg1;
- (void)setAccessibilityFontScale:(double)arg1;
- (void)setEnableAccessibilityDisplayInversion:(bool)arg1;
- (void)setEnableDisplayDarkMode:(bool)arg1;
- (void)setEnableDisplayZoom:(bool)arg1;

@end

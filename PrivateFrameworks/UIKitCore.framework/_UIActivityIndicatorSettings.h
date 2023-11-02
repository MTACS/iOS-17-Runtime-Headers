
@interface _UIActivityIndicatorSettings : PTSettings {
    double  _alphaValue;
    double  _blueValue;
    bool  _customColor;
    double  _fullLoopDuration;
    double  _greenValue;
    double  _redValue;
}

@property (nonatomic) double alphaValue;
@property (nonatomic) double blueValue;
@property (nonatomic) bool customColor;
@property (nonatomic) double fullLoopDuration;
@property (nonatomic) double greenValue;
@property (nonatomic) double redValue;

+ (id)settingsControllerModule;

- (double)alphaValue;
- (double)blueValue;
- (bool)customColor;
- (double)fullLoopDuration;
- (double)greenValue;
- (double)redValue;
- (void)setAlphaValue:(double)arg1;
- (void)setBlueValue:(double)arg1;
- (void)setCustomColor:(bool)arg1;
- (void)setDefaultValues;
- (void)setFullLoopDuration:(double)arg1;
- (void)setGreenValue:(double)arg1;
- (void)setRedValue:(double)arg1;

@end

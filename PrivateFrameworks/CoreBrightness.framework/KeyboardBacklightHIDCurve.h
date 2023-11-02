
@interface KeyboardBacklightHIDCurve : KeyboardBacklight {
    float  _chicletCurveCoefficient;
    float  _chicletCurvePower;
    int  _color;
    float  _curveVersion;
    float  _luxHysteresis;
}

@property (readonly) NSDictionary *brightnessCurve;
@property (readonly) float chicletCurveCoefficient;
@property (readonly) float chicletCurvePower;
@property (readonly) float level;
@property float luxHysteresis;
@property (readonly) float maxCapableNits;
@property (readonly) float maxCurveNits;
@property (readonly) float maxLevelPercentage;
@property (readonly) float minCapableNits;

- (bool)KBBrightnessCurvePropertyHandler:(id)arg1;
- (bool)KBBrightnessLuxHysteresisPropertyHandler:(id)arg1;
- (float)brightness;
- (id)brightnessCurve;
- (void)calculateLevelPercentageAtAmbient:(float)arg1;
- (float)chicletCurveCoefficient;
- (float)chicletCurvePower;
- (int)color;
- (float)convertNitsToLevelPercentage:(float)arg1;
- (float)convertPWMPercentageToNits:(float)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (float)currentLuxToAmbient;
- (float)currentLuxToNits;
- (void)dealloc;
- (id)defaultBrightnessCurve;
- (id)description;
- (void)getKeyboardBacklightPreferences;
- (void)handleLuxUpdate:(float)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 device:(id)arg2;
- (bool)isBrightnessCurveValid:(id)arg1;
- (float)level;
- (float)luxHysteresis;
- (float)maxCapableNits;
- (float)maxCurveNits;
- (float)maxLevelPercentage;
- (float)maxUserLevel;
- (float)minCapableNits;
- (float)perceptualBrightnessForLevel:(float)arg1;
- (void)reconfiguraSettingsForColor:(int)arg1;
- (void)setBacklightLevel:(float)arg1;
- (void)setBrightness:(float)arg1;
- (void)setBrightness:(float)arg1 withFadeSpeed:(int)arg2 commit:(bool)arg3;
- (void)setColor:(int)arg1;
- (void)setLuxHysteresis:(float)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)storeKeyboardBacklightCurveToPreferences;
- (void)storeKeyboardBacklightPreferences;
- (void)updateBrightnessCurve:(id)arg1;
- (void)updateDefaultBrightnessCurve:(id)arg1;
- (void)updateDefaultCurveForColor:(int)arg1;
- (void)updateLuxToNitsCurve;

@end

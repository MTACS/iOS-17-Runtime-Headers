
@interface KeyboardBacklightHIDCurveNits : KeyboardBacklightHIDCurve

@property (readonly) float level;

- (float)brightness;
- (float)convertNitsToLevelPercentage:(float)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 device:(id)arg2;
- (float)level;
- (float)maxCapableNits;
- (float)maxLevelPercentage;
- (float)minCapableNits;
- (void)setBrightness:(float)arg1;
- (void)setBrightness:(float)arg1 withFadeSpeed:(int)arg2 commit:(bool)arg3;

@end

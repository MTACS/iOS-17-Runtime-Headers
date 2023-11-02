
@interface _UIFreeformPointerSettings : PTSettings {
    double  _defaultPointerCornerRadius;
    double  _slipFactorX;
    double  _slipFactorY;
}

@property (nonatomic) double defaultPointerCornerRadius;
@property (nonatomic) double slipFactorX;
@property (nonatomic) double slipFactorY;

+ (id)settingsControllerModule;

- (double)defaultPointerCornerRadius;
- (void)setDefaultPointerCornerRadius:(double)arg1;
- (void)setDefaultValues;
- (void)setSlipFactorX:(double)arg1;
- (void)setSlipFactorY:(double)arg1;
- (double)slipFactorX;
- (double)slipFactorY;

@end

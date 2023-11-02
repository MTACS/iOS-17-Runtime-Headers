
@interface CSDashBoardScrollModifierSettings : PTSettings {
    double  _accumulatedDragThresholdPercentage;
    bool  _cancelScrollingIfTooMuchDrag;
    double  _inertialMultiplierSigmoidAlpha;
    double  _inertialMultiplierSigmoidBase;
    double  _inertialMultiplierSigmoidPivot;
    double  _inertialMultiplierSigmoidRange;
    double  _maxDragFromVerticalPerFrame;
    double  _maxScrollDistance;
    double  _minPercentageSigmoidAlpha;
    double  _minPercentageSigmoidBase;
    double  _minPercentageSigmoidPivot;
    double  _minPercentageSigmoidRange;
    double  _powerOfVerticalDirectionSine2;
    long long  _strategy;
}

@property (nonatomic) double accumulatedDragThresholdPercentage;
@property (nonatomic) bool cancelScrollingIfTooMuchDrag;
@property (nonatomic) double inertialMultiplierSigmoidAlpha;
@property (nonatomic) double inertialMultiplierSigmoidBase;
@property (nonatomic) double inertialMultiplierSigmoidPivot;
@property (nonatomic) double inertialMultiplierSigmoidRange;
@property (nonatomic) double maxDragFromVerticalPerFrame;
@property (nonatomic) double maxScrollDistance;
@property (nonatomic) double minPercentageSigmoidAlpha;
@property (nonatomic) double minPercentageSigmoidBase;
@property (nonatomic) double minPercentageSigmoidPivot;
@property (nonatomic) double minPercentageSigmoidRange;
@property (nonatomic) double powerOfVerticalDirectionSine2;
@property (nonatomic) long long strategy;

+ (id)settingsControllerModule;

- (double)accumulatedDragThresholdPercentage;
- (bool)cancelScrollingIfTooMuchDrag;
- (double)inertialMultiplierSigmoidAlpha;
- (double)inertialMultiplierSigmoidBase;
- (double)inertialMultiplierSigmoidPivot;
- (double)inertialMultiplierSigmoidRange;
- (double)maxDragFromVerticalPerFrame;
- (double)maxScrollDistance;
- (double)minPercentageSigmoidAlpha;
- (double)minPercentageSigmoidBase;
- (double)minPercentageSigmoidPivot;
- (double)minPercentageSigmoidRange;
- (double)powerOfVerticalDirectionSine2;
- (void)setAccumulatedDragThresholdPercentage:(double)arg1;
- (void)setCancelScrollingIfTooMuchDrag:(bool)arg1;
- (void)setDefaultValues;
- (void)setInertialMultiplierSigmoidAlpha:(double)arg1;
- (void)setInertialMultiplierSigmoidBase:(double)arg1;
- (void)setInertialMultiplierSigmoidPivot:(double)arg1;
- (void)setInertialMultiplierSigmoidRange:(double)arg1;
- (void)setMaxDragFromVerticalPerFrame:(double)arg1;
- (void)setMaxScrollDistance:(double)arg1;
- (void)setMinPercentageSigmoidAlpha:(double)arg1;
- (void)setMinPercentageSigmoidBase:(double)arg1;
- (void)setMinPercentageSigmoidPivot:(double)arg1;
- (void)setMinPercentageSigmoidRange:(double)arg1;
- (void)setPowerOfVerticalDirectionSine2:(double)arg1;
- (void)setStrategy:(long long)arg1;
- (long long)strategy;

@end

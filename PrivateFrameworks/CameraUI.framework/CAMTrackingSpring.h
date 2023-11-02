
@interface CAMTrackingSpring : CAMSpring {
    double  __convergenceStartValue;
    struct { 
        double value; 
        double strength; 
    }  __secondaryTarget;
    CAMSpring * __settleProgressSpring;
}

@property (setter=_convergenceStartValue:, nonatomic) double _convergenceStartValue;
@property (setter=_setSecondaryTarget:, nonatomic) struct { double x1; double x2; } _secondaryTarget;
@property (setter=_setSettlingSpring:, nonatomic, retain) CAMSpring *_settleProgressSpring;
@property (nonatomic, readonly) double convergenceProgress;
@property (nonatomic, readonly) bool hasSecondaryTarget;

- (void).cxx_destruct;
- (void)_beginConverging;
- (double)_convergenceStartValue;
- (void)_convergenceStartValue:(double)arg1;
- (struct { double x1; double x2; })_secondaryTarget;
- (void)_setSecondaryTarget:(struct { double x1; double x2; })arg1;
- (void)_setSettlingSpring:(id)arg1;
- (id)_settleProgressSpring;
- (double)convergenceProgress;
- (bool)hasSecondaryTarget;
- (id)initWithTension:(double)arg1 friction:(double)arg2 epsilon:(double)arg3;
- (bool)isConverged;
- (void)removeSecondaryTargetAnimated:(bool)arg1;
- (void)resetToValue:(double)arg1;
- (void)resetToValue:(double)arg1 animated:(bool)arg2;
- (void)setSecondaryTarget:(double)arg1 withStrength:(double)arg2 animated:(bool)arg3;
- (void)setTarget:(double)arg1 animated:(bool)arg2;
- (void)updateForTimestamp:(double)arg1;

@end

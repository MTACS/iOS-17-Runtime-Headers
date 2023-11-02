
@interface TUAnimationPointFunction : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _endValue;
    double  _speed;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startValue;
    CAMediaTimingFunction * _timingFunction;
    TUAnimationFloatFunction * _xFunction;
    TUAnimationFloatFunction * _yFunction;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } endValue;
@property (nonatomic) double speed;
@property (nonatomic) struct CGPoint { double x1; double x2; } startValue;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;
@property (nonatomic, retain) TUAnimationFloatFunction *xFunction;
@property (nonatomic, retain) TUAnimationFloatFunction *yFunction;

- (void).cxx_destruct;
- (void)_reloadFunctions;
- (struct CGPoint { double x1; double x2; })endValue;
- (id)initWithTimingFunction:(id)arg1 startRect:(struct CGPoint { double x1; double x2; })arg2 endRect:(struct CGPoint { double x1; double x2; })arg3 speed:(double)arg4;
- (void)setEndValue:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSpeed:(double)arg1;
- (void)setStartValue:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setXFunction:(id)arg1;
- (void)setYFunction:(id)arg1;
- (struct CGPoint { double x1; double x2; })solveForTime:(double)arg1;
- (double)speed;
- (struct CGPoint { double x1; double x2; })startValue;
- (id)timingFunction;
- (id)xFunction;
- (id)yFunction;

@end

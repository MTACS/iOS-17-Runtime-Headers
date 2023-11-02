
@interface TUAnimationSizeFunction : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _endValue;
    TUAnimationFloatFunction * _heightFunction;
    double  _speed;
    struct CGSize { 
        double width; 
        double height; 
    }  _startValue;
    CAMediaTimingFunction * _timingFunction;
    TUAnimationFloatFunction * _widthFunction;
}

@property (nonatomic) struct CGSize { double x1; double x2; } endValue;
@property (nonatomic, retain) TUAnimationFloatFunction *heightFunction;
@property (nonatomic) double speed;
@property (nonatomic) struct CGSize { double x1; double x2; } startValue;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;
@property (nonatomic, retain) TUAnimationFloatFunction *widthFunction;

- (void).cxx_destruct;
- (void)_reloadFunctions;
- (struct CGSize { double x1; double x2; })endValue;
- (id)heightFunction;
- (id)initWithTimingFunction:(id)arg1 startRect:(struct CGSize { double x1; double x2; })arg2 endRect:(struct CGSize { double x1; double x2; })arg3 speed:(double)arg4;
- (void)setEndValue:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeightFunction:(id)arg1;
- (void)setSpeed:(double)arg1;
- (void)setStartValue:(struct CGSize { double x1; double x2; })arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setWidthFunction:(id)arg1;
- (struct CGSize { double x1; double x2; })solveForTime:(double)arg1;
- (double)speed;
- (struct CGSize { double x1; double x2; })startValue;
- (id)timingFunction;
- (id)widthFunction;

@end

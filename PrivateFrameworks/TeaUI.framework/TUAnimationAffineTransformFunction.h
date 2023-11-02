
@interface TUAnimationAffineTransformFunction : NSObject {
    TUAnimationFloatFunction * _aFunction;
    TUAnimationFloatFunction * _bFunction;
    TUAnimationFloatFunction * _cFunction;
    TUAnimationFloatFunction * _dFunction;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _endValue;
    double  _speed;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _startValue;
    CAMediaTimingFunction * _timingFunction;
    TUAnimationFloatFunction * _txFunction;
    TUAnimationFloatFunction * _tyFunction;
}

@property (nonatomic, retain) TUAnimationFloatFunction *aFunction;
@property (nonatomic, retain) TUAnimationFloatFunction *bFunction;
@property (nonatomic, retain) TUAnimationFloatFunction *cFunction;
@property (nonatomic, retain) TUAnimationFloatFunction *dFunction;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } endValue;
@property (nonatomic) double speed;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } startValue;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;
@property (nonatomic, retain) TUAnimationFloatFunction *txFunction;
@property (nonatomic, retain) TUAnimationFloatFunction *tyFunction;

- (void).cxx_destruct;
- (void)_reloadFunctions;
- (id)aFunction;
- (id)bFunction;
- (id)cFunction;
- (id)dFunction;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })endValue;
- (id)initWithTimingFunction:(id)arg1 startTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 endTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 speed:(double)arg4;
- (void)setAFunction:(id)arg1;
- (void)setBFunction:(id)arg1;
- (void)setCFunction:(id)arg1;
- (void)setDFunction:(id)arg1;
- (void)setEndValue:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setSpeed:(double)arg1;
- (void)setStartValue:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setTxFunction:(id)arg1;
- (void)setTyFunction:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })solveForTime:(double)arg1;
- (double)speed;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })startValue;
- (id)timingFunction;
- (id)txFunction;
- (id)tyFunction;

@end

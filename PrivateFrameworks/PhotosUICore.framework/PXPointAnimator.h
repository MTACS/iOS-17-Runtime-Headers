
@interface PXPointAnimator : PXObservable <PXChangeObserver, PXMutablePointAnimator, PXNumberAnimatorDisplayLinkTarget> {
    bool  _isAnimating;
    NSString * _label;
    struct CGPoint { 
        double x; 
        double y; 
    }  _presentationValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _value;
    PXNumberAnimator<PXMutableNumberAnimator> * _xAnimator;
    PXNumberAnimator<PXMutableNumberAnimator> * _yAnimator;
}

@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double epsilon;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimating;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) struct CGPoint { double x1; double x2; } presentationValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } value;
@property (nonatomic, readonly) PXNumberAnimator<PXMutableNumberAnimator> *xAnimator;
@property (nonatomic, readonly) PXNumberAnimator<PXMutableNumberAnimator> *yAnimator;

- (void).cxx_destruct;
- (void)_setInternalValue:(struct CGPoint { double x1; double x2; })arg1;
- (void)_update;
- (struct CGPoint { double x1; double x2; })approximateVelocity;
- (double)currentTime;
- (id)description;
- (void)didPerformChanges;
- (double)epsilon;
- (void)handleDisplayLink:(id)arg1;
- (id)init;
- (id)initWithValue:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithValue:(struct CGPoint { double x1; double x2; })arg1 epsilon:(double)arg2;
- (bool)isAnimating;
- (id)label;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(struct CGPoint { double x1; double x2; })arg1 changes:(id /* block */)arg2;
- (void)performChangesUsingSpringAnimationWithStiffness:(double)arg1 dampingRatio:(double)arg2 initialVelocity:(struct CGPoint { double x1; double x2; })arg3 changes:(id /* block */)arg4;
- (void)performChangesWithDuration:(double)arg1 curve:(long long)arg2 changes:(id /* block */)arg3;
- (void)performChangesWithoutAnimation:(id /* block */)arg1;
- (struct CGPoint { double x1; double x2; })presentationValue;
- (void)setIsAnimating:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setPresentationValue:(struct CGPoint { double x1; double x2; })arg1;
- (void)setValue:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })value;
- (id)xAnimator;
- (id)yAnimator;

@end

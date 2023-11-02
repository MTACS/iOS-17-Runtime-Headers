
@interface CSShakableView : SBFTouchPassThroughView <CAAnimationDelegate> {
    SBFTouchPassThroughView * _containerView;
    NSArray * _prototypeSpringAnimations;
    id /* block */  _shakeCompletionBlock;
    double  _shakeDistance;
}

@property (nonatomic, readonly) SBFTouchPassThroughView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *prototypeSpringAnimations;
@property (nonatomic) double shakeDistance;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultSpringAnimations;
- (void)_invokeCompletionBlockIfNecessary;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)beginShakingWithCompletion:(id /* block */)arg1;
- (id)containerView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)prototypeSpringAnimations;
- (void)setPrototypeSpringAnimations:(id)arg1;
- (void)setShakeDistance:(double)arg1;
- (double)shakeDistance;

@end

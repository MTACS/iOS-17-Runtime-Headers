
@interface PXUIViewControllerFadeThroughColorTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    double  _duration;
    UIColor * _midpointColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UIColor *midpointColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)duration;
- (id)init;
- (id)initWithDuration:(double)arg1 midpointColor:(id)arg2;
- (id)midpointColor;
- (double)transitionDuration:(id)arg1;

@end

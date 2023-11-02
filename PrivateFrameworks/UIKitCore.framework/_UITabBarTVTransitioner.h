
@interface _UITabBarTVTransitioner : NSObject <_UITabBarControllerInterruptibleTransitioning> {
    double  _fromViewLayerOriginalRasterizationScale;
    bool  _fromViewOriginalShouldRasterize;
    UISpringTimingParameters * _slideTimingParameters;
    double  _toViewLayerOriginalRasterizationScale;
    bool  _toViewOriginalShouldRasterize;
    UIView * _toViewXFlippedScreenShot;
    <UIViewControllerContextTransitioning> * _transitionContext;
    bool  _transitionFromRight;
    long long  _transitionStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISpringTimingParameters *slideTimingParameters;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *toViewXFlippedScreenShot;
@property (nonatomic, retain) <UIViewControllerContextTransitioning> *transitionContext;
@property (nonatomic) bool transitionFromRight;
@property (nonatomic) long long transitionStyle;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)finishTransition;
- (id)init;
- (void)interruptTabBarControllerTransition;
- (void)setSlideTimingParameters:(id)arg1;
- (void)setToViewXFlippedScreenShot:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setTransitionFromRight:(bool)arg1;
- (void)setTransitionStyle:(long long)arg1;
- (id)slideTimingParameters;
- (id)toViewXFlippedScreenShot;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (bool)transitionFromRight;
- (long long)transitionStyle;

@end

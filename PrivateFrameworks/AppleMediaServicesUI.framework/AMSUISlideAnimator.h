
@interface AMSUISlideAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    CASpringAnimation * _animation;
}

@property (nonatomic, retain) CASpringAnimation *animation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

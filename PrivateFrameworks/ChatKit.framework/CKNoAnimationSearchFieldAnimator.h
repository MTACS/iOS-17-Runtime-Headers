
@interface CKNoAnimationSearchFieldAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _appearing;
}

@property (getter=isAppearing, nonatomic) bool appearing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)animateTransition:(id)arg1;
- (id)initWithAppearing:(bool)arg1;
- (bool)isAppearing;
- (void)setAppearing:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end


@protocol SBHViewControllerTransitionAnimationContext

@required

- (long long)targetEndpoint;
- (long long)transitionEndpoint;
- (id)userInfo;
- (bool)wantsAnimation;

@end

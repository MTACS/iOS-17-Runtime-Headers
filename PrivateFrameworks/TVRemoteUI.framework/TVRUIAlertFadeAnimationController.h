
@interface TVRUIAlertFadeAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    long long  _animationType;
    <TVRemoteAlertVisualStyleProviding> * _visualStyle;
}

@property (nonatomic, readonly) long long animationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <TVRemoteAlertVisualStyleProviding> *visualStyle;

- (void).cxx_destruct;
- (void)_runDismissalAnimationWithTransition:(id)arg1;
- (void)_runPresentationAnimationWithTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (long long)animationType;
- (id)initWithAnimationType:(long long)arg1 visualStyle:(id)arg2;
- (double)transitionDuration:(id)arg1;
- (id)visualStyle;

@end

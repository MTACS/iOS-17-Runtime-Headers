
@interface SBSystemApertureAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    id  _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_settings, setter=_setSettings:, nonatomic, retain) id settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateTransition:(id)arg1 actions:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)_bsAnimationSettings;
- (void)_setSettings:(id)arg1;
- (id)_settings;
- (void)animateTransition:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

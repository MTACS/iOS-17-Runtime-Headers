
@interface SBDismissOverlaysAnimationController : SBUIAnimationController {
    unsigned long long  _dismissOptions;
    SBWorkspaceTransitionRequest * _transitionRequest;
}

@property (nonatomic, readonly) unsigned long long dismissOptions;

+ (unsigned long long)_overlaysToDismissForOptions:(unsigned long long)arg1;
+ (bool)willDismissOverlaysForDismissOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_canBeInterrupted;
- (void)_startAnimation;
- (id)animationSettings;
- (unsigned long long)dismissOptions;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 options:(unsigned long long)arg2;

@end

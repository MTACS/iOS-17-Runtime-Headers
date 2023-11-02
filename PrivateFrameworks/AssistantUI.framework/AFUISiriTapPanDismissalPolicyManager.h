
@interface AFUISiriTapPanDismissalPolicyManager : NSObject {
    <AFUISiriTapPanDismissalPolicyManagerDelegate> * _delegate;
    bool  _dimmingLayerVisible;
    long long  _dismissalPolicy;
    bool  _idleAndQuiet;
    bool  _shouldDismissForTapsAndPans;
}

@property (getter=_delegate, setter=_setDelegate:, nonatomic) <AFUISiriTapPanDismissalPolicyManagerDelegate> *delegate;
@property (getter=_dimmingLayerVisible, setter=_setDimmingLayerVisible:, nonatomic) bool dimmingLayerVisible;
@property (getter=_dismissalPolicy, setter=_setDismissalPolicy:, nonatomic) long long dismissalPolicy;
@property (getter=_idleAndQuiet, setter=_setIdleAndQuiet:, nonatomic) bool idleAndQuiet;
@property (getter=_shouldDismissForTapsAndPans, setter=_setShouldDismissForTapsAndPans:, nonatomic) bool shouldDismissForTapsAndPans;

- (void).cxx_destruct;
- (id)_delegate;
- (bool)_dimmingLayerVisible;
- (long long)_dismissalPolicy;
- (void)_dismissalPolicyForPassThroughAlways:(bool)arg1 forSessionState:(long long)arg2;
- (void)_dismissalPolicyForPassThroughUnlessDimmed:(bool)arg1 forSessionState:(long long)arg2;
- (bool)_idleAndQuiet;
- (void)_setDelegate:(id)arg1;
- (void)_setDimmingLayerVisible:(bool)arg1;
- (void)_setDismissalPolicy:(long long)arg1;
- (void)_setIdleAndQuiet:(bool)arg1;
- (void)_setShouldDismissForTapsAndPans:(bool)arg1;
- (void)_setShouldDismissForTapsAndPans:(bool)arg1 shouldDelayDelegateUpdate:(bool)arg2;
- (bool)_shouldDismissForTapsAndPans;
- (void)_updateDelegateOfPolicyChange;
- (void)dimmingLayerVisibilityDidChange:(bool)arg1 forSessionState:(long long)arg2;
- (void)idleAndQuietDidChange:(bool)arg1 forSessionState:(long long)arg2;
- (void)idleAndQuietDidChange:(bool)arg1 forSessionState:(long long)arg2 dimmingLayerVisible:(bool)arg3;
- (id)initWithPolicy:(long long)arg1 delegate:(id)arg2;
- (void)invalidate;

@end

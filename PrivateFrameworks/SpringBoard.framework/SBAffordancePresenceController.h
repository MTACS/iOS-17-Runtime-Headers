
@interface SBAffordancePresenceController : NSObject <PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, SBTransientUITapToUnhideParticipant> {
    SBAppSwitcherSettings * _appSwitcherSettings;
    bool  _autoHideAffordance;
    <SBAffordancePresenceControllerDelegate> * _delegate;
    bool  _edgeProtectEnabled;
    NSMutableSet * _hiddenOverrides;
    SBFHomeGrabberSettings * _homeGrabberSettings;
    SBAttentionAwarenessClient * _idleTouchAwarenessClient;
    unsigned long long  _lastActivatingToken;
    unsigned long long  _lastInitialHideToken;
    unsigned long long  _lastVisibilityTransitionToken;
    NSMutableSet * _outstandingVisibilityTransitionTokens;
    long long  _presence;
    bool  _shouldEnableGestures;
    long long  _touchState;
    SBWindowScene * _windowScene;
}

@property (nonatomic) bool autoHideAffordance;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBAffordancePresenceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_animationSettingsForTransitionFromPresence:(long long)arg1 toPresence:(long long)arg2;
- (long long)_calculatePresence;
- (void)_unhideIfAutoHidden;
- (void)_updateIdleTouchAwarenessClient;
- (void)_updatePresence;
- (void)_updatePresence:(long long)arg1 withAnimationSettings:(id)arg2;
- (bool)autoHideAffordance;
- (void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4;
- (void)clientDidResetForUserAttention:(id)arg1;
- (long long)currentPresence;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 windowScene:(id)arg2;
- (void)setAutoHideAffordance:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(bool)arg1 forReason:(id)arg2 animated:(bool)arg3;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)transientUI:(id)arg1 wasIndirectPannedToDismissFromGestureRecognizer:(id)arg2;
- (void)transientUI:(id)arg1 wasTappedToUnhideFromGestureRecognizer:(id)arg2;
- (bool)transientUIHandledTouch:(id)arg1 withSystemGestureRecognizer:(id)arg2;

@end

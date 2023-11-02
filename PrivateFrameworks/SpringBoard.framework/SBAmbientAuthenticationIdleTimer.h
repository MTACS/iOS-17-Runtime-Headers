
@interface SBAmbientAuthenticationIdleTimer : NSObject <SBFMobileKeyBagObserver> {
    AWAttentionAwarenessClient * _attentionClient;
    bool  _attentionClientActive;
    long long  _authenticated;
    BSContinuousMachTimer * _authenticationLimitTimer;
    bool  _enabled;
    double  _idleTimerDuration;
    SBFMobileKeyBag * _keybag;
    double  _lastAuthenticationTime;
    double  _maximumAuthenticatedInterval;
}

@property (getter=_isAttentionClientActive, setter=_setAttentionClientActive:, nonatomic) bool attentionClientActive;
@property (getter=_isAuthenticated, setter=_setAuthenticated:, nonatomic) bool authenticated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) double idleTimerDuration;
@property (nonatomic) double maximumAuthenticatedInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAttentionLost:(id)arg1;
- (id)_initWithKeyBag:(id)arg1 attentionAwarenessClient:(id)arg2;
- (bool)_isAttentionClientActive;
- (bool)_isAuthenticated;
- (void)_recomputeAuthenticationLimitTimer;
- (void)_reconfigureAttentionClient;
- (void)_setAttentionClientActive:(bool)arg1;
- (void)_setAuthenticated:(bool)arg1;
- (void)_updateAttentionClientActive;
- (void)dealloc;
- (double)idleTimerDuration;
- (id)init;
- (bool)isEnabled;
- (void)keybag:(id)arg1 extendedStateDidChange:(id)arg2;
- (double)maximumAuthenticatedInterval;
- (void)setEnabled:(bool)arg1;
- (void)setIdleTimerDuration:(double)arg1;
- (void)setMaximumAuthenticatedInterval:(double)arg1;

@end

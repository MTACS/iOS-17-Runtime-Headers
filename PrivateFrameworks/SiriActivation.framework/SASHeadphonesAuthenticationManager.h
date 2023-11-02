
@interface SASHeadphonesAuthenticationManager : NSObject <AFSiriHeadphonesMonitorDelegate, SASLockStateMonitorDelegate> {
    AFSiriAudioRoute * _audioRoute;
    bool  _authenticated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _authenticatedLock;
    double  _authenticatedTime;
    AFSiriHeadphonesMonitor * _headphonesMonitor;
    NSString * _inEarDetectionBTAddress;
    AFBluetoothHeadphoneInEarDetectionState * _inEarDetectionState;
    bool  _inEarStateEligible;
    bool  _lockStateEligible;
    SASLockStateMonitor * _lockStateMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _routeEligible;
    unsigned long long  _sessionState;
    bool  _sessionStateEligible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchInitialState;
- (id)_headphonesMonitor;
- (bool)_inEarDetectionStateEligibleForState:(id)arg1;
- (id)_initForTesting;
- (void)_invalidateAuthenticationWithReason:(long long)arg1;
- (id)_lockStateMonitor;
- (void)_logEligibilityForAuthenticatedState:(bool)arg1 andTimedOut:(bool)arg2;
- (void)_recomputeAuthentication;
- (void)_startObserving;
- (bool)_wearingSessionEligible;
- (void)currentAudioRouteDidChange:(id)arg1;
- (void)dealloc;
- (void)didChangeLockState:(unsigned long long)arg1;
- (void)getHeadphonesAuthenticationStatusWithCompletion:(id /* block */)arg1;
- (void)inEarDetectionStateDidChangeForBTAddress:(id)arg1 toState:(id)arg2;
- (id)init;
- (bool)isAuthenticated;
- (void)privateAudioSessionStateDidChange:(unsigned long long)arg1;

@end

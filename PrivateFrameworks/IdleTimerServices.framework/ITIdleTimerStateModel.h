
@interface ITIdleTimerStateModel : NSObject <ITIdleTimerStateRequestDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    NSMutableDictionary * _access_idleTimerAssertionsByConfigIdentifier;
    <ITIdleTimerStateRequestHandling> * _requestHandler;
    <BSInvalidatable> * _stateCaptureAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isIdleTimerServiceAvailable, readonly) bool idleTimerServiceAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_access_newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;
- (void)_addStateCaptureHandler;
- (void)dealloc;
- (bool)handleIdleEvent:(unsigned long long)arg1 usingConfigurationWithIdentifier:(id)arg2;
- (id)init;
- (bool)isIdleTimerServiceAvailable;
- (id)newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;
- (void)resendIdleTimerAssertions;

@end

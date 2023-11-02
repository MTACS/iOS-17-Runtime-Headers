
@interface BLSHCancelWhenBacklightInactivatesAttributeEntry : BLSValidWhenBacklightInactiveAttributeEntry <BLSBacklightStateObserving> {
    BLSBacklight * _backlight;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_active;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvents:(id)arg3 abortedEvents:(id)arg4;
- (id)initForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;
- (void)invalidate;
- (bool)reactivateIfPossible;

@end

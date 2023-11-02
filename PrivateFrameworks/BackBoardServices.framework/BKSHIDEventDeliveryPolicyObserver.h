
@interface BKSHIDEventDeliveryPolicyObserver : NSObject <BKSHIDEventDeferringObserving> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_canReceiveEvents;
    BKSHIDEventDisplay * _lock_display;
    BKSHIDEventDeferringEnvironment * _lock_environment;
    NSHashTable * _lock_observers;
    NSSet * _lock_resolutions;
    BKSHIDEventDeferringToken * _lock_token;
    BKSHIDEventObserver * _observer;
    <BSInvalidatable> * _observingAssertion;
}

@property (nonatomic, readonly) bool canReceiveEvents;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (nonatomic, copy) BKSHIDEventDeferringToken *deferringToken;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) BKSHIDEventDisplay *display;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithObserver:(id)arg1;
- (bool)_lock_canReceiveEvents;
- (id)_lock_updateStateWithBlock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (bool)canReceiveEvents;
- (void)dealloc;
- (id)debugDescription;
- (id)deferringEnvironment;
- (void)deferringResolutionsChanged;
- (id)deferringToken;
- (id)description;
- (id)display;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)setDeferringEnvironment:(id)arg1;
- (void)setDeferringToken:(id)arg1;
- (void)setDisplay:(id)arg1;

@end

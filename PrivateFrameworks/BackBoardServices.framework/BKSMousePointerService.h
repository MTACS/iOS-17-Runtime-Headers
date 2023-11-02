
@interface BKSMousePointerService : NSObject <BKSMousePointerServiceServerToClientInterface> {
    NSSet * _attachedDevices;
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    BSCompoundAssertion * _deviceConnectionObservers;
    NSMutableDictionary * _displayUUIDToPerDisplayInfo;
    bool  _isObservingDeviceConnection;
    bool  _isObservingPreferences;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSCompoundAssertion * _preferencesObservers;
    BSCompoundAssertion * _suppressMouseEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) BKSMousePointerDevicePreferences *globalDevicePreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;
+ (id)sharedInstance;
+ (bool)supportsReadyToReceiveEventServiceProperty;

- (void).cxx_destruct;
- (void)_activateServerConnection;
- (id)_init;
- (id)_locked_infoForDisplayUUID:(id)arg1 createIfNeeded:(bool)arg2;
- (void)_locked_pointingDevicesDidChange:(id)arg1;
- (void)_locked_reactivateConnection;
- (void)_locked_sendCurrentAssertionParameters:(id)arg1 forDisplayUUID:(id)arg2;
- (id)_locked_serverTarget;
- (void)_locked_setMousePointerDeviceObservationEnabled:(bool)arg1;
- (void)_locked_setMousePointerPreferencesObservationEnabled:(bool)arg1;
- (void)_locked_updateEventRoutesFromContext:(id)arg1 forDisplayUUID:(id)arg2;
- (void)_locked_updateObserver:(id)arg1 withPointingDevices:(id)arg2;
- (void)_locked_updateServerWithPointerDeviceObservationState;
- (void)_locked_updateServerWithPreferencesObservationState;
- (id)_unlocked_serverTarget;
- (id)acquireButtonDownPointerRepositionAssertionForReason:(id)arg1 contextRelativePointerPosition:(id)arg2 onDisplay:(id)arg3 restrictingToPID:(int)arg4;
- (id)addPointerDeviceObserver:(id)arg1;
- (id)addPointerPreferencesObserver:(id)arg1;
- (void)dealloc;
- (void)getHitTestContextsAtPoint:(id)arg1 withAdditionalContexts:(id)arg2 onDisplay:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)globalDevicePreferences;
- (struct CGPoint { double x1; double x2; })globalPointerPosition;
- (id)init;
- (struct CGPoint { double x1; double x2; })normalizedGlobalPointerPosition;
- (oneway void)pointerGlobalDevicePreferencesDidChange:(id)arg1;
- (id)pointerSuppressionAssertionOnDisplay:(id)arg1 forReason:(id)arg2 withOptionsMask:(unsigned long long)arg3;
- (oneway void)pointingDevicesDidChange:(id)arg1;
- (id)preferencesForDevice:(id)arg1;
- (id)requestGlobalMouseEventsForDisplay:(id)arg1 targetContextID:(unsigned int)arg2;
- (id)requestGlobalMouseEventsForDisplay:(id)arg1 targetContextID:(unsigned int)arg2 options:(id)arg3;
- (void)setContextRelativePointerPosition:(id)arg1 onDisplay:(id)arg2 withAnimationParameters:(id)arg3 restrictingToPID:(int)arg4;
- (void)setContextRelativePointerPosition:(id)arg1 withInitialVelocity:(id)arg2 onDisplay:(id)arg3 withDecelerationRate:(double)arg4 restrictingToPID:(int)arg5;
- (void)setGlobalDevicePreferences:(id)arg1;
- (void)setGlobalPointerPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPointerPosition:(struct CGPoint { double x1; double x2; })arg1 onDisplay:(id)arg2 withAnimationParameters:(id)arg3;
- (void)setPreferences:(id)arg1 forDevice:(id)arg2;
- (id)suppressPointerEventsForReason:(id)arg1;

@end


@interface SBHardwareButtonService : NSObject <SBSystemServiceServerHardwareButtonDelegate> {
    BSMutableIntegerMap * _clientsByPID;
    BSMutableIntegerMap * _eventMaskPerKind;
    NSMutableArray * _observers;
    RBSProcessMonitor * _processMonitor;
    BSMutableIntegerMap * _registrationsByButtonKind;
    FBServiceClientAuthenticator * _serviceClientEventConsumerEntitlement;
    FBServiceClientAuthenticator * _serviceClientHomeHardwareButtonHintSuppressionEntitlementAuthenticator;
    SBSystemServiceServer * _systemServiceServer;
}

@property (nonatomic, retain) BSMutableIntegerMap *clientsByPID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BSMutableIntegerMap *registrationsByButtonKind;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addRegistration:(id)arg1 toClient:(id)arg2;
- (id)_applicationForClientInfo:(id)arg1;
- (id)_init;
- (id)_initWithSystemServiceServer:(id)arg1;
- (id)_mutableRegistrationsForButtonKind:(long long)arg1;
- (id)_mutableRegistrationsForButtonKind:(long long)arg1 createIfNecessary:(bool)arg2;
- (void)_performButtonRegistrationChangeAndNotifyObservers:(id /* block */)arg1;
- (void)_process:(id)arg1 stateDidUpdate:(id)arg2;
- (void)_reconfigureProcessMonitor;
- (void)_reconfigureProcessMonitorForPredicates:(id)arg1;
- (id)_registrationsForButtonKind:(long long)arg1;
- (void)_removeRegistration:(id)arg1 fromClient:(id)arg2;
- (bool)_sendEvent:(long long)arg1 buttonKind:(long long)arg2 withPriority:(long long)arg3;
- (bool)_sendEvent:(long long)arg1 buttonKind:(long long)arg2 withPriority:(long long)arg3 continuation:(out id /* block */*)arg4;
- (void)_sendXPCMessageForEvent:(long long)arg1 buttonKind:(long long)arg2 priority:(long long)arg3 toClient:(id)arg4;
- (void)_setSystemServiceClient:(id)arg1 buttonKind:(long long)arg2 eventMask:(unsigned long long)arg3 priority:(long long)arg4;
- (void)_updateAllButtonEventMasks;
- (void)_updateEventMasksForButtonKind:(long long)arg1;
- (id)addObserver:(id)arg1;
- (id)clientsByPID;
- (bool)consumeHeadsetPlayPauseSinglePressDownWithPriority:(long long)arg1 continuation:(out id /* block */*)arg2;
- (bool)consumeHeadsetPlayPauseSinglePressUpWithPriority:(long long)arg1;
- (bool)consumeHomeButtonDoublePressDownWithPriority:(long long)arg1;
- (bool)consumeHomeButtonLongPressWithPriority:(long long)arg1;
- (bool)consumeHomeButtonSinglePressUpWithPriority:(long long)arg1;
- (bool)consumeHomeButtonTriplePressUpWithPriority:(long long)arg1;
- (bool)consumeLockButtonDoublePressUpWithPriority:(long long)arg1;
- (bool)consumeLockButtonLongPressWithPriority:(long long)arg1;
- (bool)consumeLockButtonSinglePressUpWithPriority:(long long)arg1;
- (bool)consumeRingerSwitchToggleStateOffWithPriority:(long long)arg1;
- (bool)consumeRingerSwitchToggleStateOnWithPriority:(long long)arg1;
- (bool)consumeVolumeDecreaseButtonSinglePressDownWithPriority:(long long)arg1 continuation:(out id /* block */*)arg2;
- (bool)consumeVolumeDecreaseButtonSinglePressUpWithPriority:(long long)arg1;
- (bool)consumeVolumeIncreaseButtonSinglePressDownWithPriority:(long long)arg1 continuation:(out id /* block */*)arg2;
- (bool)consumeVolumeIncreaseButtonSinglePressUpWithPriority:(long long)arg1;
- (bool)hasConsumersForHomeButtonPresses;
- (bool)hasConsumersForHomeButtonSinglePress;
- (bool)hasConsumersForLockButtonDoublePressUp;
- (bool)hasConsumersForLockButtonPresses;
- (id)init;
- (id)registrationsByButtonKind;
- (void)setClientsByPID:(id)arg1;
- (void)setRegistrationsByButtonKind:(id)arg1;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 acquireAssertionOfType:(long long)arg3 forReason:(id)arg4 withCompletion:(id /* block */)arg5;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 fetchHapticTypeForButtonKind:(long long)arg3 completion:(id /* block */)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 requestsHIDEvents:(bool)arg3 token:(id)arg4 forButtonKind:(long long)arg5;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setEventMask:(unsigned long long)arg3 buttonKind:(long long)arg4 priority:(long long)arg5;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setHapticType:(long long)arg3 buttonKind:(long long)arg4;
- (void)systemServiceServer:(id)arg1 clientDidDisconnect:(id)arg2;

@end

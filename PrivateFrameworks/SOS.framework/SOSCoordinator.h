
@interface SOSCoordinator : NSObject <IDSServiceDelegate> {
    bool  _ackSuccess;
    <SOSCoreAnalyticsReporting> * _coreAnalyticsReporter;
    NSObject<OS_dispatch_semaphore> * _eventProcessingSemaphore;
    NSObject<OS_dispatch_queue> * _eventUUIDArrayQueue;
    IDSService * _idsService;
    NSHashTable * _observers;
    NSMutableDictionary * _pendingMessageRetriesById;
    NSMutableDictionary * _pendingMessagesById;
    NSObject<OS_dispatch_queue> * _pendingMessagesQueue;
    NSMutableArray * _processingEventUUIDs;
}

@property (nonatomic, retain) <SOSCoreAnalyticsReporting> *coreAnalyticsReporter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)SOSCoordinationMessageTypeForString:(id)arg1;
- (void)_handleServiceUpdate:(id)arg1;
- (bool)_sendUrgentMessageToPairedDevice:(id)arg1 retries:(id)arg2;
- (void)_updateStateForPairedDevice:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)coreAnalyticsReporter;
- (void)dealloc;
- (id)effectivePairedDevice;
- (void)handleSOSMessageTypeHandoffSOS:(id)arg1;
- (void)handleSOSMessageTypeHandoffSOSAck:(id)arg1;
- (void)handleSOSMessageTypeProgressionSync:(id)arg1;
- (id)init;
- (bool)isIncomingMessageValidHandoffAck:(id)arg1;
- (bool)isIncomingMessageValidSOSHandoff:(id)arg1;
- (bool)isPairedDeviceNearby;
- (id)observers;
- (bool)processEventWithUUID:(id)arg1 triggerMechanism:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)reportHandoff:(long long)arg1 result:(long long)arg2;
- (void)sendAckToHandoffMessage:(id)arg1 success:(bool)arg2;
- (void)sendUpdateToObserversWithStatus:(id)arg1 progression:(long long)arg2 shouldHandleThirdParty:(bool)arg3;
- (bool)sendUrgentMessageToPairedDevice:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)setCoreAnalyticsReporter:(id)arg1;
- (void)setObservers:(id)arg1;
- (bool)shouldHandoffToPairedDevice:(long long)arg1;
- (bool)shouldRetryMessage:(id)arg1;
- (long long)sourceDevice;
- (void)syncProgressionWithPairedDevice:(long long)arg1 sosStatus:(id)arg2;
- (bool)tryPushToPairedDeviceWithUUID:(id)arg1 triggerMechanism:(long long)arg2;

@end

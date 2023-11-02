
@interface HMDSiriServer : NSObject <HMDDataStreamBulkSendListener, HMDSiriAccessoryMonitorDelegate, HMFLogging> {
    NSObject<OS_dispatch_workloop> * _audioWorkloop;
    HMDNotificationRegistration * _notificationRegistration;
    NSObject<OS_dispatch_queue> * _queue;
    HMDSiriAccessoryMonitor * _siriAccessoryMonitor;
    HMDSiriRemoteInputServer * _siriInputServer;
    HMDSiriSession * _siriUISession;
    unsigned int  _targetControlIdentifier;
}

@property (nonatomic, retain) NSObject<OS_dispatch_workloop> *audioWorkloop;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDNotificationRegistration *notificationRegistration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) HMDSiriAccessoryMonitor *siriAccessoryMonitor;
@property (nonatomic, retain) HMDSiriRemoteInputServer *siriInputServer;
@property (nonatomic, retain) HMDSiriSession *siriUISession;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int targetControlIdentifier;

+ (id)logCategory;
+ (id)sharedSiriServer;

- (void).cxx_destruct;
- (void)_checkSiriSupportByAccessory:(id)arg1;
- (id)_getBestAudioCodecConfiguration:(id)arg1;
- (id)_getSiriSessionForAccessory:(id)arg1;
- (void)_handleDisconnectForAccessory:(id)arg1;
- (bool)_isAudioCodecSupported:(id)arg1;
- (bool)_isSiriInputType:(long long)arg1 supportedOnAccessory:(id)arg2 siriAudioConfiguration:(id)arg3;
- (void)_maybeTearDownSiriPlugin;
- (void)_removeDataStreamListenerForAccessory:(id)arg1;
- (void)_setupSiriPlugin;
- (void)_setupSiriUIContext;
- (void)_tearDownSiriUIContext;
- (void)accessory:(id)arg1 didCloseDataStreamWithError:(id)arg2;
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2;
- (void)accessoryDidStartListening:(id)arg1;
- (id)audioWorkloop;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleAccessoryHasBulkSendDataStream:(id)arg1;
- (void)handleAccessoryRemoved:(id)arg1;
- (void)handleAccessoryUnconfigured:(id)arg1;
- (id)init;
- (void)monitor:(id)arg1 needsSiriCapabilityForAccessory:(id)arg2;
- (void)monitor:(id)arg1 willAllowAccessoryForDragonSiri:(id)arg2;
- (void)monitor:(id)arg1 willNotAllowAccessoryForDragonSiri:(id)arg2;
- (void)monitorHasNoAccessoriesForDragonSiri:(id)arg1;
- (id)notificationRegistration;
- (id)queue;
- (void)registerForMessages;
- (void)setAudioWorkloop:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSiriAccessoryMonitor:(id)arg1;
- (void)setSiriInputServer:(id)arg1;
- (void)setSiriUISession:(id)arg1;
- (void)setTargetControlIdentifier:(unsigned int)arg1;
- (void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2;
- (id)siriAccessoryMonitor;
- (id)siriInputServer;
- (id)siriUISession;
- (unsigned int)targetControlIdentifier;

@end

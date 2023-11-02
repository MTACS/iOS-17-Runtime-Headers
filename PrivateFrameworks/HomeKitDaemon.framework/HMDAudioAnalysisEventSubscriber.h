
@interface HMDAudioAnalysisEventSubscriber : NSObject <HMFLogging, HMFMessageReceiver> {
    <HMDAudioAnalysisEventSubscriberContext> * _context;
}

@property (readonly) <HMDAudioAnalysisEventSubscriberContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleAudioAnalysisEventMessage:(id)arg1;
- (void)_postBulletinNotificationWithBulletin:(id)arg1;
- (void)_postOrUpdateNotificationWithBulletin:(id)arg1;
- (void)_postOrUpdateNotificationWithBulletin:(id)arg1 stereoPairedAccessory:(id)arg2;
- (void)_postUpdateEventRouterEventIfDifferent:(id)arg1;
- (void)configureWithContext:(id)arg1;
- (id)context;
- (void)deregisterForMessages;
- (id)initWithContext:(id)arg1;
- (id)logIdentifier;
- (id)mediaSystemLastKnownEventKeyForAccessoryUUID:(id)arg1 pairedAccessoryUUID:(id)arg2 reason:(unsigned long long)arg3;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)postNotificationForEvent:(id)arg1;
- (void)postOrUpdateNotificationWithBulletinIfneeded:(id)arg1;
- (void)registerForMessages;
- (bool)shouldPublishEvent:(id)arg1;
- (id)stereoPairedCounterpartAccessory;
- (id)transformHMDBulletinToHMBulletin:(id)arg1;

@end

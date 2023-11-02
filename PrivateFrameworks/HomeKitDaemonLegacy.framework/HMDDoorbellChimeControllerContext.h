
@interface HMDDoorbellChimeControllerContext : NSObject <HMDDoorbellChimeControllerContext> {
    HMDHAPAccessory * _accessory;
    HMDCharacteristicsAvailabilityListener * _listener;
    <HMDCoordinationStateManagerProviding> * _stateManagerProvider;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property HMDHAPAccessory *accessory;
@property (getter=isCoordinationPathEnabled, readonly) bool coordinationPathEnabled;
@property (readonly, copy) NSUUID *currentAccessoryUUID;
@property (getter=isCurrentDevicePrimaryResident, readonly) bool currentDevicePrimaryResident;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) Class doorbellBulletinUtilitiesClass;
@property (readonly) double doorbellChimeMaximumAnnounceDelay;
@property (getter=isFeatureEnabled, readonly) bool featureEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) HMDCharacteristicsAvailabilityListener *listener;
@property (readonly) <HMMLogEventSubmitting> *logEventDispatcher;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) <HMDCOStateManager> *stateManager;
@property (readonly) <HMDCoordinationStateManagerProviding> *stateManagerProvider;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)accessory;
- (bool)accessorySupportsCoordinationDoorbellChime:(id)arg1;
- (id)clearCoordinationStateForKeyPaths:(id)arg1;
- (id)currentAccessoryUUID;
- (Class)doorbellBulletinUtilitiesClass;
- (double)doorbellChimeMaximumAnnounceDelay;
- (id)fetchDoorbellDelay;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2;
- (bool)isCoordinationPathEnabled;
- (bool)isCurrentDevicePrimaryResident;
- (bool)isFeatureEnabled;
- (id)keyPathFromComponents:(id)arg1;
- (id)listener;
- (id)logEventDispatcher;
- (id)notificationCenter;
- (id)postCULiveAction:(id)arg1;
- (id)postCoordinationState:(id)arg1;
- (void)setAccessory:(id)arg1;
- (id)stateManager;
- (id)stateManagerProvider;
- (id)workQueue;

@end

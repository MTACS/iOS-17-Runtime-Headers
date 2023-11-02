
@protocol HMDDoorbellChimeControllerContext <NSObject>

@required

- (HMDHAPAccessory *)accessory;
- (bool)accessorySupportsCoordinationDoorbellChime:(HMDAppleMediaAccessory *)arg1;
- (NAFuture *)clearCoordinationStateForKeyPaths:(NSSet *)arg1;
- (NSUUID *)currentAccessoryUUID;
- (Class)doorbellBulletinUtilitiesClass;
- (double)doorbellChimeMaximumAnnounceDelay;
- (NAFuture *)fetchDoorbellDelay;
- (bool)isCoordinationPathEnabled;
- (bool)isCurrentDevicePrimaryResident;
- (bool)isFeatureEnabled;
- (<HMDDoorbellChimeCOKeyPath> *)keyPathFromComponents:(NSArray *)arg1;
- (HMDCharacteristicsAvailabilityListener *)listener;
- (<HMMLogEventSubmitting> *)logEventDispatcher;
- (NSNotificationCenter *)notificationCenter;
- (NAFuture *)postCULiveAction:(CULiveAction *)arg1;
- (NAFuture *)postCoordinationState:(NSDictionary *)arg1;
- (void)setAccessory:(HMDHAPAccessory *)arg1;
- (NSObject<OS_dispatch_queue> *)workQueue;

@end

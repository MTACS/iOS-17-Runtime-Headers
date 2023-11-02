
@interface HMDCameraSnapshotMonitorEvents : HMFObject <HMDCharacteristicsAvailabilityListenerDelegate, HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate> {
    HMDHAPAccessory * _accessory;
    <HMDCameraBulletinBoard> * _bulletinBoard;
    NSString * _bulletinImagesDirectory;
    NSSet * _bulletinSnapshotCharacteristics;
    HMDCharacteristicsAvailabilityListener * _characteristicsAvailabilityListener;
    NSString * _clientIdentifier;
    NSString * _logIdentifier;
    HMFMessageDispatcher * _msgDispatcher;
    HMDNotificationRegistration * _notificationRegistration;
    NSMutableSet * _snapShotNotificationResponseTimers;
    HMDCameraSnapshotManager * _snapshotManager;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (copy) NSSet *bulletinSnapshotCharacteristics;
@property (retain) HMDCharacteristicsAvailabilityListener *characteristicsAvailabilityListener;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *logIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (readonly) NSUUID *uniqueIdentifier;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)bulletinSnapshotCharacteristics;
- (id)characteristicsAvailabilityListener;
- (id)clientIdentifier;
- (void)dealloc;
- (void)handleBulletinBoardNotificationDidUpdateNotification:(id)arg1;
- (void)handleCameraSettingsDidUpdateNotification:(id)arg1;
- (void)handleCharacteristicsChangedNotification:(id)arg1;
- (id)initWithSnapshotManager:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)registerForMessages;
- (void)setBulletinSnapshotCharacteristics:(id)arg1;
- (void)setCharacteristicsAvailabilityListener:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)uniqueIdentifier;

@end

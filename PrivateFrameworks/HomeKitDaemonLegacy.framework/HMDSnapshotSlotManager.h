
@interface HMDSnapshotSlotManager : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    NSMapTable * _filledSnapshotSlotIdentifiersByProcess;
    NSString * _imageCacheDirectory;
    NSString * _logIdentifier;
    HMDSnapshotFile * _mostRecentSnapshot;
    HMFMessageDispatcher * _msgDispatcher;
    HMDNotificationRegistration * _notificationRegistration;
    NSMapTable * _snapshotFilesByAssociatedProcessInfo;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *encodedMostRecentSnapshot;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)backboardServicesRelaunched:(id)arg1;
- (id)createSlotForSnapshotFile:(id)arg1 requestMessages:(id)arg2 shouldNotifyClients:(bool)arg3;
- (id)encodedMostRecentSnapshot;
- (id)encodedMostRecentSnapshotForMessage:(id)arg1;
- (void)handleFillSnapshotSlot:(id)arg1;
- (void)handleProcessStateChange:(id)arg1;
- (void)handleReleaseSnapshot:(id)arg1;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 imageCacheDirectory:(id)arg3 logID:(id)arg4 uniqueIdentifier:(id)arg5 msgDispatcher:(id)arg6;
- (id)logIdentifier;
- (void)registerForMessages;
- (id)uniqueIdentifier;

@end


@interface HMDPersonSettingsManager : HMFObject <HMFLogging, HMFMessageReceiver> {
    NSUUID * _UUID;
    <HMDPersonSettingsManagerDependencyFactory> * _dependencyFactory;
    HMDHome * _home;
    HMBLocalZone * _localZone;
    HMFMessageDispatcher * _messageDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDPersonSettingsManagerDependencyFactory> *dependencyFactory;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSURL *personSettingsManagerMigrationFileURL;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (void)_handleFetchClassificationNotificationsEnabledForPersonMessage:(id)arg1;
- (void)_handleSetClassificationNotificationsEnabledForPersonMessage:(id)arg1;
- (void)_registerForMessages;
- (id)_setClassificationNotificationsEnabled:(id)arg1 forPersonUUID:(id)arg2;
- (bool)areClassificationNotificationsEnabledForPersonUUID:(id)arg1;
- (void)configure;
- (id)dependencyFactory;
- (id)home;
- (id)initWithHome:(id)arg1 localZone:(id)arg2 dependencyFactory:(id)arg3 workQueue:(id)arg4;
- (id)initWithHome:(id)arg1 localZone:(id)arg2 workQueue:(id)arg3;
- (id)localZone;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)personSettingsManagerMigrationFileURL;
- (void)remove;
- (void)savePersonManagerSettingsToLocalDiskForMigration;
- (id)workQueue;

@end


@interface HMDHomePersonDataManager : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMDHome * _home;
    NSUUID * _homeUUID;
    HMDHomePersonManager * _personManager;
    id /* block */  _personManagerFactory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (readonly, copy) NSUUID *homeUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (retain) HMDHomePersonManager *personManager;
@property (copy) id /* block */ personManagerFactory;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure;
- (void)configurePersonManager;
- (void)handleUpdateSettingsMessage:(id)arg1;
- (void)handleUpdatedSettingsModel:(id)arg1 previousSettingsModel:(id)arg2 message:(id)arg3;
- (id)home;
- (id)homeUUID;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)personManager;
- (id /* block */)personManagerFactory;
- (void)removeCloudDataDueToHomeGraphObjectRemoval:(bool)arg1;
- (void)removeCloudDataDueToHomeRemoval;
- (void)setHome:(id)arg1;
- (void)setPersonManager:(id)arg1;
- (void)setPersonManagerFactory:(id /* block */)arg1;
- (id)updateSettingsModelWithSettings:(id)arg1;
- (id)workQueue;

@end

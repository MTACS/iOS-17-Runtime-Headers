
@interface HMDPrimaryResidentDiscoveryManager : NSObject <HMDPrimaryResidentDiscoveryManager, HMFLogging, HMFTimerDelegate> {
    <HMDResidentDeviceManagerContext> * _context;
    <HMDPrimaryResidentDiscoveryManagerDataSource> * _dataSource;
    NSString * _logIdentifier;
    <HMDPrimaryResidentDiscoveryOperation> * _primaryDiscoveryOperation;
    NSObject<OS_dispatch_queue> * _queue;
    HMFExponentialBackoffTimer * _retryTimer;
    <HMDPrimaryResidentDiscoveryManagerDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDPrimaryResidentDiscoveryManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *logIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_discoverPrimaryResident;
- (void)_handleDeviceMonitorReachableNotification:(id)arg1;
- (void)_removeRetryTimer;
- (void)_startRetryTimer;
- (void)cancel;
- (void)completedDiscoveryWithPrimaryResident:(id)arg1 primaryResidentGenerationID:(id)arg2 error:(id)arg3;
- (void)configureWithContext:(id)arg1;
- (id)delegate;
- (void)discoverPrimaryResident;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2;
- (id)logIdentifier;
- (void)sendCheckForResidentsInHomeNotification;
- (void)setDelegate:(id)arg1;
- (void)setLogIdentifier:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end

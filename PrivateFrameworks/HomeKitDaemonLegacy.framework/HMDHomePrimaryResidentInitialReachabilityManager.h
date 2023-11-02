
@interface HMDHomePrimaryResidentInitialReachabilityManager : HMFObject <HMFLogging> {
    <HMDHomePrimaryResidentInitialReachabilityManagerDataSource> * _dataSource;
    HMDHome * _home;
    NSString * _key;
    NSNotificationCenter * _notificationCenter;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) <HMDHomePrimaryResidentInitialReachabilityManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (readonly, copy) NSNumber *initialReachability;
@property (readonly, copy) NSString *key;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) HMDResidentReachabilityState *persistedState;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)clearPersistedState;
- (void)configureWithHome:(id)arg1;
- (id)dataSource;
- (void)handleHomeRemovedNotification:(id)arg1;
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;
- (void)handlePrimaryResidentUpdated:(id)arg1 reason:(id)arg2;
- (void)handleResidentDeviceEnabledStateChangeNotification:(id)arg1;
- (void)handleResidentDeviceManagerUpdateResidentNotification:(id)arg1;
- (id)home;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4;
- (id)initialReachability;
- (id)key;
- (id)logIdentifier;
- (id)notificationCenter;
- (void)persistState:(id)arg1;
- (id)persistedState;
- (void)setHome:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end

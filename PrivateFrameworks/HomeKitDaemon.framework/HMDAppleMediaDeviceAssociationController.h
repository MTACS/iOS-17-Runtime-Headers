
@interface HMDAppleMediaDeviceAssociationController : NSObject <HMDTimerProvider, HMFLogging, HMFMessageReceiver, HMFTimerDelegate> {
    NSUUID * _accessoryUUID;
    HMDBackingStore * _backingStore;
    HMFTimer * _backoffTimer;
    bool  _busy;
    <HMDAppleMediaDeviceAssociationControllerDataSource> * _dataSource;
    NSUUID * _homeUUID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _mkfAppleMediaModelFinder;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _queue;
    HMDResidentSyncManager * _residentSyncManager;
    long long  _timerIntervalIndex;
    <HMDTimerProvider> * _timerProvider;
}

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly) HMDBackingStore *backingStore;
@property (retain) HMFTimer *backoffTimer;
@property (readonly) <HMDAppleMediaDeviceAssociationControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (copy) id /* block */ mkfAppleMediaModelFinder;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) HMDResidentSyncManager *residentSyncManager;
@property (readonly) Class superclass;
@property long long timerIntervalIndex;
@property <HMDTimerProvider> *timerProvider;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_currentDeviceHasDeviceAddress;
- (id)_deviceAssociationInfoFromProtoData:(id)arg1;
- (void)_handleAppleAccountManagerResolvedNotification:(id)arg1;
- (void)_handleDeviceUpdatedNotification:(id)arg1;
- (void)_handleHMDAppleMediaDeviceAssociationPushMessage:(id)arg1;
- (void)_handlePrimaryChange:(id)arg1;
- (void)_handlePrimaryResidentDeviceAddressUpdate;
- (void)_process;
- (void)_pushDeviceAddress;
- (void)_pushDeviceAddressIfNeeded;
- (void)_registerForMessages:(id)arg1 messageDispatcher:(id)arg2;
- (void)_registerForNotifications:(id)arg1;
- (void)_setStatusBusy:(bool)arg1;
- (void)_shouldPushDeviceAddressWithCompletion:(id /* block */)arg1;
- (void)_startRetryTimer;
- (bool)_statusBusy;
- (void)_updateIdsAddressWithAccessoryUUID:(id)arg1 idsIdentifier:(id)arg2 idsDestination:(id)arg3 completion:(id /* block */)arg4;
- (id)accessoryUUID;
- (id)backingStore;
- (id)backoffTimer;
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2;
- (id)dataSource;
- (void)handleTransactionObjectUpdated;
- (id)homeUUID;
- (id)initWithHome:(id)arg1 accessory:(id)arg2 dataSource:(id)arg3;
- (id)initWithQueue:(id)arg1 homeUUID:(id)arg2 accessoryUUID:(id)arg3 residentSyncManager:(id)arg4 backingStore:(id)arg5 notificationCenter:(id)arg6 dataSource:(id)arg7;
- (id)logIdentifier;
- (id)messageTargetUUID;
- (id)mkfAppleMediaAccessoryWithModelIdentifier:(id)arg1;
- (id /* block */)mkfAppleMediaModelFinder;
- (double)nextInterval;
- (id)notificationCenter;
- (id)queue;
- (id)residentSyncManager;
- (void)setBackoffTimer:(id)arg1;
- (void)setMkfAppleMediaModelFinder:(id /* block */)arg1;
- (void)setTimerIntervalIndex:(long long)arg1;
- (void)setTimerProvider:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (long long)timerIntervalIndex;
- (id)timerProvider;
- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@end

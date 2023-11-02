
@interface HMDDeviceNotificationHandler : HMFObject <HMFLogging, HMFTimerDelegate> {
    HMFTimer * _coalesceTimer;
    <HMDDeviceNotificationHandlerDataSource> * _dataSource;
    bool  _delaySupported;
    HMFTimer * _delayTimer;
    NSString * _destination;
    NSMutableOrderedSet * _deviceNotificationsByRequestIDs;
    HMDHome * _home;
    HMFMessageDispatcher * _messageDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HMFTimer *coalesceTimer;
@property (nonatomic, readonly) <HMDDeviceNotificationHandlerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool delaySupported;
@property (nonatomic, retain) HMFTimer *delayTimer;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *destination;
@property (retain) NSMutableOrderedSet *deviceNotificationsByRequestIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_beginCoalesce:(bool)arg1;
- (void)_dispatchNotification;
- (void)_dispatchNotificationUpdate:(id)arg1;
- (id)_notificationUpdateWithRequestID:(id)arg1 allowAdd:(bool)arg2;
- (id)coalesceTimer;
- (id)dataSource;
- (bool)delaySupported;
- (id)delayTimer;
- (id)destination;
- (id)deviceNotificationsByRequestIDs;
- (id)home;
- (id)initWithDestination:(id)arg1 watchDevice:(bool)arg2 withRequestIdentifier:(id)arg3 messageDispatcher:(id)arg4 home:(id)arg5;
- (id)initWithDestination:(id)arg1 watchDevice:(bool)arg2 withRequestIdentifier:(id)arg3 messageDispatcher:(id)arg4 home:(id)arg5 dataSource:(id)arg6;
- (id)logIdentifier;
- (id)messageDispatcher;
- (void)sendCoalescedRemoteNotificationForAccessories:(id)arg1;
- (void)sendNotificationForCharacteristicUpdates:(id)arg1 withRequestIdentifier:(id)arg2 notificationUpdateIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)sendNotificationForMediaProperties:(id)arg1 withRequestIdentifier:(id)arg2 notificationUpdateIdentifier:(id)arg3;
- (void)setCoalesceTimer:(id)arg1;
- (void)setDelaySupported:(bool)arg1;
- (void)setDelayTimer:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDeviceNotificationsByRequestIDs:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end


@interface HMDAccessoryReachabilityChangedLogEventManager : HMFObject <HMDLogEventDailyTaskRunner, HMFLogging> {
    bool  _enabled;
    HMDHome * _home;
    NSMutableDictionary * _transportReachabilityChangeDatesByUUID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_disable;
- (void)_enable;
- (void)_reset;
- (void)_submit;
- (void)_submitDailyUpdateForAccessory:(id)arg1 withTransportReport:(id)arg2;
- (void)_submitForAccessory:(id)arg1;
- (void)_submitForAccessory:(id)arg1 withTransportReport:(id)arg2 reachable:(bool)arg3 changed:(bool)arg4;
- (void)configure;
- (void)handlePrimaryResidentUpdatedNotification:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)logEventDispatcher;
- (id)logIdentifier;
- (void)runDailyTask;
- (void)submitForAccessory:(id)arg1 withTransportReport:(id)arg2 reachable:(bool)arg3;
- (id)workQueue;

@end

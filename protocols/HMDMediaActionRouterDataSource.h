
@protocol HMDMediaActionRouterDataSource <NSObject>

@required

- (NSArray *)appleMediaAccessories;
- (HMDDevice *)companionDevice;
- (NSArray *)enabledResidents;
- (HMDHome *)home;
- (bool)isCompanionReachable;
- (<HMMLogEventSubmitting> *)logEventSubmitter;
- (HMDMediaProfile *)mediaProfileWithUUID:(NSUUID *)arg1;
- (HMFMessageDispatcher *)msgDispatcher;
- (NSUUID *)uuid;
- (NSObject<OS_dispatch_queue> *)workQueue;

@end

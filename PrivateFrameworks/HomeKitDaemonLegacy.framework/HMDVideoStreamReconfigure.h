
@interface HMDVideoStreamReconfigure : HMFObject <HMFLogging, HMFTimerDelegate> {
    <HMDVideoStreamReconfigureDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMFTimer * _downgradeDebouceTimer;
    NSDictionary * _downlinkQualityInfo;
    bool  _reconfigurationMode;
    NSMutableArray * _reconfigureEvents;
    HMDCameraStreamSessionID * _sessionID;
    HMFTimer * _upgradeDebouceTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)downlinkQualityChanged:(id)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;
- (void)updateReconfigurationMode:(bool)arg1;

@end

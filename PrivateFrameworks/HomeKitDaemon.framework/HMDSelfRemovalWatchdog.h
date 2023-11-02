
@interface HMDSelfRemovalWatchdog : NSObject <HMDCoreDataCloudMirroringExportStatusMonitorDelegate, HMFLogging, HMFTimerDelegate> {
    id /* block */  _completion;
    NSManagedObjectID * _currentAccessoryModelObjectID;
    NSUUID * _currentAccessoryUUID;
    HMDCoreDataCloudMirroringExportStatusMonitor * _monitor;
    NSDate * _selfRemovalBeginDate;
    HMFTimer * _watchdogTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (copy) id /* block */ completion;
@property (retain) NSManagedObjectID *currentAccessoryModelObjectID;
@property (readonly, copy) NSUUID *currentAccessoryUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMDCoreDataCloudMirroringExportStatusMonitor *monitor;
@property (readonly) NSDate *selfRemovalBeginDate;
@property (readonly) Class superclass;
@property (retain) HMFTimer *watchdogTimer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_retrieveExpectedObjectIDsTokenMap;
- (void)_stopWithError:(id)arg1;
- (id /* block */)completion;
- (void)configure;
- (id)currentAccessoryModelObjectID;
- (id)currentAccessoryUUID;
- (id)initWithCurrentAccessoryUUID:(id)arg1 workQueue:(id)arg2;
- (id)monitor;
- (void)monitorDidObserveExportComplete:(id)arg1;
- (id)selfRemovalBeginDate;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCurrentAccessoryModelObjectID:(id)arg1;
- (void)setMonitor:(id)arg1;
- (void)setWatchdogTimer:(id)arg1;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)timerDidFire:(id)arg1;
- (id)watchdogTimer;
- (id)workQueue;

@end


@interface HMDThreadNetworkStatusReporter : NSObject <HMFLogging> {
    HMDHome * _home;
    unsigned long long  _threadNetworkPeriodicCheckFrequencyInMins;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long threadNetworkPeriodicCheckFrequencyInMins;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_checkIfThreadNetworkIsRunningWithCompletion:(id /* block */)arg1;
- (void)_runThreadNetworkStatusPeriodicUpdate;
- (void)_scheduleThreadNetworkStatusPeriodicUpdate;
- (id)home;
- (id)initWithHome:(id)arg1;
- (void)run;
- (void)setThreadNetworkPeriodicCheckFrequencyInMins:(unsigned long long)arg1;
- (unsigned long long)threadNetworkPeriodicCheckFrequencyInMins;
- (id)workQueue;

@end

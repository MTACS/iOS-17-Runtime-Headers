
@interface STYSignpostsMonitor : NSObject {
    unsigned int  _eventCount;
    STYGeneralSignpostMonitorHelper * _generalSignpostHelper;
    NSObject<OS_dispatch_queue> * _monitorQueue;
    SignpostSupportObjectExtractor * _signpostExtractor;
    STYSpecialAppLaunchSignpostMonitorHelper * _specialAppLaunchSignpostHelper;
    unsigned int  _successiveExtractorFailureCount;
    NSDate * _timeOfLastExtractorFailure;
    STYWorkflowResponsivenessMonitorHelper * _workflowResponsivenessHelper;
}

@property unsigned int eventCount;
@property (retain) STYGeneralSignpostMonitorHelper *generalSignpostHelper;
@property (retain) NSObject<OS_dispatch_queue> *monitorQueue;
@property (retain) SignpostSupportObjectExtractor *signpostExtractor;
@property (retain) STYSpecialAppLaunchSignpostMonitorHelper *specialAppLaunchSignpostHelper;
@property unsigned int successiveExtractorFailureCount;
@property (retain) NSDate *timeOfLastExtractorFailure;
@property (retain) STYWorkflowResponsivenessMonitorHelper *workflowResponsivenessHelper;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)checkMonitoring:(bool)arg1;
- (void)disable;
- (unsigned int)eventCount;
- (void)forEachEnabledHelper:(id /* block */)arg1;
- (void)forEachHelper:(id /* block */)arg1;
- (id)generalSignpostHelper;
- (id)init;
- (bool)monitorAppLaunchSignposts;
- (id)monitorQueue;
- (bool)monitorSignposts:(bool)arg1;
- (bool)monitorWorkflowsWithDailyLogLimit:(int)arg1 perPeriodLogLimit:(int)arg2 periodLengthSec:(int)arg3;
- (bool)needsEnablementChange;
- (void)reportLatencyToReceiveSignposts:(id)arg1;
- (void)setEventCount:(unsigned int)arg1;
- (void)setGeneralSignpostHelper:(id)arg1;
- (void)setMonitorQueue:(id)arg1;
- (void)setSignpostExtractor:(id)arg1;
- (void)setSpecialAppLaunchSignpostHelper:(id)arg1;
- (void)setSuccessiveExtractorFailureCount:(unsigned int)arg1;
- (void)setTimeOfLastExtractorFailure:(id)arg1;
- (void)setWorkflowResponsivenessHelper:(id)arg1;
- (void)setupRetryAfterFailure;
- (id)signpostExtractor;
- (id)specialAppLaunchSignpostHelper;
- (void)stopMonitoringAppLaunchSignposts;
- (void)stopMonitoringSignposts;
- (void)stopMonitoringWorkflows;
- (unsigned int)successiveExtractorFailureCount;
- (id)timeOfLastExtractorFailure;
- (id)workflowResponsivenessHelper;

@end


@interface STYWorkflowResponsivenessMonitorHelper : STYSignpostsMonitorHelper {
    SignpostSupportSubsystemCategoryAllowlist * _allowList;
    int  _perDayLogLimit;
    NSObject<OS_dispatch_source> * _perDayTimer;
    int  _perPeriodLogLimit;
    NSObject<OS_dispatch_source> * _perPeriodTimer;
    int  _periodLengthSec;
    id /* block */  _settingsChangedCallback;
    NSObject<OS_dispatch_queue> * _settingsChangedCallbackQueue;
    NSArray * _workflowEventTrackers;
    WRWorkflowProvider * _workflowProvider;
}

@property int perDayLogLimit;
@property (retain) NSObject<OS_dispatch_source> *perDayTimer;
@property int perPeriodLogLimit;
@property (retain) NSObject<OS_dispatch_source> *perPeriodTimer;
@property int periodLengthSec;
@property (copy) id /* block */ settingsChangedCallback;
@property (retain) NSObject<OS_dispatch_queue> *settingsChangedCallbackQueue;
@property (retain) NSArray *workflowEventTrackers;
@property (retain) WRWorkflowProvider *workflowProvider;

- (void).cxx_destruct;
- (id)allowList;
- (void)didEndMonitoring;
- (void)handleEmit:(id)arg1;
- (void)handleInterval:(id)arg1;
- (void)handleIntervalBegin:(id)arg1;
- (void)handleSignpost:(id)arg1;
- (id)init;
- (id)name;
- (void)notifyWhenSettingsChanged:(id)arg1 block:(id /* block */)arg2;
- (int)perDayLogLimit;
- (id)perDayTimer;
- (int)perPeriodLogLimit;
- (id)perPeriodTimer;
- (int)periodLengthSec;
- (void)resetCounts;
- (void)resetPerDayCounts;
- (void)resetPerPeriodCounts;
- (void)resetState;
- (void)setPerDayLogLimit:(int)arg1;
- (void)setPerDayTimer:(id)arg1;
- (void)setPerPeriodLogLimit:(int)arg1;
- (void)setPerPeriodTimer:(id)arg1;
- (void)setPeriodLengthSec:(int)arg1;
- (void)setSettingsChangedCallback:(id /* block */)arg1;
- (void)setSettingsChangedCallbackQueue:(id)arg1;
- (void)setWorkflowEventTrackers:(id)arg1;
- (void)setWorkflowProvider:(id)arg1;
- (id /* block */)settingsChangedCallback;
- (id)settingsChangedCallbackQueue;
- (void)willStartMonitoring;
- (void)workflowEventCompleted:(id)arg1 overallIntervalStart:(id)arg2 overallIntervalEnd:(id)arg3 startSignpost:(id)arg4 endSignpost:(id)arg5;
- (id)workflowEventTrackers;
- (id)workflowProvider;

@end

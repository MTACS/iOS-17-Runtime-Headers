
@interface HDMCAnalysisScheduler : NSObject <HDHealthDaemonReadyObserver> {
    HDMCAnalysisManager * _analysisManager;
    HKCalendarCache * _calendarCache;
    HKMCSettingsManager * _settingsManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_delayUntilNextAnalysisSchedulingWindowStartDateAfterDate:(id)arg1;
- (void)_handleActivity:(id)arg1 forceRescheduleOnCheckIn:(bool)arg2;
- (void)_registerActivityAfterCompletion:(bool)arg1;
- (void)_runAnalysis;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithDaemon:(id)arg1 analysisManager:(id)arg2 settingsManager:(id)arg3 calendarCache:(id)arg4;

@end

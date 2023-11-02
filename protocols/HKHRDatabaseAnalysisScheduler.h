
@protocol HKHRDatabaseAnalysisScheduler

@required

- (<HKHRDatabaseAnalysisSchedulerDelegate> *)delegate;
- (void)forceAnalysis;
- (void)scheduleAnalysis;
- (void)setDelegate:(id <HKHRDatabaseAnalysisSchedulerDelegate>)arg1;

@end

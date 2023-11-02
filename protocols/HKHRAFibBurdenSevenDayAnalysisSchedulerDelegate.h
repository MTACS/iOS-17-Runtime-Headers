
@protocol HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate

@required

- (void)sevenDayAnalysisScheduler:(HKHRAFibBurdenSevenDayAnalysisScheduler *)arg1 didSuccessfullyCompleteAnalysisWithSample:(HKQuantitySample *)arg2 onboardedWithinAnalysisInterval:(bool)arg3 featureStatus:(HKFeatureStatus *)arg4;

@end

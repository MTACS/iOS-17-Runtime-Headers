
@interface HDMCAnalyticsManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver> {
    HDMCAnalysisManager * _analysisManager;
    HDFeatureAvailabilityManager * _deviationDetectionFeatureAvailabilityManager;
    HDFeatureAvailabilityManager * _heartRateFeatureAvailabilityManager;
    HDProfile * _profile;
    HDFeatureAvailabilityManager * _wristTemperatureInputFeatureAvailabilityManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_submitAnalyticsWithCompletion:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2 heartRateFeatureAvailabilityManager:(id)arg3 deviationDetectionFeatureAvailabilityManager:(id)arg4 wristTemperatureInputFeatureAvailabilityManager:(id)arg5;
- (void)profileDidBecomeReady:(id)arg1;
- (void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(id /* block */)arg2;

@end

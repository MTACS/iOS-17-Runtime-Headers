
@interface HKMobilityWalkingSteadinessAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (bool)_collectDiagnosticFieldsForNotificationInteractionMetric:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (bool)_collectDiagnosticFieldsForNotificationMetric:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (bool)_collectDiagnosticFieldsForOnboardingMetric:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (bool)_collectSensitiveFieldsForNotificationInteractionMetric:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (bool)_collectSensitiveFieldsForNotificationMetric:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (bool)_collectSensitiveFieldsForOnboardingMetric:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (bool)_isImproveHealthAndActivityAllowed;
- (id)_queue_submitNotificationEventWithDataSource:(id)arg1;
- (id)_queue_submitNotificationInteractionEventWithDataSource:(id)arg1;
- (id)_queue_submitOnboardingEventWithDataSource:(id)arg1;
- (id)init;
- (void)submitNotificationEventWithDataSource:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)submitNotificationInteractionEventWithDataSource:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)submitOnboardingEventWithDataSource:(id)arg1 resultHandler:(id /* block */)arg2;

@end

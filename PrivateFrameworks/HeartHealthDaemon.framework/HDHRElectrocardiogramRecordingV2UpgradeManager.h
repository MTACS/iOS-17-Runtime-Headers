
@interface HDHRElectrocardiogramRecordingV2UpgradeManager : NSObject <HDProtectedDataOperationDelegate> {
    HKAnalyticsEventSubmissionManager * _analyticsSubmissionManager;
    HDProtectedDataOperation * _protectedDataOperation;
    <HDFeatureAvailabilityExtension> * _v1FeatureAvailabilityManager;
    <HDFeatureAvailabilityExtension> * _v2FeatureAvailabilityManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 v1FeatureAvailabilityManager:(id)arg2 v2FeatureAvailabilityManager:(id)arg3 analyticsSubmissionManager:(id)arg4;
- (void)performWorkForOperation:(id)arg1 profile:(id)arg2 databaseAccessibilityAssertion:(id)arg3 completion:(id /* block */)arg4;

@end


@protocol HMDFetchedAccessorySettingsControllerDataSource <NSObject>

@required

- (NSString *)controller:(HMDFetchedAccessorySettingsController *)arg1 topicForKeyPath:(NSString *)arg2;
- (HMDCurrentAccessorySetupMetricDispatcher *)currentAccessorySetupMetricDispatcher;
- (<HMEEventForwarder> *)eventForwarder;
- (NSString *)eventSourceIdentifierNameForFetchedSettingsController:(HMDFetchedAccessorySettingsController *)arg1;
- (<HMELastEventStoreReadHandle> *)eventStoreReadHandle;
- (<HMMLogEventSubmitting> *)logEventSubmitter;
- (void)setSetupStartTimestamp:(double)arg1;
- (HMFActivity *)setupActivity;
- (double)setupStartTimestamp;

@end

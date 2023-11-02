
@protocol HealthKitAdditions.CloudSyncStatusProvider

@required

- (id)initWithHealthStore:(HKHealthStore *)arg1 delegate:(id <HKCloudSyncObserverDelegate>)arg2;
- (void)startObservingSyncStatus;

@end

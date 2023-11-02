
@protocol HKCloudSyncObserverDelegate <NSObject>

@required

- (void)cloudSyncObserver:(HKCloudSyncObserver *)arg1 syncDidStartWithProgress:(NSProgress *)arg2;
- (void)cloudSyncObserver:(HKCloudSyncObserver *)arg1 syncFailedWithError:(NSError *)arg2;
- (void)cloudSyncObserverStatusUpdated:(HKCloudSyncObserver *)arg1 status:(HKCloudSyncObserverStatus *)arg2;
- (void)cloudSyncObserverSyncCompleted:(HKCloudSyncObserver *)arg1;

@optional

- (void)cloudSyncObserver:(HKCloudSyncObserver *)arg1 didFailToPopulateStatusWithError:(NSError *)arg2;

@end


@protocol EDAssetDownloadSchedulerContinuation <NSObject>

@required

- (void)rescheduleAfterFailure;
- (void)rescheduleAfterSuccess;
- (void)stopScheduling;

@end


@protocol DSProviderClientProtocol <NSObject>

@required

- (void)failedToStartProviderWithOptions:(DSClientMotionDataOptions *)arg1 error:(NSError *)arg2;
- (void)requestedMotionDataWithOption:(DSClientMotionDataOptions *)arg1;
- (void)startedProviderWithOptions:(DSClientMotionDataOptions *)arg1;
- (void)stoppedProvider;
- (void)subscribedToMotionDataWithOptions:(DSClientMotionDataOptions *)arg1;
- (void)subscriptionExpired;
- (void)unsubscribed;

@end


@protocol BPSSubscriber <NSObject>

@required

- (void)cancel;
- (void)receiveCompletion:(BPSCompletion *)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(BPSSubscription *)arg1;

@optional

- (void)completeWithError:(NSError *)arg1;
- (void)requestNextEvents;
- (void)subscribeTo:(id <BPSPublisher>)arg1;

@end

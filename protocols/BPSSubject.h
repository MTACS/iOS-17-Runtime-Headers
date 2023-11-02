
@protocol BPSSubject <BPSPublisher>

@required

- (void)sendCompletion:(BPSCompletion *)arg1;
- (void)sendSubscription:(BPSSubscription *)arg1;
- (void)sendValue:(id)arg1;

@optional

- (void)sendCompletion;
- (void)sendEvent:(id)arg1;

@end

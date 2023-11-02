
@protocol BPSSubscription <BPSCancellable, NSObject>

@required

- (void)requestDemand:(long long)arg1;

@end

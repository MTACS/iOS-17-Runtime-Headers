
@protocol CBDisplayStateClientDelegate <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)didCompleteSwitchToFlipbookState:(long long)arg1 withError:(NSError *)arg2;
- (void)didCompleteTransitionToDisplayMode:(long long)arg1 withError:(NSError *)arg2;

@end

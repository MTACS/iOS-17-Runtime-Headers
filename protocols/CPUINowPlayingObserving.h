
@protocol CPUINowPlayingObserving <NSObject>

@required

- (void)nowPlayingManager:(CPUINowPlayingManager *)arg1 didThrottleUpdateForBundleIdentifier:(NSString *)arg2;
- (void)nowPlayingManager:(CPUINowPlayingManager *)arg1 didUpdateSnapshot:(CPUINowPlayingSnapshot *)arg2;

@end

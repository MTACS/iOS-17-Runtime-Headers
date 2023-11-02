
@protocol SBHMultiplexingManagerDelegate <NSObject>

@required

- (void)multiplexingManager:(SBHMultiplexingManager *)arg1 willRemoveViewController:(UIViewController *)arg2 forIdentifier:(NSString *)arg3;

@optional

- (bool)multiplexingManager:(SBHMultiplexingManager *)arg1 shouldCacheRecentViewController:(UIViewController *)arg2 forIdentifier:(NSString *)arg3;

@end

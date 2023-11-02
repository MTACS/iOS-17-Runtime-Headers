
@protocol HKProxyProviderSource

@required

- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSString *)daemonLaunchDarwinNotificationName;

@end

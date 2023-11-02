
@protocol ATStatusMonitorObserver <NSObject>

@required

- (void)connection:(ATConnection *)arg1 updatedAssets:(NSArray *)arg2;
- (void)connection:(ATConnection *)arg1 updatedProgress:(NSDictionary *)arg2;

@optional

- (void)monitor:(ATStatusMonitor *)arg1 didUpdateWithStatus:(ATStatus *)arg2;

@end

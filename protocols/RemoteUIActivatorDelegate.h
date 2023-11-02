
@protocol RemoteUIActivatorDelegate <NSObject>

@required

- (void)didReceiveExpectedError:(NSError *)arg1;
- (void)didReceiveUnexpectedError:(NSError *)arg1;
- (NSObject<OS_dispatch_queue> *)workQueue;

@end


@protocol RBProcessManagerDelegate <NSObject>

@required

- (void)processManager:(RBProcessManager *)arg1 didAddProcess:(RBProcess *)arg2;
- (void)processManager:(RBProcessManager *)arg1 didReconnectProcesses:(NSSet *)arg2;
- (void)processManager:(RBProcessManager *)arg1 didRemoveProcess:(RBProcess *)arg2;

@end


@protocol FBProcessManagerObserver <NSObject>

@required

- (void)processManager:(FBProcessManager *)arg1 didAddProcess:(FBProcess *)arg2;
- (void)processManager:(FBProcessManager *)arg1 didRemoveProcess:(FBProcess *)arg2;

@end


@protocol RBLaunchManagerDelegate <NSObject>

@required

- (RBProcess *)_lifecycleQueue_addProcessWithInstance:(RBSProcessInstance *)arg1 properties:(RBLaunchdProperties *)arg2;

@end

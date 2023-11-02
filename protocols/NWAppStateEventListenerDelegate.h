
@protocol NWAppStateEventListenerDelegate <NSObject>

@required

- (void)handleStateUpdate:(RBSProcessStateUpdate *)arg1 forProcess:(RBSProcessHandle *)arg2;

@end

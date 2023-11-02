
@protocol UIDraggingSystemMonitorDelegate <NSObject>

@required

- (void)dragSessionDidBegin:(UIDraggingSystemSession *)arg1;
- (void)dragSessionDidEnd:(UIDraggingSystemSession *)arg1;
- (UIDraggingSystemTouchRoutingPolicy *)touchRoutingPolicyForBeginningDragSessionWithInfo:(UIDraggingSystemSessionInfo *)arg1;

@end

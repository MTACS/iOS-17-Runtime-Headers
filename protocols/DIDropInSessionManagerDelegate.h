
@protocol DIDropInSessionManagerDelegate <NSObject>

@optional

- (void)manager:(DIDropInSessionManager *)arg1 didReceiveIncomingPendingSession:(DIDropInSession *)arg2;
- (void)manager:(DIDropInSessionManager *)arg1 didUpdateActiveSession:(DIDropInSession *)arg2;

@end

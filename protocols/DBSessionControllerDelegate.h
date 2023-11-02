
@protocol DBSessionControllerDelegate <NSObject>

@required

- (void)sessionController:(DBSessionController *)arg1 didConnectSession:(CARSession *)arg2;
- (void)sessionController:(DBSessionController *)arg1 didDisconnectSession:(CARSession *)arg2;

@end

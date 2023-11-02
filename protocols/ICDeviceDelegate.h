
@protocol ICDeviceDelegate <NSObject>

@required

- (void)device:(ICDevice *)arg1 didCloseSessionWithError:(NSError *)arg2;
- (void)device:(ICDevice *)arg1 didOpenSessionWithError:(NSError *)arg2;
- (void)didRemoveDevice:(ICDevice *)arg1;

@optional

- (void)device:(ICDevice *)arg1 didEjectWithError:(NSError *)arg2;
- (void)device:(ICDevice *)arg1 didEncounterError:(NSError *)arg2;
- (void)device:(ICDevice *)arg1 didReceiveStatusInformation:(NSDictionary *)arg2;
- (void)deviceDidBecomeReady:(ICDevice *)arg1;
- (void)deviceDidChangeName:(ICDevice *)arg1;
- (void)deviceDidChangeSharingState:(ICDevice *)arg1;

@end

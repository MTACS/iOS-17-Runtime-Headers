
@protocol CSDeviceBlockViewDelegate <NSObject>

@required

- (void)handleEmergencyButtonAction;
- (void)handleUnblockButtonAction;

@end

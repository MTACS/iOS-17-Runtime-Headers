
@protocol FBKDeviceChoiceDelegate <NSObject>

@required

- (void)deviceChoicesController:(FBKDeviceChoicesViewController *)arg1 didChooseDevices:(NSSet *)arg2;
- (void)deviceChoicesControllerDidCancelWithController:(FBKDeviceChoicesViewController *)arg1;

@end

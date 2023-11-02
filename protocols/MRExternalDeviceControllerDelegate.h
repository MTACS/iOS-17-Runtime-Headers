
@protocol MRExternalDeviceControllerDelegate <NSObject>

@optional

- (void)externalDeviceController:(MRExternalDeviceController *)arg1 didDiscoverDevice:(MRExternalDevice *)arg2;
- (void)externalDeviceController:(MRExternalDeviceController *)arg1 didRemoveDevice:(MRExternalDevice *)arg2;

@end

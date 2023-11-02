
@protocol HAP2StorageDelegate <NSObject>

@required

- (void)storage:(id <HAP2Storage>)arg1 didRemoveKeyWithIdentifier:(HAPDeviceID *)arg2;
- (void)storage:(id <HAP2Storage>)arg1 didSaveKeyWithIdentifier:(HAPDeviceID *)arg2;

@end

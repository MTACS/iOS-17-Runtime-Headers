
@protocol CMIOExtensionSessionDeviceDelegate <NSObject>

@required

- (void)device:(CMIOExtensionSessionDevice *)arg1 availableStreamsChanged:(NSArray *)arg2;
- (void)device:(CMIOExtensionSessionDevice *)arg1 deviceControlPIDChanged:(int)arg2;
- (void)device:(CMIOExtensionSessionDevice *)arg1 propertiesChanged:(NSDictionary *)arg2;
- (void)device:(CMIOExtensionSessionDevice *)arg1 runningSomewhereChanged:(bool)arg2;
- (void)deviceHasBeenInvalidated:(CMIOExtensionSessionDevice *)arg1;

@end

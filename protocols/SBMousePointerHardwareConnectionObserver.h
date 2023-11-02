
@protocol SBMousePointerHardwareConnectionObserver <NSObject>

@required

- (void)mousePointerManager:(SBMousePointerManager *)arg1 hardwarePointingDeviceAttachedDidChange:(bool)arg2;

@end

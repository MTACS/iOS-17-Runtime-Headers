
@protocol AXCameraTorchManager <NSObject>

@required

- (void)closeTorchDevice;
- (bool)openTorchDevice;
- (void)turnTorchOff;
- (void)turnTorchOn;

@end

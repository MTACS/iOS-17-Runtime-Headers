
@interface VCCameraTorchManager : NSObject <AXCameraTorchManager> {
    AVFlashlight * _flashlight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)closeTorchDevice;
- (void)dealloc;
- (id)init;
- (bool)openTorchDevice;
- (void)turnTorch:(bool)arg1;
- (void)turnTorchOff;
- (void)turnTorchOn;

@end

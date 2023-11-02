
@interface AVCaptureMultiCamSession : AVCaptureSession {
    float  _hardwareCost;
    float  _systemPressureCost;
}

@property (nonatomic, readonly) float hardwareCost;
@property (nonatomic, readonly) float systemPressureCost;

+ (bool)isMultiCamSupported;

- (bool)_addConnection:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddInput:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddOutput:(id)arg1 failureReason:(id*)arg2;
- (float)_computeISPHardwareCost;
- (id)_physicalDevicePowerInfoSet;
- (void)_removeConnection:(id)arg1;
- (void)_updateCosts;
- (void)_updateHardwareCost;
- (void)_updateSystemPressureCost;
- (bool)canSetSessionPreset:(id)arg1;
- (void)dealloc;
- (void)handleVideoInputDevice:(id)arg1 activeFormatChanged:(id)arg2;
- (float)hardwareCost;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)startRunning;
- (float)systemPressureCost;

@end

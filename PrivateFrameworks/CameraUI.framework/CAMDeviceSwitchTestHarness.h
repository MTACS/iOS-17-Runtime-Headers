
@interface CAMDeviceSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness {
    long long  _desiredDevicePosition;
    long long  _startingCaptureMode;
    double  _testExtensionSeconds;
    bool  _testingAnimation;
    CAMViewfinderViewController * _viewfinderViewController;
}

@property (nonatomic, readonly) long long desiredDevicePosition;
@property (nonatomic, readonly) long long startingCaptureMode;
@property (nonatomic, readonly) double testExtensionSeconds;
@property (getter=isTestingAnimation, nonatomic, readonly) bool testingAnimation;
@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;

- (void).cxx_destruct;
- (void)_internalStopTesting;
- (long long)desiredDevicePosition;
- (void)ensureCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 thenPerform:(id /* block */)arg3;
- (void)handleDidOpenViewfinderForReason:(long long)arg1;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 devicePosition:(long long)arg3 testingAnimation:(bool)arg4 startingCaptureMode:(long long)arg5 testExtensionSeconds:(double)arg6;
- (bool)isTestingAnimation;
- (void)startTesting;
- (long long)startingCaptureMode;
- (double)testExtensionSeconds;
- (id)viewfinderViewController;

@end

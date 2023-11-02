
@interface CAMModeSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness {
    long long  _desiredMode;
    double  _testExtensionSeconds;
    bool  _testingAnimation;
    CAMViewfinderViewController * _viewfinderViewController;
}

@property (nonatomic, readonly) long long desiredMode;
@property (nonatomic, readonly) double testExtensionSeconds;
@property (getter=isTestingAnimation, nonatomic, readonly) bool testingAnimation;
@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;

- (void).cxx_destruct;
- (void)_ensureCaptureMode:(long long)arg1 thenPerform:(id /* block */)arg2;
- (void)_internalStopTesting;
- (void)_startTestingAfterModeSwitchIsTestingAnimation:(bool)arg1;
- (long long)desiredMode;
- (void)handleDidOpenViewfinderForReason:(long long)arg1;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 mode:(long long)arg3 testingAnimation:(bool)arg4 testExtensionSeconds:(double)arg5;
- (bool)isTestingAnimation;
- (void)startTesting;
- (double)testExtensionSeconds;
- (id)viewfinderViewController;

@end

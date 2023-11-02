
@interface CAMDeviceAndModeTestHarness : CAMModeAndDeviceConfigurationTestHarness {
    long long  __desiredMode;
    long long  __desiredPosition;
    CAMViewfinderViewController * __viewController;
}

@property (nonatomic, readonly) long long _desiredMode;
@property (nonatomic, readonly) long long _desiredPosition;
@property (nonatomic, readonly) CAMViewfinderViewController *_viewController;

- (void).cxx_destruct;
- (long long)_desiredMode;
- (long long)_desiredPosition;
- (id)_viewController;
- (id)initWithTestName:(id)arg1 devicePosition:(long long)arg2 captureMode:(long long)arg3 viewFinderViewControl:(id)arg4;
- (void)startTesting;

@end

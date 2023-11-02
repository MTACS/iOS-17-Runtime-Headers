
@interface CAMCameraRollTestHarness : CAMPerformanceTestHarness <CAMViewfinderViewControllerCameraRollTestingDelegate> {
    bool  _awaitPreload;
    double  _settlingDelay;
    bool  _testingAnimation;
    bool  _testingWarmPresentation;
    CAMViewfinderViewController * _viewfinderViewController;
}

@property (nonatomic, readonly) bool awaitPreload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double settlingDelay;
@property (readonly) Class superclass;
@property (getter=isTestingAnimation, nonatomic, readonly) bool testingAnimation;
@property (nonatomic, readonly) bool testingWarmPresentation;
@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;

- (void).cxx_destruct;
- (void)_dismissCameraRollImmediately;
- (void)_handlePUDisplayLinkStarted:(id)arg1;
- (void)_presentCameraRollAnimated;
- (bool)awaitPreload;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 testingAnimation:(bool)arg3 testingWarmPresentation:(bool)arg4 awaitPreload:(bool)arg5 settlingDelay:(double)arg6;
- (bool)isTestingAnimation;
- (double)settlingDelay;
- (void)startTesting;
- (void)stopTesting;
- (bool)testingWarmPresentation;
- (id)viewfinderViewController;
- (void)viewfinderViewController:(id)arg1 didDismissPresentedCameraRoll:(id)arg2;
- (void)viewfinderViewController:(id)arg1 didPresentCameraRoll:(id)arg2;
- (void)viewfinderViewController:(id)arg1 willPresentCameraRoll:(id)arg2 withOneUpController:(id)arg3;

@end

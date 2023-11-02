
@interface ZoomTestProcessor : ContentInteractionTestRunner {
    bool  _didFirstZoomStep;
    CADisplayLink * _displayLink;
    int  _iterationsRemaining;
    int  _stepsPerZoom;
    long long  _testState;
    bool  _zoomingIn;
}

@property (nonatomic) bool didFirstZoomStep;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic) int iterationsRemaining;
@property (nonatomic) int stepsPerZoom;
@property (nonatomic) long long testState;
@property (nonatomic) bool zoomingIn;

- (void).cxx_destruct;
- (bool)didFirstZoomStep;
- (id)displayLink;
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;
- (int)iterationsRemaining;
- (bool)performActionForPage:(id)arg1;
- (void)setDidFirstZoomStep:(bool)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setIterationsRemaining:(int)arg1;
- (void)setStepsPerZoom:(int)arg1;
- (void)setTestState:(long long)arg1;
- (void)setZoomingIn:(bool)arg1;
- (bool)startPageAction:(id)arg1;
- (void)startZoomingTest;
- (int)stepsPerZoom;
- (long long)testState;
- (bool)updateWithNewScale;
- (void)zoomTestStep;
- (bool)zoomingIn;

@end

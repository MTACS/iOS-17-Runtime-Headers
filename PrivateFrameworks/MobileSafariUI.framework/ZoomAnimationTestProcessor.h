
@interface ZoomAnimationTestProcessor : ContentInteractionTestRunner {
    double  _initialZoom;
    int  _iterationsRemaining;
    int  _targetIndex;
    long long  _testState;
}

@property (nonatomic) double initialZoom;
@property (nonatomic) int iterationsRemaining;
@property (nonatomic) int targetIndex;
@property (nonatomic) long long testState;

- (void)advanceTest;
- (void)dealloc;
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;
- (double)initialZoom;
- (int)iterationsRemaining;
- (bool)performActionForPage:(id)arg1;
- (void)resetZoom;
- (void)scrollViewDidEndZooming:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1;
- (void)setInitialZoom:(double)arg1;
- (void)setIterationsRemaining:(int)arg1;
- (void)setTargetIndex:(int)arg1;
- (void)setTestState:(long long)arg1;
- (bool)startPageAction:(id)arg1;
- (void)startZoom;
- (int)targetIndex;
- (long long)testState;

@end

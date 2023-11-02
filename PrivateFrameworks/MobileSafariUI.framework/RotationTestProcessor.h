
@interface RotationTestProcessor : ContentInteractionTestRunner {
    int  _iterationsRemaining;
    long long  _testState;
}

@property (nonatomic) int iterationsRemaining;
@property (nonatomic) long long testState;

- (id)initWithTestName:(id)arg1 browserController:(id)arg2;
- (int)iterationsRemaining;
- (bool)performActionForPage:(id)arg1;
- (void)setIterationsRemaining:(int)arg1;
- (void)setTestState:(long long)arg1;
- (bool)startPageAction:(id)arg1;
- (void)startRotation;
- (long long)testState;

@end

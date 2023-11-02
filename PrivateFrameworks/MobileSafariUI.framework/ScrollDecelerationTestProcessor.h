
@interface ScrollDecelerationTestProcessor : ContentInteractionTestRunner {
    int  _iterationsRemaining;
    long long  _state;
}

@property (nonatomic) int iterationsRemaining;
@property (nonatomic) long long state;

- (id)initWithTestName:(id)arg1 browserController:(id)arg2;
- (int)iterationsRemaining;
- (bool)performActionForPage:(id)arg1;
- (void)setIterationsRemaining:(int)arg1;
- (void)setState:(long long)arg1;
- (bool)startPageAction:(id)arg1;
- (long long)state;

@end

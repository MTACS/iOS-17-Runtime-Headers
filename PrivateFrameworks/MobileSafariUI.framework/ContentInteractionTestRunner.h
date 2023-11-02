
@interface ContentInteractionTestRunner : PageLoadTestRunner {
    int  _iterations;
}

@property (nonatomic) int iterations;

- (void)endTrackingFrameRate;
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;
- (int)iterations;
- (id)pageWebView;
- (void)setIterations:(int)arg1;
- (bool)startPageAction:(id)arg1;
- (void)startSubtest:(id)arg1;
- (void)startTrackingFrameRate;
- (void)stopSubtest:(id)arg1;

@end

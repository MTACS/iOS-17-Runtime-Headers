
@interface PurplePageLoadTestRunner : PageLoadTestRunner {
    NSMutableDictionary * _iterationResults;
    NSMutableDictionary * _pptResults;
    bool  _showFirstVisualLayoutTime;
    bool  _showLoadTime;
    bool  _showRenderFps;
    bool  _showRenderTime;
}

@property (nonatomic) bool showFirstVisualLayoutTime;
@property (nonatomic) bool showLoadTime;
@property (nonatomic) bool showRenderFps;
@property (nonatomic) bool showRenderTime;

- (void).cxx_destruct;
- (void)collectPPTResults;
- (void)finishedTestRunner;
- (void)finishedTestRunnerIteration;
- (id)initRenderTestWithName:(id)arg1 browserController:(id)arg2 showRenderTime:(bool)arg3 showFPS:(bool)arg4;
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;
- (void)pptResultFor:(id)arg1 measure:(id)arg2 time:(double)arg3;
- (void)pptResultFor:(id)arg1 measure:(id)arg2 value:(double)arg3 units:(id)arg4;
- (void)setShowFirstVisualLayoutTime:(bool)arg1;
- (void)setShowLoadTime:(bool)arg1;
- (void)setShowRenderFps:(bool)arg1;
- (void)setShowRenderTime:(bool)arg1;
- (bool)showFirstVisualLayoutTime;
- (bool)showLoadTime;
- (bool)showRenderFps;
- (bool)showRenderTime;
- (void)startingTestRunner;
- (void)writeOutputData;

@end

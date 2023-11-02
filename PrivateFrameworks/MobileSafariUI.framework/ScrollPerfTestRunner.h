
@interface ScrollPerfTestRunner : PurplePageLoadTestRunner {
    double  _endLoadTime;
    double  _endScrollingTime;
    NSObject<OS_dispatch_queue> * _eventGeneratorQueue;
    NSMutableArray * _framerateHistory;
    double  _gestureStartTime;
    long long  _gestureState;
    unsigned int  _lastFrameCounter;
    double  _lastFramerateTime;
    NSMutableDictionary * _outputData;
    int  _pageIndex;
    long long  _scrollDirection;
    unsigned int  _scrollGestureCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollOffsetAtGestureStart;
    double  _startLoadTime;
    double  _startScrollingTime;
}

- (void).cxx_destruct;
- (void)advanceGesture;
- (void)appendToFramerateHistory;
- (void)determineScrollDirection;
- (id)finalStatusForPage:(id)arg1;
- (void)finishPage:(id)arg1 stats:(id)arg2 error:(id)arg3;
- (void)finishedTestPage:(id)arg1;
- (void)finishedTestRunner;
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;
- (bool)isPageTooShortToScroll;
- (id)machineConfigInfo;
- (id)outputDataForPage:(id)arg1;
- (id)pageScrollView;
- (id)pageWebView;
- (bool)performActionForPage:(id)arg1;
- (bool)startPageAction:(id)arg1;
- (void)startingTestPage:(id)arg1;
- (struct CGPoint { double x1; double x2; })touchPointForMoveIndex:(unsigned long long)arg1;
- (void)writeOutputData;

@end

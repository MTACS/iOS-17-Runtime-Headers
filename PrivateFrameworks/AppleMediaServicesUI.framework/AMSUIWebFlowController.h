
@interface AMSUIWebFlowController : NSObject {
    AMSUIWebClientContext * _context;
    NSString * _currentRefreshToken;
    unsigned long long  _previousNavigationIndex;
    long long  _previousPageIndex;
    AMSUIWebContainerViewController * _rootContainer;
    NSLock * _timeoutLock;
    NSMutableSet * _timeouts;
}

@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (nonatomic, readonly) AMSUIWebContainerViewController *currentContainer;
@property (nonatomic, retain) NSString *currentRefreshToken;
@property (nonatomic) unsigned long long previousNavigationIndex;
@property (nonatomic) long long previousPageIndex;
@property (nonatomic, readonly) AMSUIWebContainerViewController *rootContainer;
@property (nonatomic, retain) NSLock *timeoutLock;
@property (nonatomic, retain) NSMutableSet *timeouts;

- (void).cxx_destruct;
- (id)_refreshPageWithForContainer:(id)arg1 options:(id)arg2 isRetry:(bool)arg3;
- (void)_setWindowSize:(struct CGSize { double x1; double x2; })arg1 onContainer:(id)arg2 completion:(id /* block */)arg3;
- (void)_takeSnapshotFromContainer:(id)arg1 completion:(id /* block */)arg2;
- (id)context;
- (id)currentContainer;
- (id)currentRefreshToken;
- (void)dismissViewController;
- (id)initWithRootContainer:(id)arg1 context:(id)arg2;
- (void)performSafeTransitionFrom:(id)arg1 block:(id /* block */)arg2;
- (void)popViewController;
- (void)popViewControllerToRelativeIndex:(long long)arg1;
- (void)presentWithOptions:(id)arg1;
- (unsigned long long)previousNavigationIndex;
- (long long)previousPageIndex;
- (void)pushWithOptions:(id)arg1;
- (id)refreshPageForContainer:(id)arg1 options:(id)arg2;
- (id)replaceWithPageModel:(id)arg1 forContainer:(id)arg2 options:(id)arg3;
- (id)rootContainer;
- (void)setCurrentRefreshToken:(id)arg1;
- (void)setPreviousNavigationIndex:(unsigned long long)arg1;
- (void)setPreviousPageIndex:(long long)arg1;
- (void)setTimeoutLock:(id)arg1;
- (void)setTimeouts:(id)arg1;
- (void)startTimeout:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (void)startTimeoutInterruption;
- (void)stopTimeoutInterruption;
- (id)timeoutLock;
- (id)timeouts;

@end

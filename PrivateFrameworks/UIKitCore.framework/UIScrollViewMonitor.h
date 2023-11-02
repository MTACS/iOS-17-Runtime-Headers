
@interface UIScrollViewMonitor : NSObject <_UIScrollViewScrollObserver, _UIViewSubtreeMonitor> {
    <UIScrollViewMonitorDelegate> * _delegate;
    UIScrollView * _scrollView;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIScrollViewMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (bool)_monitorsView:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (id)delegate;
- (id)initWithScrollView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopMonitoring;

@end

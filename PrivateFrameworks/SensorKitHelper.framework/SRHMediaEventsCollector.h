
@interface SRHMediaEventsCollector : NSObject <UIScrollViewMonitorDelegate> {
    SRHMediaViewsStore * _mediaViewsStore;
    UIScrollView * _scrollView;
    UIScrollViewMonitor * _scrollViewMonitor;
}

+ (void)initialize;

- (void)_addMediaSubviewsOfView:(id)arg1;
- (long long)_addMediaSubviewsOfView:(id)arg1 viewsTraversed:(long long)arg2;
- (void)_checkViewForMediaContent:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_removeMediaSubviewsOfView:(id)arg1;
- (long long)_removeMediaSubviewsOfView:(id)arg1 viewsTraversed:(long long)arg2;
- (void)dealloc;
- (void)didBecomeActive;
- (id)initWithScrollView:(id)arg1 scrollMonitor:(id)arg2;
- (id)initWithScrollView:(id)arg1 scrollMonitor:(id)arg2 mediaViewsStore:(id)arg3;
- (void)scrollViewMonitorDidStartMonitoring:(id)arg1;
- (void)scrollViewMonitorDidStopMonitoring:(id)arg1;
- (void)scrollViewMonitorScrollDid:(id)arg1 addView:(id)arg2 removeView:(id)arg3;
- (void)scrollViewMonitorScrollDidScrolled:(id)arg1;
- (void)willResignActive;

@end


@interface SXVideoComponentViewFactory : SXComponentViewFactory {
    <SXAnalyticsReportingProvider> * _analyticsReportingProvider;
    <SXAppStateMonitor> * _appStateMonitor;
    <SXBookmarkManager> * _bookmarkManager;
    <SXVideoAdProviderFactory> * _prerollAdFactory;
    <SWReachabilityProvider> * _reachabilityProvider;
    <SXResourceDataSourceProvider> * _resourceDataSourceProvider;
    <SXSceneStateMonitor> * _sceneStateMonitor;
    <SXScrollObserverManager> * _scrollObserverManager;
    SXVideoPlayerViewControllerManager * _videoPlayerViewControllerManager;
}

@property (nonatomic, readonly) <SXAnalyticsReportingProvider> *analyticsReportingProvider;
@property (nonatomic, readonly) <SXAppStateMonitor> *appStateMonitor;
@property (nonatomic, readonly) <SXBookmarkManager> *bookmarkManager;
@property (nonatomic, readonly) <SXVideoAdProviderFactory> *prerollAdFactory;
@property (nonatomic, readonly) <SWReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) <SXResourceDataSourceProvider> *resourceDataSourceProvider;
@property (nonatomic, readonly) <SXSceneStateMonitor> *sceneStateMonitor;
@property (nonatomic, readonly) <SXScrollObserverManager> *scrollObserverManager;
@property (nonatomic, readonly) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager;

- (void).cxx_destruct;
- (id)analyticsReportingProvider;
- (id)appStateMonitor;
- (id)bookmarkManager;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReportingProvider:(id)arg5 appStateMonitor:(id)arg6 sceneStateMonitor:(id)arg7 resourceDataSourceProvider:(id)arg8 reachabilityProvider:(id)arg9 scrollObserverManager:(id)arg10 videoPlayerViewControllerManager:(id)arg11 bookmarkManager:(id)arg12 prerollAdFactory:(id)arg13;
- (id)prerollAdFactory;
- (id)reachabilityProvider;
- (id)resourceDataSourceProvider;
- (int)role;
- (id)sceneStateMonitor;
- (id)scrollObserverManager;
- (id)type;
- (id)videoPlayerViewControllerManager;

@end

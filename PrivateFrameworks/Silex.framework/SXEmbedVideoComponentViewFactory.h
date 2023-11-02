
@interface SXEmbedVideoComponentViewFactory : SXComponentViewFactory {
    <SXComponentActionHandler> * _actionHandler;
    <SXAnalyticsReportingProvider> * _analyticsReportingProvider;
    <SXAppStateMonitor> * _appStateMonitor;
    WKWebsiteDataStore * _dataStore;
    <SXProxyAuthenticationHandler> * _proxyAuthenticationHandler;
    <SXSceneStateMonitor> * _sceneStateMonitor;
}

@property (nonatomic, readonly) <SXComponentActionHandler> *actionHandler;
@property (nonatomic, readonly) <SXAnalyticsReportingProvider> *analyticsReportingProvider;
@property (nonatomic, readonly) <SXAppStateMonitor> *appStateMonitor;
@property (nonatomic, readonly) WKWebsiteDataStore *dataStore;
@property (nonatomic, readonly) <SXProxyAuthenticationHandler> *proxyAuthenticationHandler;
@property (nonatomic, readonly) <SXSceneStateMonitor> *sceneStateMonitor;

- (void).cxx_destruct;
- (id)actionHandler;
- (id)analyticsReportingProvider;
- (id)appStateMonitor;
- (id)componentViewForComponent:(id)arg1;
- (id)dataStore;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReportingProvider:(id)arg5 appStateMonitor:(id)arg6 sceneStateMonitor:(id)arg7 actionHandler:(id)arg8 websiteDataStore:(id)arg9 proxyAuthenticationHandler:(id)arg10;
- (id)proxyAuthenticationHandler;
- (int)role;
- (id)sceneStateMonitor;
- (id)type;

@end

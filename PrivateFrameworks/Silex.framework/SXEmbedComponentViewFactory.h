
@interface SXEmbedComponentViewFactory : SXComponentViewFactory {
    <SXComponentActionHandler> * _actionHandler;
    <SXAnalyticsReportingProvider> * _analyticsReportingProvider;
    WKWebsiteDataStore * _dataStore;
    <SXEmbedDataProvider> * _embedDataProvider;
    <SXLayoutInvalidator> * _layoutInvalidator;
    <SXProxyAuthenticationHandler> * _proxyAuthenticationHandler;
    <SWReachabilityProvider> * _reachabilityProvider;
    SXRelatedWebViewCache * _relatedWebViewCache;
    <SXSceneStateMonitor> * _sceneStateMonitor;
}

@property (nonatomic, readonly) <SXComponentActionHandler> *actionHandler;
@property (nonatomic, readonly) <SXAnalyticsReportingProvider> *analyticsReportingProvider;
@property (nonatomic, readonly) WKWebsiteDataStore *dataStore;
@property (nonatomic, readonly) <SXEmbedDataProvider> *embedDataProvider;
@property (nonatomic, readonly) <SXLayoutInvalidator> *layoutInvalidator;
@property (nonatomic, readonly) <SXProxyAuthenticationHandler> *proxyAuthenticationHandler;
@property (nonatomic, readonly) <SWReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) SXRelatedWebViewCache *relatedWebViewCache;
@property (nonatomic, readonly) <SXSceneStateMonitor> *sceneStateMonitor;

- (void).cxx_destruct;
- (id)actionHandler;
- (id)analyticsReportingProvider;
- (id)componentViewForComponent:(id)arg1;
- (id)dataStore;
- (id)embedDataProvider;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 reachabilityProvider:(id)arg5 embedDataProvider:(id)arg6 actionHandler:(id)arg7 layoutInvalidator:(id)arg8 websiteDataStore:(id)arg9 relatedWebViewCache:(id)arg10 proxyAuthenticationHandler:(id)arg11 sceneStateMonitor:(id)arg12 analyticsReportingProvider:(id)arg13;
- (id)layoutInvalidator;
- (id)proxyAuthenticationHandler;
- (id)reachabilityProvider;
- (id)relatedWebViewCache;
- (int)role;
- (id)sceneStateMonitor;
- (id)type;

@end

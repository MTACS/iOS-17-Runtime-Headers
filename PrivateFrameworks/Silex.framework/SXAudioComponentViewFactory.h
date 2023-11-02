
@interface SXAudioComponentViewFactory : SXComponentViewFactory {
    <SXAnalyticsReportingProvider> * _analyticsReportingProvider;
    <SXAppStateMonitor> * _appStateMonitor;
    <SXHost> * _host;
    <SXResourceDataSourceProvider> * _resourceDataSourceProvider;
}

@property (nonatomic, readonly) <SXAnalyticsReportingProvider> *analyticsReportingProvider;
@property (nonatomic, readonly) <SXAppStateMonitor> *appStateMonitor;
@property (nonatomic, readonly) <SXHost> *host;
@property (nonatomic, readonly) <SXResourceDataSourceProvider> *resourceDataSourceProvider;

- (void).cxx_destruct;
- (id)analyticsReportingProvider;
- (id)appStateMonitor;
- (id)componentViewForComponent:(id)arg1;
- (id)host;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReportingProvider:(id)arg5 appStateMonitor:(id)arg6 resourceDataSourceProvider:(id)arg7 host:(id)arg8;
- (id)resourceDataSourceProvider;
- (int)role;
- (id)type;

@end

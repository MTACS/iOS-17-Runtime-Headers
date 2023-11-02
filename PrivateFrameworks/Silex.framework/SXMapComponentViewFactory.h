
@interface SXMapComponentViewFactory : SXComponentViewFactory {
    <SXAnalyticsReportingProvider> * _analyticsReportingProvider;
    <SXAppStateMonitor> * _appStateMonitor;
    <SXDocumentTitleProviding> * _documentTitleProvider;
}

@property (nonatomic, readonly) <SXAnalyticsReportingProvider> *analyticsReportingProvider;
@property (nonatomic, readonly) <SXAppStateMonitor> *appStateMonitor;
@property (nonatomic, readonly) <SXDocumentTitleProviding> *documentTitleProvider;

- (void).cxx_destruct;
- (id)analyticsReportingProvider;
- (id)appStateMonitor;
- (id)componentViewForComponent:(id)arg1;
- (id)documentTitleProvider;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReportingProvider:(id)arg5 appStateMonitor:(id)arg6 documentTitleProvider:(id)arg7;
- (int)role;
- (id)type;

@end

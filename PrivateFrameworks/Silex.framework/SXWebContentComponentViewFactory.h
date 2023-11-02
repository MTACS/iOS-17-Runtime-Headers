
@interface SXWebContentComponentViewFactory : SXComponentViewFactory {
    <SXAnalyticsReportingProvider> * _analyticsReportingProvider;
    SXComponentExposureMonitor * _componentExposureMonitor;
    <SXWebContentConfigurationProvider> * _configurationProvider;
    SWContainerViewController * _containerViewController;
    <SXWebContentComponentContentRuleProvider> * _contentRuleProvider;
    <SXWebContentDataSourceProviding> * _dataSourceProvider;
    <SXWebContentComponentDeveloperSettingsProvider> * _developerSettingsProvider;
    <SXWebContentComponentInteractionManagerFactory> * _interactionManagerFactory;
    <SXLayoutInvalidator> * _layoutInvalidator;
    <SWLoadingPolicyProvider> * _loadingPolicyProvider;
    <SWNavigationManager> * _navigationManager;
    <SWReachabilityProvider> * _reachabilityProvider;
    <TFResolver> * _resolver;
    <SXResourceDataSourceProvider> * _resourceDataSourceProvider;
}

@property (nonatomic, readonly) <SXAnalyticsReportingProvider> *analyticsReportingProvider;
@property (nonatomic, readonly) SXComponentExposureMonitor *componentExposureMonitor;
@property (nonatomic, readonly) <SXWebContentConfigurationProvider> *configurationProvider;
@property (nonatomic, readonly) SWContainerViewController *containerViewController;
@property (nonatomic, readonly) <SXWebContentComponentContentRuleProvider> *contentRuleProvider;
@property (nonatomic, readonly) <SXWebContentDataSourceProviding> *dataSourceProvider;
@property (nonatomic, readonly) <SXWebContentComponentDeveloperSettingsProvider> *developerSettingsProvider;
@property (nonatomic, readonly) <SXWebContentComponentInteractionManagerFactory> *interactionManagerFactory;
@property (nonatomic, readonly) <SXLayoutInvalidator> *layoutInvalidator;
@property (nonatomic, readonly) <SWLoadingPolicyProvider> *loadingPolicyProvider;
@property (nonatomic, readonly) <SWNavigationManager> *navigationManager;
@property (nonatomic, readonly) <SWReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) <TFResolver> *resolver;
@property (nonatomic, readonly) <SXResourceDataSourceProvider> *resourceDataSourceProvider;

- (void).cxx_destruct;
- (id)analyticsReportingProvider;
- (id)componentExposureMonitor;
- (id)componentViewForComponent:(id)arg1;
- (id)configurationProvider;
- (id)containerViewController;
- (id)contentRuleProvider;
- (id)dataSourceProvider;
- (id)developerSettingsProvider;
- (id)initWithResolver:(id)arg1 DOMObjectProvider:(id)arg2 viewport:(id)arg3 presentationDelegateProvider:(id)arg4 componentStyleRendererFactory:(id)arg5 containerViewController:(id)arg6 configurationProvider:(id)arg7 navigationManager:(id)arg8 analyticsReportingProvider:(id)arg9 componentExposureMonitor:(id)arg10 interactionManagerFactory:(id)arg11 reachabilityProvider:(id)arg12 resourceDataSourceProvider:(id)arg13 loadingPolicyProvider:(id)arg14 dataSourceProvider:(id)arg15 layoutInvalidator:(id)arg16 contentRuleProvider:(id)arg17 developerSettingsProvider:(id)arg18;
- (id)interactionManagerFactory;
- (id)layoutInvalidator;
- (id)loadingPolicyProvider;
- (id)navigationManager;
- (id)reachabilityProvider;
- (id)resolver;
- (id)resourceDataSourceProvider;
- (int)role;
- (id)type;

@end

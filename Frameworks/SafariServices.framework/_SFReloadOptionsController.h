
@interface _SFReloadOptionsController : NSObject <_SFRequestDesktopSitePerSitePreferenceObserver> {
    _SFInjectedJavaScriptController * _activityJSController;
    NSMutableDictionary * _domainToUserAgentPolicyMap;
    NSMutableSet * _domainsOverridenAsMobile;
    long long  _effectiveContentMode;
    _SFRequestDesktopSitePreferenceManager * _perSitePreferenceManager;
    NSDictionary * _perSitePreferenceValues;
    NSNumber * _requestDesktopSiteDefaultValue;
    bool  _supportsAdvancedPrivacyProtections;
    bool  _tryUsingMobileIfPossible;
    WKWebView * _webView;
}

@property (nonatomic, readonly) _SFInjectedJavaScriptController *activityJSController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long effectiveContentMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool loadedUsingDesktopUserAgent;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAdvancedPrivacyProtections;
@property (nonatomic) bool tryUsingMobileIfPossible;

- (void).cxx_destruct;
- (void)_loadPerSitePreferences;
- (void)_overrideSettingIfNeeded:(long long)arg1 source:(unsigned long long)arg2 domain:(id)arg3 completion:(id /* block */)arg4;
- (void)_requestDesktopSiteWithFallbackURL:(id)arg1;
- (bool)_updateSettingSource:(unsigned long long)arg1 domain:(id)arg2;
- (id)activityJSController;
- (id)customNavigatorPlatformForSetting:(long long)arg1;
- (id)customUserAgentForSetting:(long long)arg1;
- (void)customUserAgentSettingForMainFrameURL:(id)arg1 withTimeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)didMarkURLAsNeedingDesktopUserAgent:(id)arg1;
- (void)didMarkURLAsNeedingStandardUserAgent:(id)arg1;
- (void)didSetRequestDesktopSiteDefaultValue:(long long)arg1;
- (void)didSetRequestDesktopSitePerSitePreferencesValues:(id)arg1;
- (void)didUpdateRequestDesktopSiteDefaultValue:(long long)arg1;
- (void)didUpdateRequestDesktopSitePerSitePreference:(id)arg1;
- (long long)effectiveContentMode;
- (id)init;
- (id)initWithWebView:(id)arg1 activityJSController:(id)arg2 perSitePreferenceManager:(id)arg3;
- (void)invalidate;
- (bool)loadedUsingDesktopUserAgent;
- (void)logCompletedPageloadToDifferentialPrivacy:(id)arg1;
- (void)requestDesktopSite;
- (void)requestDesktopSiteWithURL:(id)arg1;
- (void)requestStandardSite;
- (void)setEffectiveContentMode:(long long)arg1;
- (void)setSupportsAdvancedPrivacyProtections:(bool)arg1;
- (void)setTryUsingMobileIfPossible:(bool)arg1;
- (bool)supportsAdvancedPrivacyProtections;
- (bool)tryUsingMobileIfPossible;

@end

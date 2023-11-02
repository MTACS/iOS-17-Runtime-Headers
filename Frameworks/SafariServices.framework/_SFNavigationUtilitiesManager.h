
@interface _SFNavigationUtilitiesManager : NSObject {
    <_SFBrowserDocument> * _browserDocument;
    NSNumber * _cachedPerDocumentAutoplayBehaviorQuirkEnabled;
    NSNumber * _cachedPlayingPauseQuirkEnabled;
    bool  _isContentBlockersPerSiteSettingEnabled;
    long long  _persona;
    _SFPerSitePreferencesVendor * _preferencesVendor;
    _SFReloadOptionsController * _reloadOptionsController;
}

@property (nonatomic) <_SFBrowserDocument> *browserDocument;
@property (nonatomic, readonly) bool isContentBlockersPerSiteSettingEnabled;
@property (nonatomic) long long persona;
@property (nonatomic) _SFReloadOptionsController *reloadOptionsController;

+ (id)_sharedUserAgentQuirksManager;

- (void).cxx_destruct;
- (void)_applyAutoplayQuirksToWebsitePolicies:(id)arg1 desktopSiteSetting:(long long)arg2;
- (bool)_shouldOverrideUserAgentSettingForFacebookAuthURL:(id)arg1;
- (id)browserDocument;
- (id)initWithPerSitePreferencesVendor:(id)arg1;
- (bool)isContentBlockersPerSiteSettingEnabled;
- (long long)persona;
- (id)reloadOptionsController;
- (void)setBrowserDocument:(id)arg1;
- (void)setPersona:(long long)arg1;
- (void)setReloadOptionsController:(id)arg1;
- (void)websitePoliciesForURL:(id)arg1 isForMainFrameNavigation:(bool)arg2 navigationType:(long long)arg3 completionHandler:(id /* block */)arg4;

@end

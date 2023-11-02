
@interface _SFPerSitePreferencesVendor : NSObject {
    _SFAppInfoOverlayPreferenceManager * _appInfoOverlayPreferenceManager;
    WBSAutomaticReaderActivationManager * _automaticReaderPreferenceManager;
    _SFContentBlockersPreferenceManager * _contentBlockersPreferenceManager;
    SFWebExtensionsController * _extensionsController;
    WBSLockdownModePreferenceManager * _lockdownModePreferenceManager;
    _SFPageZoomPreferenceManager * _pageZoomPreferenceManager;
    NSMutableDictionary * _preferenceToManager;
    WBSProfilePreferenceManager * _profilePreferenceManager;
    <WBSProfileProviding> * _profileProvider;
    _SFRequestDesktopSitePreferenceManager * _requestDesktopSitePreferenceManager;
}

@property (nonatomic, readonly) _SFAppInfoOverlayPreferenceManager *appInfoOverlayPreferenceManager;
@property (nonatomic, readonly) WBSAutomaticReaderActivationManager *automaticReaderActivationManager;
@property (nonatomic, readonly) _SFContentBlockersPreferenceManager *contentBlockersPreferenceManager;
@property (nonatomic, readonly) WBSLockdownModePreferenceManager *lockdownModePreferenceManager;
@property (nonatomic, readonly) _SFPageZoomPreferenceManager *pageZoomPreferenceManager;
@property (nonatomic, readonly) WBSProfilePreferenceManager *profilePreferenceManager;
@property (nonatomic, readonly) <WBSProfileProviding> *profileProvider;
@property (nonatomic, readonly) _SFRequestDesktopSitePreferenceManager *requestDesktopSitePreferenceManager;
@property (nonatomic, readonly) _SFGeolocationPermissionManager *sharedGeolocationPermissionManager;
@property (nonatomic, readonly) _SFUserMediaPermissionController *sharedUserMediaPermissionController;

- (void).cxx_destruct;
- (id)appInfoOverlayPreferenceManager;
- (id)automaticReaderActivationManager;
- (id)contentBlockersPreferenceManager;
- (void)dealloc;
- (id)initWithExtensionsController:(id)arg1 profileProvider:(id)arg2;
- (id)lockdownModePreferenceManager;
- (id)managerForPreference:(id)arg1;
- (id)pageZoomPreferenceManager;
- (id)profilePreferenceManager;
- (id)profileProvider;
- (id)requestDesktopSitePreferenceManager;
- (id)sharedGeolocationPermissionManager;
- (id)sharedUserMediaPermissionController;

@end


@interface WKWebpagePreferences : NSObject <WKObject> {
    struct unique_ptr<WebKit::WebPagePreferencesLockdownModeObserver, std::default_delete<WebKit::WebPagePreferencesLockdownModeObserver>> { 
        struct __compressed_pair<WebKit::WebPagePreferencesLockdownModeObserver *, std::default_delete<WebKit::WebPagePreferencesLockdownModeObserver>> { 
            struct WebPagePreferencesLockdownModeObserver {} *__value_; 
        } __ptr_; 
    }  _lockdownModeObserver;
    struct ObjectStorage<API::WebsitePolicies> { 
        struct type { 
            unsigned char __lx[152]; 
        } data; 
    }  _websitePolicies;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic) bool allowsContentJavaScript;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLockdownModeEnabled, nonatomic) bool lockdownModeEnabled;
@property (nonatomic) long long preferredContentMode;
@property (getter=safari_areAdvancedPrivacyProtectionsEnabled, nonatomic, readonly) bool safari_advancedPrivacyProtectionsEnabled;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)defaultPreferences;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_activeContentRuleListActionPatterns;
- (bool)_allowPrivacyProxy;
- (bool)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
- (unsigned long long)_allowedAutoplayQuirks;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_applicationNameForUserAgentWithModernCompatibility;
- (long long)_autoplayPolicy;
- (bool)_captivePortalModeEnabled;
- (unsigned long long)_colorSchemePreference;
- (bool)_contentBlockersEnabled;
- (id)_customHeaderFields;
- (id)_customNavigatorPlatform;
- (id)_customUserAgent;
- (id)_customUserAgentAsSiteSpecificQuirks;
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;
- (unsigned long long)_modalContainerObservationPolicy;
- (unsigned long long)_mouseEventPolicy;
- (bool)_networkConnectionIntegrityEnabled;
- (unsigned long long)_networkConnectionIntegrityPolicy;
- (unsigned long long)_popUpPolicy;
- (void)_setActiveContentRuleListActionPatterns:(id)arg1;
- (void)_setAllowPrivacyProxy:(bool)arg1;
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(bool)arg1;
- (void)_setAllowedAutoplayQuirks:(unsigned long long)arg1;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)arg1;
- (void)_setAutoplayPolicy:(long long)arg1;
- (void)_setCaptivePortalModeEnabled:(bool)arg1;
- (void)_setColorSchemePreference:(unsigned long long)arg1;
- (void)_setContentBlockersEnabled:(bool)arg1;
- (void)_setContentRuleListsEnabled:(bool)arg1 exceptions:(id)arg2;
- (void)_setCustomHeaderFields:(id)arg1;
- (void)_setCustomNavigatorPlatform:(id)arg1;
- (void)_setCustomUserAgent:(id)arg1;
- (void)_setCustomUserAgentAsSiteSpecificQuirks:(id)arg1;
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)arg1;
- (void)_setModalContainerObservationPolicy:(unsigned long long)arg1;
- (void)_setMouseEventPolicy:(unsigned long long)arg1;
- (void)_setNetworkConnectionIntegrityEnabled:(bool)arg1;
- (void)_setNetworkConnectionIntegrityPolicy:(unsigned long long)arg1;
- (void)_setPopUpPolicy:(unsigned long long)arg1;
- (void)_setUserContentController:(id)arg1;
- (void)_setWebsiteDataStore:(id)arg1;
- (id)_userContentController;
- (id)_websiteDataStore;
- (bool)allowsContentJavaScript;
- (void)dealloc;
- (id)init;
- (bool)isLockdownModeEnabled;
- (long long)preferredContentMode;
- (void)setAllowsContentJavaScript:(bool)arg1;
- (void)setLockdownModeEnabled:(bool)arg1;
- (void)setPreferredContentMode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (bool)safari_areAdvancedPrivacyProtectionsEnabled;
- (void)safari_setAdvancedPrivacyProtectionsEnabled:(bool)arg1 privateBrowsing:(bool)arg2;

@end

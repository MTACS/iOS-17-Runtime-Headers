
@interface SFWebExtensionExtensionWrapper : SFExtensionWrapper {
    WBSWebExtensionData * _webExtension;
}

- (void).cxx_destruct;
- (void)_enableNewTabOverrideExtensionWithPresentingViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)allowedInPrivateBrowsing;
- (bool)canLoadWithErrorString:(id*)arg1;
- (id)containingAppDisplayName;
- (void)disable;
- (id)displayName;
- (void)enableWithPresentingViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)enabledNamedProfiles;
- (id)enabledProfiles;
- (id)extension;
- (id)initWithWebExtensionData:(id)arg1;
- (bool)isContentBlocker;
- (bool)isEnabled;
- (bool)isEnabledInAllNamedProfiles;
- (bool)isEnabledInProfile:(id)arg1;
- (void)setAllowedInPrivateBrowsing:(bool)arg1;
- (Class)settingsPermissionClass;
- (id)shortName;

@end

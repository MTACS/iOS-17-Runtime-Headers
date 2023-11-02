
@interface SFContentBlockerExtensionWrapper : SFExtensionWrapper {
    SFContentBlockerManager * _contentBlockerManager;
    NSExtension * _extension;
}

- (void).cxx_destruct;
- (bool)allowedInPrivateBrowsing;
- (bool)canLoadWithErrorString:(id*)arg1;
- (id)containingAppDisplayName;
- (void)disable;
- (id)displayName;
- (void)enableWithPresentingViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)enabledNamedProfiles;
- (id)enabledProfiles;
- (id)extension;
- (id)initWithExtension:(id)arg1 contentBlockerManager:(id)arg2;
- (bool)isContentBlocker;
- (bool)isEnabled;
- (bool)isEnabledInAllNamedProfiles;
- (bool)isEnabledInProfile:(id)arg1;
- (void)setAllowedInPrivateBrowsing:(bool)arg1;
- (Class)settingsPermissionClass;
- (id)shortName;

@end

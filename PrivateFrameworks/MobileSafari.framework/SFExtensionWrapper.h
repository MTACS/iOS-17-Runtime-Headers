
@interface SFExtensionWrapper : NSObject <WBSExtensionWrapper>

@property (nonatomic) bool allowedInPrivateBrowsing;
@property (nonatomic, readonly) bool canEnable;
@property (nonatomic, readonly, copy) NSString *containingAppDisplayName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (getter=isEnabledInAllNamedProfiles, nonatomic, readonly) bool enabledInAllNamedProfiles;
@property (getter=isEnabledInAnyNamedProfile, nonatomic, readonly) bool enabledInAnyNamedProfile;
@property (getter=isEnabledInAnyProfile, nonatomic, readonly) bool enabledInAnyProfile;
@property (nonatomic, readonly) NSArray *enabledNamedProfiles;
@property (nonatomic, readonly) NSArray *enabledProfiles;
@property (nonatomic, readonly, copy) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isContentBlocker;
@property (nonatomic, readonly) Class settingsPermissionClass;
@property (nonatomic, readonly, copy) NSString *shortName;
@property (readonly) Class superclass;

+ (id)extensionWrapperForContentBlockerWithComposedIdentifier:(id)arg1 contentBlockerManager:(id)arg2;
+ (id)extensionWrapperForWebExtensionWithComposedIdentifier:(id)arg1 webExtensionsController:(id)arg2;

- (void)_postNotificationsToUpdateExtensionState;
- (bool)allowedInPrivateBrowsing;
- (bool)canEnable;
- (bool)canLoadWithErrorString:(id*)arg1;
- (id)containingAppDisplayName;
- (bool)contentBlockerHasSameNameAsWebExtensionFromSameApp:(id)arg1;
- (id)debugDescription;
- (void)disable;
- (id)displayName;
- (void)enableWithPresentingViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)enabledNamedProfiles;
- (id)enabledProfiles;
- (id)extension;
- (bool)isContentBlocker;
- (bool)isEnabled;
- (bool)isEnabledInAllNamedProfiles;
- (bool)isEnabledInAnyNamedProfile;
- (bool)isEnabledInAnyProfile;
- (bool)isEnabledInProfile:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (void)setAllowedInPrivateBrowsing:(bool)arg1;
- (Class)settingsPermissionClass;
- (id)shortName;

@end


@protocol WBSExtensionWrapper <NSObject>

@required

- (bool)allowedInPrivateBrowsing;
- (bool)canEnable;
- (bool)canLoadWithErrorString:(id*)arg1;
- (NSString *)containingAppDisplayName;
- (void)disable;
- (NSString *)displayName;
- (NSArray *)enabledNamedProfiles;
- (NSArray *)enabledProfiles;
- (bool)isContentBlocker;
- (bool)isEnabled;
- (bool)isEnabledInAllNamedProfiles;
- (bool)isEnabledInAnyNamedProfile;
- (bool)isEnabledInAnyProfile;
- (bool)isEnabledInProfile:(WBProfile *)arg1;
- (long long)localizedCompare:(id <WBSExtensionWrapper>)arg1;
- (void)setAllowedInPrivateBrowsing:(bool)arg1;

@end

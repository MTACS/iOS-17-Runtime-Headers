
@interface _SFSettingsAuthentication : NSObject

+ (id)_localAuthenticationOptionsWithAuthenticationContext:(id)arg1;
+ (void)authenticateForSettings:(id)arg1 allowAuthenticationReuse:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (bool)authenticationRequiresPasscode;
+ (long long)biometryTypeCurrentlyAvailableForDevice;
+ (void)pushSettingsAfterAuthentication:(id)arg1 onBehalfOfViewController:(id)arg2 resourceDictionary:(id)arg3 completionHandler:(id /* block */)arg4;

@end


@interface _SFSecIdentityPreferencesController : NSObject {
    NSMutableSet * _domainsAndPortsToUseOnlyAvailableIdentityWithoutPrompting;
}

+ (id)ephemeralSecIdentityPreferencesController;
+ (id)sharedPersistentSecIdentityPreferencesController;

- (void).cxx_destruct;
- (id)_initUsingEphemeralStorage:(bool)arg1;
- (void)saveShouldUseOnlyAvailableIdentityWithoutPrompting:(bool)arg1 forDomainAndPort:(id)arg2;
- (bool)shouldUseOnlyAvailableIdentityWithoutPromptingForDomainAndPort:(id)arg1;

@end

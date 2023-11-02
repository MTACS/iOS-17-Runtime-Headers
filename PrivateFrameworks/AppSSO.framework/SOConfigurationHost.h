
@interface SOConfigurationHost : NSObject {
    SOConfiguration * _configuration;
    SOConfigurationVersion * _configurationVersion;
    NSMutableArray * _removedProfiles;
}

@property (nonatomic, readonly) long long configVersion;

+ (id)_loadProfilesFromDict:(id)arg1;
+ (id)_loadProfilesFromURL:(id)arg1 logFileError:(bool)arg2;
+ (id)defaultManager;
+ (id)maskRegistrationTokenInConfigurationData:(id)arg1;
+ (id)maskRegistrationTokenInProfileList:(id)arg1;

- (void).cxx_destruct;
- (id)_checkAssociatedDomainForProfiles:(id)arg1;
- (id)_checkExtensionsExistenceForProfiles:(id)arg1;
- (void)_checkNewVersion;
- (void)_configurationLoadedWithReason:(long long)arg1;
- (id)_defaultConfigurationFile;
- (id)_defaultConfigurationPath;
- (void)_extensionsLoaded:(id)arg1;
- (bool)_initDataVaultIfNeededWithError:(id*)arg1;
- (bool)_isConfigFileAvailable;
- (void)_loadConfigForFirstTime;
- (id)_mergeProfile:(id)arg1 userProfiles:(id)arg2;
- (void)_reloadConfigWithReason:(long long)arg1;
- (id)_removeNotSupportedUserProfiles:(id)arg1;
- (bool)_saveConfigToFile:(id)arg1 error:(id*)arg2;
- (void)_startKeyBagObserverForReloadingConfiguration;
- (id)_stringWithReason:(long long)arg1;
- (long long)configVersion;
- (id)configurationForClientWithError:(id*)arg1;
- (void)dealloc;
- (id)findPlatformSSOProfile:(id)arg1;
- (id)findProfileForExtension:(id)arg1 profiles:(id)arg2;
- (bool)hasAnyMDMProfileForExtension:(id)arg1;
- (id)init;
- (bool)isPlatformSSOProfile:(id)arg1;
- (id)profileForURL:(id)arg1 responseCode:(long long)arg2;
- (id)profilesWithExtensionBundleIdentifier:(id)arg1;
- (id)realms;
- (id)removedProfileForExtensionBundleIdentifier:(id)arg1;
- (bool)saveConfiguration:(id)arg1 error:(id*)arg2;
- (bool)saveConfigurationData:(id)arg1 error:(id*)arg2;
- (id)validatedProfileForPlatformSSO;
- (long long)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3;

@end

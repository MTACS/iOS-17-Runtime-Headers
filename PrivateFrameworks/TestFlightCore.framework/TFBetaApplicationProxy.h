
@interface TFBetaApplicationProxy : NSObject {
    long long  _bundleAppPlatform;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSString * _logKey;
}

@property (nonatomic) long long bundleAppPlatform;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *bundleURL;
@property (nonatomic, readonly, copy) NSString *logKey;
@property (nonatomic, readonly, copy) NSString *preferredLocalizedDisplayNameForInstalledVersion;

- (void).cxx_destruct;
- (long long)_asdAppPlatform;
- (long long)bundleAppPlatform;
- (id)bundleIdentifier;
- (id)bundleURL;
- (void)deviceWillInstallVersion:(id)arg1 build:(id)arg2 withLocalizedDisplayNames:(id)arg3 localizedTestNotes:(id)arg4 primaryLocaleKey:(id)arg5 developerName:(id)arg6 expirationDate:(id)arg7 iconUrlTemplate:(id)arg8 testerEmail:(id)arg9;
- (id)initForAppWithBundleURL:(id)arg1;
- (id)initForAppWithIdentifier:(id)arg1;
- (id)initForAppWithIdentifier:(id)arg1 appPlatform:(long long)arg2;
- (bool)isBetaAppLaunchScreenEnabledForInstalledVersion;
- (bool)isProactiveFeedbackEnabledForInstalledVersion;
- (id)logKey;
- (void)overwriteMetadataForInstalledVersion:(id)arg1 build:(id)arg2 withLocalizedDisplayNames:(id)arg3 localizedTestNotes:(id)arg4 primaryLocaleKey:(id)arg5 developerName:(id)arg6 expirationDate:(id)arg7 iconUrlTemplate:(id)arg8 testerEmail:(id)arg9;
- (id)preferredLocalizedDisplayNameForInstalledVersion;
- (void)setBetaAppLaunchScreenEnabled:(bool)arg1 forVersion:(id)arg2 build:(id)arg3;
- (void)setBundleAppPlatform:(long long)arg1;
- (void)setProactiveFeedbackEnabled:(bool)arg1 forVersion:(id)arg2 build:(id)arg3;
- (void)updateLocalizedTestNotes:(id)arg1 forVersion:(id)arg2 build:(id)arg3;

@end

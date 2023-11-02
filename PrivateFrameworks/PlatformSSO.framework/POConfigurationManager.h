
@interface POConfigurationManager : NSObject {
    PODeviceConfiguration * _currentDeviceConfiguration;
    POLoginConfiguration * _currentLoginConfiguration;
    POUserConfiguration * _currentUserConfiguration;
    POConfigurationVersion * _deviceConfigurationVersion;
    PODirectoryServices * _directoryServices;
    POKeychainHelper * _keychainHelper;
    POConfigurationVersion * _loginConfigurationVersion;
    PODaemonConnection * _serviceConnection;
    bool  _sharedOnly;
    POConfigurationVersion * _userConfigurationVersion;
    NSString * _userIdentifier;
    NSString * _userName;
}

@property (readonly) PODeviceConfiguration *currentDeviceConfiguration;
@property (readonly) POLoginConfiguration *currentLoginConfiguration;
@property (readonly) POUserConfiguration *currentUserConfiguration;
@property (retain) POConfigurationVersion *deviceConfigurationVersion;
@property (retain) PODirectoryServices *directoryServices;
@property (retain) POKeychainHelper *keychainHelper;
@property (retain) POConfigurationVersion *loginConfigurationVersion;
@property bool sharedOnly;
@property (readonly) NSDate *tokenExpiration;
@property (readonly) NSDate *tokenReceived;
@property (retain) POConfigurationVersion *userConfigurationVersion;
@property (readonly) PODeviceConfiguration *userDeviceConfiguration;
@property (readonly) NSString *userIdentifier;
@property (readonly) NSString *userName;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)__removeDeviceConfigurationWithIdentifier:(id)arg1;
- (bool)__removeLoginConfigurationForIdentifier:(id)arg1;
- (id)currentDeviceConfiguration;
- (id)currentLoginConfiguration;
- (id)currentRefreshToken;
- (id)currentUserConfiguration;
- (id)deviceConfiguration;
- (id)deviceConfigurationVersion;
- (id)directoryServices;
- (void)enablePlatformSSORulesIfNeeded:(id /* block */)arg1;
- (id)initWithUserName:(id)arg1;
- (id)initWithUserName:(id)arg1 directoryServices:(id)arg2 sharedOnly:(bool)arg3;
- (id)keychainHelper;
- (id)loginConfiguration;
- (id)loginConfigurationVersion;
- (id)refreshTokenFromTokens:(id)arg1;
- (bool)removeDeviceConfiguration;
- (bool)removeLoginConfiguration;
- (bool)removeUserConfigurationForUserName:(id)arg1;
- (bool)removeUserDeviceConfiguration;
- (bool)removeUserLoginConfiguration;
- (bool)resetStoredConfiguration;
- (void)restorePlatformSSORulesIfNeeded;
- (bool)saveAppSSOConfiguration:(id)arg1;
- (bool)saveCurrentUserConfiguration;
- (bool)saveDeviceConfiguration:(id)arg1;
- (bool)saveLoginConfiguration:(id)arg1;
- (bool)saveUserConfiguration:(id)arg1 forUserName:(id)arg2;
- (void)setDeviceConfigurationVersion:(id)arg1;
- (void)setDirectoryServices:(id)arg1;
- (void)setKeychainHelper:(id)arg1;
- (void)setLoginConfigurationVersion:(id)arg1;
- (void)setSharedOnly:(bool)arg1;
- (void)setUserConfigurationVersion:(id)arg1;
- (bool)sharedOnly;
- (id)tokenExpiration;
- (id)tokenReceived;
- (id)userConfigurationForUserName:(id)arg1;
- (id)userConfigurationVersion;
- (id)userDeviceConfiguration;
- (id)userIdentifier;
- (id)userName;

@end

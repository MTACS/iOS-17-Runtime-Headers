
@interface PODaemonProcess : NSObject <PODaemonProtocol> {
    bool  _dataVaultInitialized;
    PODirectoryServices * _directoryServices;
    id /* block */  _invalidationHandler;
    POUserGroupManager * _userGroupManager;
    NSXPCConnection * _xpcConnection;
}

@property bool dataVaultInitialized;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PODirectoryServices *directoryServices;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) Class superclass;
@property (retain) POUserGroupManager *userGroupManager;

- (void).cxx_destruct;
- (id)_defaultConfigurationPath;
- (id)_deviceConfigurationForIdentifer:(id)arg1;
- (void)_disablePlatformSSORuleForLogin:(id /* block */)arg1;
- (void)_disablePlatformSSORuleForScreensaver:(id /* block */)arg1;
- (void)_enablePlatformSSORuleForLogin:(id /* block */)arg1;
- (void)_enablePlatformSSORuleForScreensaver:(id /* block */)arg1;
- (bool)_initDataVaultIfNeededWithError:(id*)arg1;
- (id)_loginConfigurationForIdentifer:(id)arg1;
- (bool)_removeDeviceConfigurationForIdentifer:(id)arg1 error:(id*)arg2;
- (bool)_removeLoginConfigurationForIdentifer:(id)arg1 error:(id*)arg2;
- (bool)_removeUserConfigurationForIdentifier:(id)arg1 error:(id*)arg2;
- (bool)_saveDeviceConfiguration:(id)arg1 identifer:(id)arg2 error:(id*)arg3;
- (bool)_saveLoginConfiguration:(id)arg1 identifer:(id)arg2 error:(id*)arg3;
- (bool)_saveUserConfigurationData:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_updateGroupForRight:(id)arg1 newGroup:(id)arg2;
- (id)_userConfigurationForIdentifier:(id)arg1 error:(id*)arg2;
- (void)connectionInvalidated;
- (bool)dataVaultInitialized;
- (void)deviceConfigurationForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (id)directoryServices;
- (void)disablePlatformSSORules:(id /* block */)arg1;
- (void)enablePlatformSSORules:(id /* block */)arg1;
- (void)handleAuthRights;
- (void)handleStartup;
- (id)init;
- (id)initWithXPCConnection:(id)arg1;
- (id /* block */)invalidationHandler;
- (void)loginConfigurationForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (void)migrateConfiguration:(bool)arg1 completion:(id /* block */)arg2;
- (void)removeDeviceConfigurationForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (void)removeLoginConfigurationForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (void)removeUserConfigurationForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)resetStoredConfigurationWithCompletion:(id /* block */)arg1;
- (void)saveAppSSOConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)saveDeviceConfiguration:(id)arg1 identifer:(id)arg2 completion:(id /* block */)arg3;
- (void)saveLoginConfiguration:(id)arg1 identifer:(id)arg2 completion:(id /* block */)arg3;
- (void)saveUserConfiguration:(id)arg1 forIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)saveUserConfigurationData:(id)arg1 forIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setDataVaultInitialized:(bool)arg1;
- (void)setDirectoryServices:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setUserGroupManager:(id)arg1;
- (void)userConfigurationForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)userGroupManager;

@end

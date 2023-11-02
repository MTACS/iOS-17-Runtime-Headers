
@interface PODaemonConnection : NSObject <PODaemonProtocol> {
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection;

+ (id)xpcQueue;

- (void).cxx_destruct;
- (bool)_connectToService;
- (void)addLocalUser:(id)arg1 toLocalGroup:(id)arg2 completion:(id /* block */)arg3;
- (void)addPlatformSSOToSearchPolicyWithCompletion:(id /* block */)arg1;
- (void)bindTokenForUsername:(id)arg1 hash:(id)arg2 wrapHash:(id)arg3 tokenId:(id)arg4 passwordContext:(id)arg5 completion:(id /* block */)arg6;
- (void)createOrUpdateAdminGroups:(id)arg1 authorizationGroups:(id)arg2 previousAuthorizationGroups:(id)arg3 otherGroups:(id)arg4 completion:(id /* block */)arg5;
- (void)createOrUpdateUser:(id)arg1 completion:(id /* block */)arg2;
- (void)createPlatformSSOAdminGroupWithCompletion:(id /* block */)arg1;
- (void)createUser:(id)arg1 passwordContext:(id)arg2 name:(id)arg3 loginUserName:(id)arg4 idpIdentifier:(id)arg5 isAdmin:(bool)arg6 groupMembership:(id)arg7 completion:(id /* block */)arg8;
- (void)dealloc;
- (void)deviceConfigurationForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (void)disablePlatformSSORules:(id /* block */)arg1;
- (void)enablePlatformSSORules:(id /* block */)arg1;
- (void)findUserWithName:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllUsersWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)loginConfigurationForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (void)migrateConfiguration:(bool)arg1 completion:(id /* block */)arg2;
- (void)removeDeviceConfigurationForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (void)removeLocalUser:(id)arg1 fromLocalGroup:(id)arg2 completion:(id /* block */)arg3;
- (void)removeLoginConfigurationForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (void)removePlatformSSOAdminGroupWithCompletion:(id /* block */)arg1;
- (void)removePlatformSSOFromSearchPolicyWithCompletion:(id /* block */)arg1;
- (void)removePlatformSSOUser:(id)arg1 completion:(id /* block */)arg2;
- (void)removeUserConfigurationForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeUserWithName:(id)arg1 completion:(id /* block */)arg2;
- (void)resetStoredConfigurationWithCompletion:(id /* block */)arg1;
- (void)saveAppSSOConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)saveDeviceConfiguration:(id)arg1 identifer:(id)arg2 completion:(id /* block */)arg3;
- (void)saveLoginConfiguration:(id)arg1 identifer:(id)arg2 completion:(id /* block */)arg3;
- (void)savePlatformSSOUniqueIdentifier:(id)arg1 forUser:(id)arg2 completion:(id /* block */)arg3;
- (void)saveUserConfiguration:(id)arg1 forIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)saveUserConfigurationData:(id)arg1 forIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setGroups:(id)arg1 forLocalUser:(id)arg2 completion:(id /* block */)arg3;
- (void)setGroups:(id)arg1 forPlatformSSOUser:(id)arg2 completion:(id /* block */)arg3;
- (void)setXpcConnection:(id)arg1;
- (void)unbindTokenForAllUsersWithCompletion:(id /* block */)arg1;
- (void)unbindTokenForUsername:(id)arg1 hash:(id)arg2 completion:(id /* block */)arg3;
- (void)userConfigurationForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)xpcConnection;

@end


@interface MIHelperServiceFrameworkClient : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_invalidateObject;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_sharedConnection;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)createWrappedAppForInstalledBundleIdentifier:(id)arg1 atTargetURL:(id)arg2 installationInfo:(id)arg3 onBehalfOf:(struct { unsigned int x1[8]; })arg4 error:(id*)arg5;
- (bool)createWrappedAppForInstalledBundleIdentifier:(id)arg1 atTargetURL:(id)arg2 installationRecords:(id)arg3 onBehalfOf:(struct { unsigned int x1[8]; })arg4 error:(id*)arg5;
- (id)createWrappedAppForInstalledBundleIdentifier:(id)arg1 inTargetDirectory:(id)arg2 installationInfo:(id)arg3 onBehalfOf:(struct { unsigned int x1[8]; })arg4 error:(id*)arg5;
- (id)createWrappedAppForInstalledBundleIdentifier:(id)arg1 inTargetDirectory:(id)arg2 installationRecords:(id)arg3 onBehalfOf:(struct { unsigned int x1[8]; })arg4 error:(id*)arg5;
- (void)dealloc;
- (id)installMacDeveloperAppAtURL:(id)arg1 toURL:(id)arg2 targetURLType:(unsigned long long)arg3 error:(id*)arg4;
- (bool)purgeInstallCoordinationPromiseStagingDirectoryForUUID:(id)arg1 keepStagingDirectory:(bool)arg2 error:(id*)arg3;
- (bool)removeDeveloperAppAtURL:(id)arg1 error:(id*)arg2;
- (bool)removeWrappedAppWithBundleID:(id)arg1 atURL:(id)arg2 error:(id*)arg3;
- (void)setXpcConnection:(id)arg1;
- (id)updateWrappedAppAt:(id)arg1 forInstalledBundleIdentifier:(id)arg2 installationInfo:(id)arg3 onBehalfOf:(struct { unsigned int x1[8]; })arg4 error:(id*)arg5;
- (id)updateWrappedAppAt:(id)arg1 forInstalledBundleIdentifier:(id)arg2 installationRecords:(id)arg3 onBehalfOf:(struct { unsigned int x1[8]; })arg4 error:(id*)arg5;
- (id)xpcConnection;

@end

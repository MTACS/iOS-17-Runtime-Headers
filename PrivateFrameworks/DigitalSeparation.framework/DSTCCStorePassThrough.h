
@interface DSTCCStorePassThrough : NSObject <DSTCCStore> {
    NEConfiguration * _pathControllerConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NEConfiguration *pathControllerConfiguration;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)allAppsWithLocalNetworkAccess:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (id)appsWithLocationService;
- (void)appsWithPermissionGrantedForService:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)deleteApp:(id)arg1 forTest:(bool)arg2;
- (void)healthAuthorizationForApp:(id)arg1 andAuthorizationStore:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)isEntityClassApplication:(id)arg1;
- (bool)isServiceGranted:(id)arg1 forApp:(id)arg2;
- (void)loadConfigurations:(id)arg1 handler:(id /* block */)arg2;
- (unsigned long long)locationAuthorizationForApp:(id)arg1;
- (id)pathControllerConfiguration;
- (id)pathRuleForBundleID:(id)arg1 create:(bool)arg2;
- (void)resetHealthPermissionsForApp:(id)arg1 withAuthorizationStore:(id)arg2 andCompletionHandler:(id /* block */)arg3;
- (void)resetLocalNetworkPermissionForApp:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (void)resetLocationPermissionForApp:(id)arg1;
- (id)resetTCCCategory:(id)arg1 forApp:(id)arg2;
- (id)resetTCCPermission:(id)arg1 forApp:(id)arg2;
- (void)saveConfiguration:(id)arg1 handler:(id /* block */)arg2;
- (void)setPathControllerConfiguration:(id)arg1;

@end

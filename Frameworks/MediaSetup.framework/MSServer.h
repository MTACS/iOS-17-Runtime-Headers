
@interface MSServer : NSObject <MSAccountsImplementer, MediaServiceUpdatedClientDelegate, NSXPCListenerDelegate> {
    <MSAccountsImplementer> * _accountsInterfaceDelegate;
    NSMutableSet * _connections;
    NSXPCListener * _serverListener;
}

@property (nonatomic) <MSAccountsImplementer> *accountsInterfaceDelegate;
@property (retain) NSMutableSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_initializeServer;
- (bool)_isConnectionEntitled:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (id)accountsInterfaceDelegate;
- (void)activeServiceApplicationInformationForSharedUserID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addMediaService:(id)arg1 usingSetupBundles:(id)arg2 completion:(id /* block */)arg3;
- (id)connections;
- (void)getAvailableServices:(id)arg1 userIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getCachedAvailableServices:(id)arg1 userIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getCachedServiceInfo:(id)arg1 homeUserID:(id)arg2 endpointID:(id)arg3 completion:(id /* block */)arg4;
- (void)getDefaultMediaService:(id)arg1 homeUserID:(id)arg2 completion:(id /* block */)arg3;
- (void)getDefaultMediaServiceForAllUsers:(id /* block */)arg1;
- (void)getMediaServiceChoicesForAllUsers:(id /* block */)arg1;
- (void)getMediaServiceChoicesForSharedUser:(id)arg1 completion:(id /* block */)arg2;
- (void)getPublicInfoForBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)getResolvedServiceInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)getResolvedServiceInfo:(id)arg1 sharedUserID:(id)arg2 completion:(id /* block */)arg3;
- (void)getServiceConfigurationInfo:(id)arg1 serviceID:(id)arg2 completion:(id /* block */)arg3;
- (void)getSupportedThirdPartyMediaServices:(id /* block */)arg1;
- (id)initWithAccountsDelegate:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)openConnection;
- (void)overrideAppleMusicSubscriptionStatus:(bool)arg1 homeUserIDS:(id)arg2 completion:(id /* block */)arg3;
- (void)removeMediaService:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 completion:(id /* block */)arg4;
- (void)requestAuthRenewalForMediaService:(id)arg1 homeUserID:(id)arg2 parentNetworkActivity:(id)arg3 completion:(id /* block */)arg4;
- (void)serviceSettingDidUpdate:(id)arg1 homeUserID:(id)arg2;
- (void)setAccountsInterfaceDelegate:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setVersion:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)switchUserAccountInfo:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 completion:(id /* block */)arg4;
- (void)thirdPartyMusicAvailable:(id)arg1 completion:(id /* block */)arg2;
- (void)updateDefaultMediaService:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 completion:(id /* block */)arg4;
- (void)updateProperty:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 withOptions:(id)arg4 completion:(id /* block */)arg5;
- (void)userDidRemoveService:(id)arg1 homeUserID:(id)arg2;
- (void)userDidUpdateDefaultService:(id)arg1 homeUserID:(id)arg2;

@end

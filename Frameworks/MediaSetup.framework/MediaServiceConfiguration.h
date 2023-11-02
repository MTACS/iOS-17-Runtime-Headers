
@interface MediaServiceConfiguration : NSObject <MediaServiceUpdatedServiceInterfaceDelegate> {
    <MSAccountsImplementer> * _accountsImplementer;
    NSXPCConnection * _connection;
    <MediaServiceUpdatedDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MediaServiceUpdatedDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_performBlock:(id /* block */)arg1;
- (void)activeServiceApplicationInformationForSharedUserID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addMediaService:(id)arg1 toHomes:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (void)getAvailableServices:(id)arg1 completion:(id /* block */)arg2;
- (void)getCachedAvailableServices:(id)arg1 completion:(id /* block */)arg2;
- (void)getCachedServiceInfo:(id)arg1 homeUserID:(id)arg2 completion:(id /* block */)arg3;
- (void)getCachedServiceInfo:(id)arg1 homeUserID:(id)arg2 endpointID:(id)arg3 completion:(id /* block */)arg4;
- (void)getDefaultMediaService:(id)arg1 completion:(id /* block */)arg2;
- (void)getDefaultMediaServiceForAllUsers:(id /* block */)arg1;
- (void)getMediaServiceChoicesForAllUsers:(id /* block */)arg1;
- (void)getMediaServiceChoicesForSharedUser:(id)arg1 completion:(id /* block */)arg2;
- (void)getPublicInfoForBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)getResolvedServiceAndUser:(id)arg1 sharedUserID:(id)arg2 completion:(id /* block */)arg3;
- (void)getResolvedServiceInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)getResolvedServiceInfo:(id)arg1 sharedUserID:(id)arg2 completion:(id /* block */)arg3;
- (void)getServiceConfigurationInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)getServiceConfigurationInfo:(id)arg1 serviceID:(id)arg2 completion:(id /* block */)arg3;
- (void)getSupportedThirdPartyMediaServices:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (void)overrideAppleMusicSubscriptionStatus:(bool)arg1 homeUserIDS:(id)arg2 completion:(id /* block */)arg3;
- (id)queue;
- (void)removeServiceFromHome:(id)arg1 fromHome:(id)arg2 completion:(id /* block */)arg3;
- (void)requestAuthRenewalForMediaService:(id)arg1 homeUserID:(id)arg2 parentNetworkActivity:(id)arg3 completion:(id /* block */)arg4;
- (void)serviceSettingDidUpdate:(id)arg1 homeUserID:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setVersion:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)switchUserAccountInfo:(id)arg1 home:(id)arg2 completion:(id /* block */)arg3;
- (bool)thirdPartyMusicAvailable:(id)arg1;
- (void)updateDefaultMediaService:(id)arg1 forHome:(id)arg2 completion:(id /* block */)arg3;
- (void)updateProperty:(id)arg1 forHome:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)userDidRemoveService:(id)arg1 homeUserID:(id)arg2;
- (void)userDidUpdateDefaultService:(id)arg1 homeUserID:(id)arg2;

@end

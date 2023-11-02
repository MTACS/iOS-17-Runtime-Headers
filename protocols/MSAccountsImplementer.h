
@protocol MSAccountsImplementer <NSObject>

@required

- (void)activeServiceApplicationInformationForSharedUserID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)addMediaService:(void *)arg1 usingSetupBundles:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MediaService *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getAvailableServices:(void *)arg1 userIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getCachedAvailableServices:(void *)arg1 userIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getCachedServiceInfo:(void *)arg1 homeUserID:(void *)arg2 endpointID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MediaService *, NSString *, NSError *, void*
- (void)getDefaultMediaService:(void *)arg1 homeUserID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MediaService *, NSError *, void*
- (void)getDefaultMediaServiceForAllUsers:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getMediaServiceChoicesForAllUsers:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getMediaServiceChoicesForSharedUser:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)getPublicInfoForBundleID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MSPublicDBInfo *, void*
- (void)getResolvedServiceInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MSServiceResolutionInfo *, NSError *, void*
- (void)getResolvedServiceInfo:(void *)arg1 sharedUserID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MSServiceResolutionInfo *, NSError *, void*
- (void)getServiceConfigurationInfo:(void *)arg1 serviceID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getSupportedThirdPartyMediaServices:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)overrideAppleMusicSubscriptionStatus:(void *)arg1 homeUserIDS:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeMediaService:(void *)arg1 homeID:(void *)arg2 homeUserID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: MediaService *, NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestAuthRenewalForMediaService:(void *)arg1 homeUserID:(void *)arg2 parentNetworkActivity:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: MediaService *, NSString *, CMSNetworkActivity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MediaService *, NSError *, void*
- (void)setVersion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)switchUserAccountInfo:(void *)arg1 homeID:(void *)arg2 homeUserID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: MediaService *, NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)thirdPartyMusicAvailable:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateDefaultMediaService:(void *)arg1 homeID:(void *)arg2 homeUserID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: MediaService *, NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateProperty:(void *)arg1 homeID:(void *)arg2 homeUserID:(void *)arg3 withOptions:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: MediaService *, NSUUID *, NSUUID *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@optional

- (void)openConnection;

@end

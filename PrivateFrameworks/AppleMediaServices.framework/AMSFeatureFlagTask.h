
@interface AMSFeatureFlagTask : AMSTask <AMSBagConsumer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_cacheDirectory;
+ (id)_cachePath;
+ (bool)_cacheResponse:(id)arg1 error:(id*)arg2;
+ (id)_deviceClass;
+ (void)_handleDeletedITFEsFromResponse:(id)arg1;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)cachedRemoteGroups;
+ (void)clearCache;
+ (id)createBagForSubProfile;
+ (id)lastFetchedDate;

- (id)_updateRemoteFeatureFlags;
- (id)perform;

@end

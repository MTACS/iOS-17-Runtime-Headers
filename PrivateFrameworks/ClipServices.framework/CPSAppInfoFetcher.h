
@interface CPSAppInfoFetcher : NSObject <CPSAppInfoFetching> {
    NSCache * _appMetadataByBundleID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_cachedIconFileURLForItemID:(id)arg1;
+ (id)_sharedAMSBag;

- (void).cxx_destruct;
- (void)_downloadIconIfNeeded:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_lookUpClipDemoAMSMetadataWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)evictCachedMetadataForClipBundleID:(id)arg1;
- (id)init;
- (void)lookUpClipMetadataByBundleID:(id)arg1 sourceBundleID:(id)arg2 URL:(id)arg3 downloadIconIfNeeded:(bool)arg4 skipCaching:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)lookUpClipMetadataByBundleID:(id)arg1 sourceBundleID:(id)arg2 downloadIconIfNeeded:(bool)arg3 skipCaching:(bool)arg4 completionHandler:(id /* block */)arg5;

@end

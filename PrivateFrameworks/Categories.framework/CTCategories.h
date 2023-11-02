
@interface CTCategories : NSObject {
    NSString * _indexVersionId;
    NSLock * _lookupLock;
}

@property (readonly, copy) NSArray *availableCategoryIDs;

+ (long long)currentIOSDevice;
+ (void)initialize;
+ (id)sharedCategories;
+ (id)supportedWebBrowserBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_emptySharedCache:(id)arg1;
- (id)availableCategoryIDs;
- (id)bundleIDForPlatform:(id)arg1 fromBundleID:(id)arg2 platform:(id)arg3;
- (void)categoriesForBundleIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoriesForBundleIDs:(id)arg1 platform:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)categoriesForDomainNames:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoriesForDomainURLs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoryForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoryForBundleID:(id)arg1 platform:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)categoryForDomainName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoryForDomainURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)emptyCache;
- (id)init;
- (void)unCategorizedDomainsFromDomains:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end

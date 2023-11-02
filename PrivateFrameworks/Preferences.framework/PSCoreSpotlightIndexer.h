
@interface PSCoreSpotlightIndexer : NSObject {
    CSSearchQuery * _hasItemsQuery;
    NSMutableArray * _indexFromControllerLog;
    CSSearchableIndex * _prefsSearchableIndex;
    CSTopHitSearchQuery * _searchQuery;
    bool  _skipManifests;
    NSObject<OS_dispatch_queue> * _spotlightIndexQueue;
}

@property (nonatomic, retain) CSSearchQuery *hasItemsQuery;
@property (nonatomic, retain) NSMutableArray *indexFromControllerLog;
@property (nonatomic, readonly) NSDate *lastIndexDate;
@property (nonatomic, readonly) bool needsIndex;
@property (nonatomic, retain) CSSearchableIndex *prefsSearchableIndex;
@property (nonatomic, retain) CSTopHitSearchQuery *searchQuery;
@property (nonatomic) bool skipManifests;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *spotlightIndexQueue;

+ (id)searchIndexIdentifier;
+ (id)sharedInstance;
+ (char *)spotlightIndexQueueIdentifier;

- (void).cxx_destruct;
- (id)_bundleForSpecifier:(id)arg1 parentBundle:(id)arg2;
- (void)_deleteSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 completion:(id /* block */)arg6;
- (id)_descriptionForSpecifierName:(id)arg1 withParentSpecifierNames:(id)arg2;
- (void)_indexChunkOfSearchableItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_indexSearchableItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_keyValueDictionaryForURL:(id)arg1;
- (id)_rankingHintScoreForURL:(id)arg1;
- (id)_specifiersForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (id)_specifiersPlistPathForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (id)_urlForSpecifier:(id)arg1 identifier:(id)arg2 category:(id)arg3 childCategory:(id*)arg4 prefix:(id)arg5 path:(id*)arg6 baseURL:(id)arg7 shouldLinkToRow:(bool)arg8;
- (id)_urlsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2;
- (id)blacklistedControllers;
- (bool)controllerIsBlacklisted:(id)arg1;
- (id)csSearchableItemsFromSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6;
- (void)deleteIndexWithCompletionBlock:(id /* block */)arg1;
- (void)deleteIndexWithDomainIdentifiers:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)deleteSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(bool)arg4 completion:(id /* block */)arg5;
- (id)descriptionForCSSearchableItem:(id)arg1;
- (id)descriptionForCSSearchableItems:(id)arg1;
- (id)hasItemsQuery;
- (void)hasfirstPartyIndexItems:(id /* block */)arg1;
- (id)indexFromControllerLog;
- (void)indexManifestBundlesAtURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)indexManifestBundlesAtURLs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)indexSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(bool)arg4 completion:(id /* block */)arg5;
- (void)indexThirdPartyAppsWithPrefix:(id)arg1 completion:(id /* block */)arg2;
- (id)lastIndexBuild;
- (id)lastIndexDate;
- (id)lastIndexLanguage;
- (id)manifestFromSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6;
- (id)manifestsFromDirectory:(id)arg1;
- (bool)needsIndex;
- (void)performYukonManifestMigrationWithCompletion:(id /* block */)arg1;
- (id)prefsSearchableIndex;
- (void)reindexSpecifiersIfNeeded:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(bool)arg4 setHasIndexed:(bool)arg5 completion:(id /* block */)arg6;
- (id)searchQuery;
- (id)searchableFirstPartyItemClassIdentifier;
- (id)searchableItemAttributeSetClassIdenfitier;
- (id)searchableItemClassIdentifier;
- (id)searchableItemForSpecifier:(id)arg1 bundleID:(id)arg2 category:(id)arg3 keywords:(id)arg4 url:(id)arg5 description:(id)arg6;
- (id)searchableItemsFromManifest:(id)arg1 specifier:(id)arg2 bundle:(id)arg3;
- (id)searchableItemsFromManifestsForSpecifier:(id)arg1 bundle:(id)arg2;
- (id)searchableItemsFromSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6;
- (id)searchableThirdPartyItemClassIdentifier;
- (void)setHasIndexed;
- (void)setHasItemsQuery:(id)arg1;
- (void)setIndexFromControllerLog:(id)arg1;
- (void)setLastIndexBuild:(id)arg1;
- (void)setLastIndexDate:(id)arg1;
- (void)setLastIndexLanguage:(id)arg1;
- (void)setNeedsIndex;
- (void)setNeedsIndex:(bool)arg1;
- (void)setPrefsSearchableIndex:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setSkipManifests:(bool)arg1;
- (void)setSpotlightIndexQueue:(id)arg1;
- (bool)skipManifests;
- (id)spotlightIndexQueue;
- (void)topHitSearchForString:(id)arg1 keyboardLanguage:(id)arg2 foundItemsHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

@end

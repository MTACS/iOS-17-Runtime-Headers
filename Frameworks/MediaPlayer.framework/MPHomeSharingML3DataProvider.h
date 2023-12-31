
@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3 {
    <MPArtworkDataSource> * _artworkDataSource;
    NSMutableDictionary * _blocksForLoadingContainerPIDs;
    NSObject<OS_dispatch_queue> * _containerFillQueue;
    HSHomeSharingLibrary * _homeSharingLibrary;
    NSMutableSet * _loadedContainerPIDs;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _tokenDataForDSIDs;
}

@property (nonatomic, readonly) unsigned int databaseID;
@property (nonatomic, readonly) HSHomeSharingLibrary *homeSharingLibrary;
@property (nonatomic, readonly) bool isSupportedSharingVersion;

+ (void)_determineHomeSharingGroupIDWithCompletionHandler:(id /* block */)arg1;
+ (void)beginScanningForLibraries;
+ (void)endScanningForLibraries;
+ (id)homeSharingGroupID;
+ (bool)isScanningForLibraries;

- (void).cxx_destruct;
- (id)URLForItemDataRequest:(id)arg1;
- (void)_fetchTokensForAuthorizedDSIDs;
- (void)_fillContainerForQueryCriteria:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_homeSharingGroupIDDidChangeNotification:(id)arg1;
- (void)_homeSharingLibraryDidBecomeUnavailable:(id)arg1;
- (void)_homeSharingLibraryDidUpdateRevisionNumber:(id)arg1;
- (id)_tokenDataForAccountID:(unsigned long long)arg1;
- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
- (id)artworkDataSource;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id /* block */)arg2 progressHandler:(id /* block */)arg3;
- (unsigned int)databaseID;
- (void)dealloc;
- (void)disconnect;
- (id)errorResolverForItem:(id)arg1;
- (bool)hasGeniusMixes;
- (id)homeSharingLibrary;
- (id)initWithHomeSharingLibrary:(id)arg1;
- (bool)isSupportedSharingVersion;
- (id)itemResultSetForQueryCriteria:(id)arg1;
- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(id /* block */)arg2;
- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(id /* block */)arg2;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(id /* block */)arg2;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(id /* block */)arg2;
- (id)name;
- (id)protectedContentSupportStorageURL;
- (bool)requiresAuthentication;
- (void)setRentalPlaybackStartDateForItemID:(unsigned long long)arg1;
- (void)setTokenData:(id)arg1 forAuthorizedDSID:(unsigned long long)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(id /* block */)arg4;
- (id)uniqueIdentifier;
- (bool)writable;

@end

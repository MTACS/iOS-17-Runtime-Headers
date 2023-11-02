
@interface HUSoftwareLibraryLookupResult : NSObject {
    NSDictionary * _accessoriesByBundleIDs;
    NSDictionary * _accessoriesByStoreIDs;
    NSSet * _matchedLibraryItems;
    NSSet * _matchedStoreItems;
    NSSet * _unmatchedRequests;
}

@property (nonatomic, retain) NSDictionary *accessoriesByBundleIDs;
@property (nonatomic, retain) NSDictionary *accessoriesByStoreIDs;
@property (nonatomic, retain) NSSet *matchedLibraryItems;
@property (nonatomic, retain) NSSet *matchedStoreItems;
@property (nonatomic, retain) NSSet *unmatchedRequests;

+ (id)_libraryResultForRequests:(id)arg1;
+ (id)_storeResultForRequests:(id)arg1;
+ (id)resultForAccessories:(id)arg1;
+ (id)resultForRequests:(id)arg1;

- (void).cxx_destruct;
- (id)accessoriesByBundleIDs;
- (id)accessoriesByStoreIDs;
- (id)init;
- (id)matchedLibraryItems;
- (id)matchedStoreItems;
- (void)setAccessoriesByBundleIDs:(id)arg1;
- (void)setAccessoriesByStoreIDs:(id)arg1;
- (void)setMatchedLibraryItems:(id)arg1;
- (void)setMatchedStoreItems:(id)arg1;
- (void)setUnmatchedRequests:(id)arg1;
- (id)unmatchedRequests;

@end

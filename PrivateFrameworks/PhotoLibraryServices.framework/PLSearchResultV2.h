
@interface PLSearchResultV2 : NSObject {
    NSArray * _allFruitfulScopedQueryMatchedGroups;
    NSArray * _allQueryMatchedGroups;
    NSArray * _assetUUIDs;
    NSArray * _collectionUUIDs;
    NSArray * _suggestions;
}

@property (nonatomic, retain) NSArray *allFruitfulScopedQueryMatchedGroups;
@property (nonatomic, retain) NSArray *allQueryMatchedGroups;
@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (nonatomic, readonly) NSArray *collectionUUIDs;
@property (nonatomic, readonly) NSArray *suggestions;

- (void).cxx_destruct;
- (id)allFruitfulScopedQueryMatchedGroups;
- (id)allQueryMatchedGroups;
- (id)assetUUIDs;
- (id)collectionUUIDs;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAssetUUIDs:(id)arg1 collectionUUIDs:(id)arg2 suggestions:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)mergeWithSearchResult:(id)arg1;
- (void)setAllFruitfulScopedQueryMatchedGroups:(id)arg1;
- (void)setAllQueryMatchedGroups:(id)arg1;
- (id)suggestions;

@end

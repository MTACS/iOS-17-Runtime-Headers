
@interface PSIGroupAggregateItem : NSObject {
    NSArray * _assetIds;
    NSArray * _collectionIds;
    PSIGroup * _group;
    NSValue * _rangeMatchingToken;
    PSIQueryToken * _searchToken;
}

@property (nonatomic, retain) NSArray *assetIds;
@property (nonatomic, retain) NSArray *collectionIds;
@property (nonatomic, retain) PSIGroup *group;
@property (nonatomic, retain) NSValue *rangeMatchingToken;
@property (nonatomic, retain) PSIQueryToken *searchToken;

- (void).cxx_destruct;
- (id)assetIds;
- (id)collectionIds;
- (id)group;
- (id)rangeMatchingToken;
- (void)reset;
- (id)searchToken;
- (void)setAssetIds:(id)arg1;
- (void)setCollectionIds:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setRangeMatchingToken:(id)arg1;
- (void)setSearchToken:(id)arg1;

@end

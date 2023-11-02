
@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (nonatomic, readonly) NSDate *addedDate;

+ (long long)batchSize;
+ (long long)cacheSize;
+ (id)propertiesToFetch;
+ (id)propertiesToSortBy;
+ (bool)useNoIndexSelf;
+ (bool)useObjectFetchingContext;

- (id)addedDate;

@end

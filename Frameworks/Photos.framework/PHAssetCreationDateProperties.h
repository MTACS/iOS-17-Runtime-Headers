
@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (nonatomic, readonly) NSDate *creationDate;

+ (long long)batchSize;
+ (long long)cacheSize;
+ (id)propertiesToFetch;
+ (id)propertiesToSortBy;
+ (bool)useNoIndexSelf;
+ (bool)useObjectFetchingContext;

- (id)creationDate;

@end

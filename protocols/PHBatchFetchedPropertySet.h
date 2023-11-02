
@protocol PHBatchFetchedPropertySet <PHBatchFetchedObject>

@required

+ (long long)batchSize;
+ (long long)cacheSize;
+ (NSString *)entityName;
+ (NSString *)fetchType;
+ (NSArray *)propertiesToFetch;
+ (NSArray *)propertiesToSortBy;
+ (bool)useNoIndexSelf;
+ (bool)useObjectFetchingContext;

- (id)initWithObjectID:(NSManagedObjectID *)arg1 knownKeysDictionary:(NSKnownKeysDictionary *)arg2 photoLibrary:(PHPhotoLibrary *)arg3;

@end

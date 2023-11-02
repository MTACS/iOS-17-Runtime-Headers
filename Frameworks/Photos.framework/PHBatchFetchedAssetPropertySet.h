
@interface PHBatchFetchedAssetPropertySet : NSObject <PHBatchFetchedPropertySet> {
    NSKnownKeysDictionary * _knownKeysDictionary;
    NSManagedObjectID * _objectID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSKnownKeysDictionary *knownKeysDictionary;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (readonly) Class superclass;

+ (long long)batchSize;
+ (long long)cacheSize;
+ (id)entityName;
+ (id)fetchType;
+ (id)propertiesToFetch;
+ (id)propertiesToSortBy;
+ (bool)useNoIndexSelf;
+ (bool)useObjectFetchingContext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithObjectID:(id)arg1 knownKeysDictionary:(id)arg2 photoLibrary:(id)arg3;
- (id)knownKeysDictionary;
- (id)objectID;

@end

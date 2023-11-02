
@interface MapsSync.MapsSyncCollectionTransitItem : MapsSync.MapsSyncCollectionItem {
    void _muid;
    void _transitLineStorage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) bool requiresCollection;
@property (nonatomic, readonly) NSData *transitLineStorageData;

+ (id)fetchCollectionTransitItemForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)description;
- (id)initWithCollection:(id)arg1;
- (id)initWithObject:(id)arg1;
- (bool)isDuplicateOfOther:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (unsigned long long)muid;
- (Class)mutableObjectClass;
- (bool)requiresCollection;
- (void)setPropertiesWithObject:(id)arg1;
- (id)transitLineStorageData;

@end

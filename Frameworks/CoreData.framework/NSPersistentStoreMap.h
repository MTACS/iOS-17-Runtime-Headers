
@interface NSPersistentStoreMap : NSObject {
    NSString * _databaseUUID;
    NSDictionary * _mappings;
    unsigned long long  _nextPK64;
    NSMappedObjectStore * _store;
    NSDictionary * _storeMetadata;
}

+ (void)initialize;

- (void)addObject:(id)arg1 objectIDMap:(id)arg2;
- (id)configurationName;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)handleFetchRequest:(id)arg1;
- (id)initWithStore:(id)arg1;
- (unsigned long long)nextPK64;
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;

@end

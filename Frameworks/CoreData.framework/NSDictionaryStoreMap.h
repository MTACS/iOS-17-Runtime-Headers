
@interface NSDictionaryStoreMap : NSPersistentStoreMap {
    NSMutableDictionary * _theMap;
}

+ (void)initialize;

- (void)addObject:(id)arg1 objectIDMap:(id)arg2;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)handleFetchRequest:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)initWithStore:(id)arg1 fromArchivedData:(id)arg2;
- (id)initWithStore:(id)arg1 fromPath:(id)arg2;
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;

@end


@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator {
    NSMutableDictionary * _pregeneratedIdMappings;
}

- (void).cxx_destruct;
- (void)addIdMapping:(id)arg1 forProperty:(unsigned int)arg2;
- (id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2;
- (long long)nextPersistentIDForImportItem:(struct shared_ptr<ML3ImportItem> { struct ML3ImportItem {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)removePersistentIDFromIdMapping:(long long)arg1;

@end

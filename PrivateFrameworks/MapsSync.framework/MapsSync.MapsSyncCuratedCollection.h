
@interface MapsSync.MapsSyncCuratedCollection : MapsSync.MapsSyncBaseItem {
    void _curatedCollectionIdentifier;
    void _resultProviderIdentifier;
}

@property (nonatomic, readonly) unsigned long long curatedCollectionIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long identifierHash;
@property (nonatomic, readonly) int resultProviderIdentifier;

- (void)addEditWithBlock:(id /* block */)arg1;
- (unsigned long long)curatedCollectionIdentifier;
- (void)deleteWithCompletion:(id /* block */)arg1;
- (id)description;
- (long long)identifierHash;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (int)resultProviderIdentifier;
- (void)setPropertiesWithObject:(id)arg1;

@end


@interface MSHistoryCuratedCollection : MSHistoryItem {
    void _curatedCollectionIdentifier;
    void _resultProviderIdentifier;
}

@property (nonatomic) unsigned long long curatedCollectionIdentifier;
@property (nonatomic) int resultProviderIdentifier;

+ (Class)managedClass;

- (unsigned long long)curatedCollectionIdentifier;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 curatedCollectionIdentifier:(unsigned long long)arg2 resultProviderIdentifier:(int)arg3;
- (int)resultProviderIdentifier;
- (void)setCuratedCollectionIdentifier:(unsigned long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setResultProviderIdentifier:(int)arg1;

@end

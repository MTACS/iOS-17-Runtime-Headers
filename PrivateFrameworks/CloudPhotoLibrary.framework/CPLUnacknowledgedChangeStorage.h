
@interface CPLUnacknowledgedChangeStorage : CPLChangeStorage {
    CPLEngineStore * _store;
}

@property (nonatomic, readonly) CPLEngineStore *store;

- (void).cxx_destruct;
- (id)changeWithScopedIdentifier:(id)arg1;
- (id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)initWithStore:(id)arg1;
- (id)storageDescription;
- (id)store;

@end

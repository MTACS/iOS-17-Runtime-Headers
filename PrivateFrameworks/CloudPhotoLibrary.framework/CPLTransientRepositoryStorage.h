
@interface CPLTransientRepositoryStorage : CPLChangeStorage {
    CPLEngineTransientRepository * _transientRepository;
}

@property (nonatomic, readonly) CPLEngineTransientRepository *transientRepository;

- (void).cxx_destruct;
- (id)changeWithScopedIdentifier:(id)arg1;
- (id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)initWithTransientRepository:(id)arg1;
- (id)storageDescription;
- (id)transientRepository;

@end

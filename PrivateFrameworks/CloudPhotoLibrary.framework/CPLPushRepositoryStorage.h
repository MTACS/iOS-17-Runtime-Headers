
@interface CPLPushRepositoryStorage : CPLChangeStorage {
    CPLEnginePushRepository * _pushRepository;
    CPLEngineScopeStorage * _scopes;
    unsigned long long  _storageScopeType;
}

@property (nonatomic, readonly) CPLEnginePushRepository *pushRepository;

- (void).cxx_destruct;
- (id)changeWithScopedIdentifier:(id)arg1;
- (id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (bool)getRelatedScopedIdentifier:(id*)arg1 forRecordWithScopedIdentifier:(id)arg2;
- (bool)hasChangesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)initWithPushRepository:(id)arg1;
- (id)pushRepository;
- (id)scopedIdentifierAddingScopeIndexForScopedIdentifier:(id)arg1;
- (id)storageDescription;

@end

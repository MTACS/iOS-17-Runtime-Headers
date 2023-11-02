
@interface CPLEngineTransientRepositoryBatchStorage : NSObject <CPLBatchExtractionStrategyStorage> {
    CPLEngineScope * _scope;
    CPLRecordTargetMapping * _targetMapping;
    CPLEngineTransientRepository * _transientRepository;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLEngineScope *scope;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPLRecordTargetMapping *targetMapping;
@property (nonatomic, readonly) CPLEngineTransientRepository *transientRepository;

- (void).cxx_destruct;
- (id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3;
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(bool)arg3;
- (id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2;
- (id)allChangesWithScopeIdentifier:(id)arg1;
- (id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;
- (void)beginExtractingBatch;
- (id)changeWithScopedIdentifier:(id)arg1;
- (void)cleanupAfterExtractingBatch;
- (unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(id)arg1;
- (bool)hasChangesInScopeWithIdentifier:(id)arg1;
- (id)initWithTransientRepository:(id)arg1 scope:(id)arg2;
- (bool)isRecordWithScopedIdentifierStashed:(id)arg1;
- (bool)removeChange:(id)arg1 error:(id*)arg2;
- (id)scope;
- (bool)stashChange:(id)arg1 error:(id*)arg2;
- (id)targetMapping;
- (id)transientRepository;

@end


@interface _CPLOptimisticIDMapping : NSObject <CPLEngineIDMapping> {
    <CPLEngineIDMapping> * _idMapping;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CPLEngineIDMapping> *idMapping;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(bool)arg3 direction:(unsigned long long)arg4 error:(id*)arg5;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(bool*)arg2;
- (id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)arg1;
- (id)idMapping;
- (id)initWithIDMapping:(id)arg1;
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(bool*)arg2;
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg1;
- (id)setupCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(bool)arg3 direction:(unsigned long long)arg4 error:(id*)arg5;

@end

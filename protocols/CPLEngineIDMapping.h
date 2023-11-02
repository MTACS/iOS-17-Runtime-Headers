
@protocol CPLEngineIDMapping <NSObject>

@required

- (bool)addCloudScopedIdentifier:(CPLScopedIdentifier *)arg1 forLocalScopedIdentifier:(CPLScopedIdentifier *)arg2 isFinal:(bool)arg3 direction:(unsigned long long)arg4 error:(id*)arg5;
- (CPLScopedIdentifier *)cloudScopedIdentifierForLocalScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(bool*)arg2;
- (CPLScopedIdentifier *)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (CPLScopedIdentifier *)localScopedIdentifierForCloudScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(bool*)arg2;
- (CPLScopedIdentifier *)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(CPLScopedIdentifier *)arg1;
- (CPLScopedIdentifier *)setupCloudScopedIdentifier:(CPLScopedIdentifier *)arg1 forLocalScopedIdentifier:(CPLScopedIdentifier *)arg2 isFinal:(bool)arg3 direction:(unsigned long long)arg4 error:(id*)arg5;

@end

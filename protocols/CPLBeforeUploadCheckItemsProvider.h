
@protocol CPLBeforeUploadCheckItemsProvider <NSObject>

@required

- (CPLResourceTypeSet *)availableResourceTypesToUploadForChange:(CPLRecordChange *)arg1;
- (bool)isCloudRecordWithScopedIdentifierShared:(CPLScopedIdentifier *)arg1;
- (bool)isResourceDynamic:(CPLResource *)arg1;
- (CPLRecordChange *)knownCloudRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (bool)willNeedToAccessRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 error:(id*)arg2;
- (NSURL *)willUploadCloudResource:(CPLResource *)arg1 localResource:(CPLResource *)arg2 error:(id*)arg3;

@end

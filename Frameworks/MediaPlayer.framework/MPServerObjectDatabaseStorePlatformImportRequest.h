
@interface MPServerObjectDatabaseStorePlatformImportRequest : MPServerObjectDatabaseMetadataImportRequest

+ (id)_childKeyForParentType:(id)arg1 type:(id)arg2;
+ (id)_entityTypeForObject:(id)arg1;
+ (id)_unsupportedParentChildRelationships;
+ (id)_unsupportedStorePlatformKinds;

- (id)initWithPayload:(id)arg1;
- (id)performWithDatabaseOperations:(id)arg1 augmentingPayload:(id*)arg2 trustID:(id)arg3 playActivityFeatureName:(id)arg4;

@end

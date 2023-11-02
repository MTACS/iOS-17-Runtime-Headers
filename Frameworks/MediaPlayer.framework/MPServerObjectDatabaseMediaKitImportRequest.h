
@interface MPServerObjectDatabaseMediaKitImportRequest : MPServerObjectDatabaseMetadataImportRequest

+ (id)_childKeyForParentType:(id)arg1 type:(id)arg2;
+ (id)_entityTypeForObject:(id)arg1;
+ (id)_unsupportedMediaKitTypes;
+ (id)_unsupportedParentChildRelationships;

- (id)_sinfDataFromSinfType:(long long)arg1 payload:(id)arg2;
- (long long)_sinfTypeFromPayload:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)performWithDatabaseOperations:(id)arg1 augmentingPayload:(id*)arg2 trustID:(id)arg3 playActivityFeatureName:(id)arg4;

@end

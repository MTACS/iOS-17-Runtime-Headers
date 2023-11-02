
@interface HDAuthorizationEntity : HDHealthEntity

+ (id)allSourcesRequestingTypes:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)authorizationRecordsBySourceForType:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)authorizationRecordsByTypeForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)authorizationStatusesForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)modificationDateForSourceEntity:(id)arg1 type:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)readAuthorizationStatusesByTypeForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)resetAllAuthorizationStatusesWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)resetAuthorizationStatusesForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 authorizationModes:(id)arg3 sourceEntity:(id)arg4 options:(unsigned long long)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)setAuthorizationStatuses:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)uniquedColumns;

@end

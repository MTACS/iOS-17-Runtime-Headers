
@interface HDObjectAuthorizationEntity : HDHealthEntity <HDHealthEntitySchema>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)authorizationRecordsBySourceForSampleWithUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)authorizationRecordsForSamples:(id)arg1 sourceEntity:(id)arg2 sessionIdentifier:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)authorizationStatusForSamplesOfType:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)pruneWithProfile:(id)arg1 nowDate:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
+ (bool)resetAllObjectAuthorizationRecordsForProfile:(id)arg1 error:(id*)arg2;
+ (bool)resetAuthorizationForObjects:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)resetObjectAuthorizationRecordsForSource:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 syncIdentity:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)uniquedColumns;

@end

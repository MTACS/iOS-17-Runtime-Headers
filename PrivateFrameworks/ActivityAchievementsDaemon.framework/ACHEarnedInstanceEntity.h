
@interface ACHEarnedInstanceEntity : HDHealthEntity <HDNanoSyncEntity, HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)_countOfEarnedInstancesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)_earnedInstancesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 ascendingByEarnedDate:(bool)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)_earnedInstancesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)_insertEarnedInstance:(id)arg1 provenance:(long long)arg2 syncIdentity:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)_insertEarnedInstances:(id)arg1 provenance:(long long)arg2 useLegacySyncIdentity:(bool)arg3 profile:(id)arg4 databaseContext:(id)arg5 error:(id*)arg6;
+ (id)allEarnedInstancesWithProfile:(id)arg1 error:(id*)arg2;
+ (id)codableEarnedInstanceForEarnedInstanceInDatabase:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (unsigned long long)countOfEarnedInstancesForTemplateUniqueName:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (id)earnedInstancesForDateComponents:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)earnedInstancesForTemplateUniqueName:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5;
+ (id)insertEarnedInstances:(id)arg1 provenance:(long long)arg2 useLegacySyncIdentity:(bool)arg3 profile:(id)arg4 databaseContext:(id)arg5 error:(id*)arg6;
+ (id)journalEntryAppliedObserver;
+ (id)mostRecentEarnedInstanceForTemplateUniqueName:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (long long)receiveSyncObjects:(id)arg1 version:(struct { int x1; int x2; })arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)removeAllEarnedInstancesWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)removeEarnedInstances:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)removeEarnedInstancesForTemplateUniqueName:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (void)setJournalEntryAppliedObserver:(id)arg1;
+ (void)setSyncedEarnedInstancesObserver:(id)arg1;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (bool)supportsSyncStore:(id)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;
+ (id)syncedEarnedInstancesObserver;

@end

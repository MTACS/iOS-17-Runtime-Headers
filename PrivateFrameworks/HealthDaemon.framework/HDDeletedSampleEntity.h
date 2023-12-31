
@interface HDDeletedSampleEntity : HDDeletedObjectEntity

+ (Class)_entityClassForDeletion;
+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateDeletedSamplesWithTypes:(id)arg1 profile:(id)arg2 restrictedSourceEntities:(id)arg3 limit:(unsigned long long)arg4 anchor:(long long)arg5 error:(id*)arg6 handler:(id /* block */)arg7;
+ (bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long*)arg6 healthDatabase:(id)arg7 error:(id*)arg8 block:(id /* block */)arg9;
+ (bool)insertCodableDeletedSamples:(id)arg1 provenance:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)insertDeletedObject:(id)arg1 dataType:(id)arg2 provenanceIdentifier:(id)arg3 deletionDate:(id)arg4 persistStartAndEndDates:(bool)arg5 startTimestamp:(double)arg6 endTimestamp:(double)arg7 inDatabase:(id)arg8 error:(id*)arg9;
+ (bool)isConcreteEntity;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 session:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (long long)protectionClass;

@end

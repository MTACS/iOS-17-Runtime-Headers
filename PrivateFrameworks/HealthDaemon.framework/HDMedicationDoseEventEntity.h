
@interface HDMedicationDoseEventEntity : HDSampleEntity

+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)foreignKeys;
+ (id)indicesWithBehavior:(id)arg1;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)isConcreteEntity;
+ (long long)shouldInsertObject:(id)arg1 sourceID:(id)arg2 profile:(id)arg3 transaction:(id)arg4 objectToReplace:(id*)arg5 objectID:(id*)arg6 error:(id*)arg7;
+ (id)syntheticQuantityColumnName;

@end

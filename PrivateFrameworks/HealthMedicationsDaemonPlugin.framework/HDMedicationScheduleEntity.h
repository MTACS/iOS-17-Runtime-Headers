
@interface HDMedicationScheduleEntity : HDHealthEntity

+ (id)availableSchedulePredicate;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateSchedulesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 orderingTerms:(id)arg3 transaction:(id)arg4 error:(id*)arg5 enumerationHandler:(id /* block */)arg6;
+ (bool)insertMedicationSchedule:(id)arg1 syncProvenance:(long long)arg2 syncIdentity:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)privateSubEntities;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (bool)updateMedicationSchedulesToBeDeletedWithMedicationUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end


@interface HDMedicationScheduleIntervalDataEntity : HDHealthEntity

+ (id)_codableRepresentationForMedicationScheduleIntervalData:(id)arg1;
+ (id)_medicationScheduleIntervalDataEntityPropertiesForModel;
+ (id)_medicationScheduleIntervalDataFromRow:(struct HDSQLiteRow { }*)arg1;
+ (bool)addIntervalDataToCodable:(id)arg1 withScheduleID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateMedicationScheduleIntervalDataWithOwnerID:(long long)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (id)insertPersistableMedicationScheduleIntervalData:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;

@end

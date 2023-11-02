
@interface HDMedicalUserDomainConceptMappingEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (bool)insertUserDomainConceptID:(long long)arg1 medicalRecordID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)joinClausesForProperty:(id)arg1;
+ (bool)migrateMappingsFromUserDomainConceptID:(long long)arg1 toUserDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)unitTest_medicalRecordIDsForUserDomainConceptID:(unsigned long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)unitTest_userDomainConceptIDsForMedicalRecordID:(unsigned long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)updateMappingFromRecordWithPersistentID:(long long)arg1 withMapToUDCWithPersistentID:(long long)arg2 toMapToUDCWithPersistentID:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;

@end


@interface _HDMedicationOrderEntityEncoder : _HDMedicalRecordEntityEncoder

- (bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3 error:(id*)arg4;
- (id)createBareObjectWithRow:(struct HDSQLiteRow { }*)arg1;
- (id)orderedProperties;

@end

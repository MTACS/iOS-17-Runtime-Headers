
@interface HDWorkoutBuilderAssociatedSampleTemporaryTableEntity : HDHealthEntity

+ (id)disambiguatedDatabaseTable;
+ (bool)isTemporary;
+ (bool)withLocalTableName:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;

@end

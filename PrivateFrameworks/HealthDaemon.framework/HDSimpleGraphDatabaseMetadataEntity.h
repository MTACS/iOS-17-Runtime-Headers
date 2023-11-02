
@interface HDSimpleGraphDatabaseMetadataEntity : HDSQLiteEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateMetadataValuesWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (bool)metadataValueForKey:(id)arg1 valueOut:(id*)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)setMetadataValue:(id)arg1 forKey:(id)arg2 database:(id)arg3 error:(id*)arg4;

- (id)init;

@end

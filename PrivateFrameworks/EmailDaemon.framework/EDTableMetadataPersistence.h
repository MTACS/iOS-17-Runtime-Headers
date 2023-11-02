
@interface EDTableMetadataPersistence : NSObject <EDPersistenceDatabaseSchemaProvider>

+ (long long)largestDeletedRowIDForTableName:(id)arg1 withConnection:(id)arg2;
+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;
+ (bool)updateLargestDeletedRowID:(long long)arg1 forTableName:(id)arg2 withConnection:(id)arg3;

@end

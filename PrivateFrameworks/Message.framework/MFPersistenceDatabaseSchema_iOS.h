
@interface MFPersistenceDatabaseSchema_iOS : EDPersistenceDatabaseSchema <EDPersistenceDatabaseSchemaProvider>

+ (id)additionalSchemaProviders;
+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;

@end

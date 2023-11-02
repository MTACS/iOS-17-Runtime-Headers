
@interface HDSQLiteSchemaEntity : NSObject <HDSQLiteEntitySchema>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allDatabaseColumnNames;
+ (id)checkConstraints;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)createTableSQL;
+ (id)databaseName;
+ (id)databaseTable;
+ (id)deleteStatementWithProperty:(id)arg1 database:(id)arg2;
+ (id)disambiguatedDatabaseTable;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (Class)entityClassForEnumeration;
+ (Class)entityForProperty:(id)arg1;
+ (void)enumerateColumnsWithBlock:(id /* block */)arg1;
+ (id)foreignKeys;
+ (bool)hasColumnWithName:(id)arg1;
+ (bool)hasROWID;
+ (id)indices;
+ (id)insertSQLForProperties:(id)arg1 shouldReplace:(bool)arg2;
+ (bool)isTemporary;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)orderingTermForSortDescriptor:(id)arg1;
+ (id)primaryKeyColumns;
+ (id)privateSubEntities;
+ (id)tableAliases;
+ (id)triggers;
+ (id)uniquedColumns;
+ (id)updateSQLForProperties:(id)arg1 predicate:(id)arg2;

@end

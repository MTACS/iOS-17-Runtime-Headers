
@protocol HDSQLiteEntitySchema <NSObject>

@required

+ (NSArray *)allDatabaseColumnNames;
+ (NSSet *)checkConstraints;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (NSString *)createTableSQL;
+ (NSString *)databaseName;
+ (NSString *)databaseTable;
+ (NSString *)disambiguatedDatabaseTable;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (Class)entityClassForEnumeration;
+ (Class)entityForProperty:(NSString *)arg1;
+ (void)enumerateColumnsWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _HDSQLiteEntityColumn *, bool*, void*
+ (NSDictionary *)foreignKeys;
+ (bool)hasColumnWithName:(NSString *)arg1;
+ (bool)hasROWID;
+ (NSArray *)indices;
+ (bool)isTemporary;
+ (NSSet *)joinClausesForProperty:(NSString *)arg1;
+ (HDSQLiteOrderingTerm *)orderingTermForSortDescriptor:(NSSortDescriptor *)arg1;
+ (NSArray *)primaryKeyColumns;
+ (NSArray *)privateSubEntities;
+ (NSArray *)tableAliases;
+ (NSArray *)triggers;
+ (NSArray *)uniquedColumns;

@end

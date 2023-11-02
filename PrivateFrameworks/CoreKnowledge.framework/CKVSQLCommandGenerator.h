
@interface CKVSQLCommandGenerator : NSObject

+ (id)_generateCommaSeparatedPlaceholdersString:(unsigned long long)arg1;
+ (id)_generateCommaSeparatedValuesString:(id)arg1;
+ (id)_generateJoinClause:(id)arg1;
+ (id)_generateOrderByClause:(id)arg1;
+ (id)_produceCriterionClause:(id)arg1 tableName:(id)arg2;
+ (id)_produceJoinCriterionClause:(id)arg1;
+ (id)_produceSelectClauseWithTableName:(id)arg1 columnNames:(id)arg2 count:(bool)arg3;
+ (id)_produceSetValuesClauseForColumnNames:(id)arg1 columnValues:(id)arg2;
+ (void)addLimit:(id)arg1 offset:(id)arg2 forSelect:(id)arg3;
+ (id)deleteFromTableWithName:(id)arg1 criterion:(id)arg2 returningColumns:(id)arg3;
+ (id)insertCommandStringWithTableName:(id)arg1 columnNames:(id)arg2 returningColumns:(id)arg3;
+ (id)prefixColumnName:(id)arg1 withTableName:(id)arg2;
+ (void)replaceOffset:(id)arg1 forSelect:(id)arg2;
+ (id)selectFromTableWithName:(id)arg1 columns:(id)arg2 count:(bool)arg3 join:(id)arg4 criterion:(id)arg5 order:(id)arg6 limit:(id)arg7 offset:(id)arg8;
+ (id)updateWithTableName:(id)arg1 columnNames:(id)arg2 columnValues:(id)arg3 criterion:(id)arg4 returningColumns:(id)arg5;

- (id)init;

@end

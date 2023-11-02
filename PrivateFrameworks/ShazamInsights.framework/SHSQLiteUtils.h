
@interface SHSQLiteUtils : NSObject

+ (bool)closeDatabase:(struct sqlite3 { }*)arg1 error:(id*)arg2;
+ (void)commitTransactionOnDatabase:(struct sqlite3 { }*)arg1;
+ (bool)createDatabase:(struct sqlite3 {}**)arg1 atURL:(id)arg2 error:(id*)arg3;
+ (bool)database:(struct sqlite3 { }*)arg1 hasPopulatedTable:(id)arg2 error:(id*)arg3;
+ (bool)defenseAgainstBadDatabase:(struct sqlite3 { }*)arg1;
+ (bool)openDatabase:(struct sqlite3 {}**)arg1 atURL:(id)arg2 error:(id*)arg3;
+ (id)queryStringForCount:(unsigned long long)arg1;
+ (bool)runNoResultSQL:(id)arg1 onDatabase:(struct sqlite3 { }*)arg2 error:(id*)arg3;
+ (bool)runSQL:(id)arg1 onDatabase:(struct sqlite3 { }*)arg2 replacingTokens:(id)arg3 withObjects:(id)arg4 rowHandler:(id /* block */)arg5 error:(id*)arg6;
+ (void)startTransactionOnDatabase:(struct sqlite3 { }*)arg1;

@end

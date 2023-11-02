
@interface PPSSQLiteQuery : NSObject {
    PPSSQLiteDatabase * _database;
    PPSSQLiteQueryDescriptor * _descriptor;
}

@property (readonly) PPSSQLiteDatabase *database;
@property (readonly, copy) PPSSQLiteQueryDescriptor *descriptor;

+ (id)queryWithDatabase:(id)arg1 entity:(id)arg2 predicate:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 entity:(id)arg2 predicate:(id)arg3 groupByProperties:(id)arg4 orderByProperties:(id)arg5 orderByDirections:(id)arg6 limitCount:(unsigned long long)arg7 offsetCount:(unsigned long long)arg8;

- (void).cxx_destruct;
- (void)bindToSelectStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)columnNamesForProperties:(id)arg1;
- (id)database;
- (id)descriptor;
- (bool)enumerateProperties:(id)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;
- (id)selectSQLWithProperties:(id)arg1;

@end

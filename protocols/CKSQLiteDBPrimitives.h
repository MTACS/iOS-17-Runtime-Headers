
@protocol CKSQLiteDBPrimitives

@required

- (int)changes;
- (bool)deleteExactObject:(NSObject<CKPropertyCoding> *)arg1;
- (void)deleteFrom:(NSString *)arg1 matchingValues:(NSDictionary *)arg2;
- (void)deleteFrom:(NSString *)arg1 where:(NSString *)arg2 bindings:(NSArray *)arg3;
- (void)executeSQL:(NSString *)arg1;
- (void)executeSQL:(NSString *)arg1 arguments:(char *)arg2;
- (NSError *)handleError:(NSError *)arg1;
- (long long)insertOrReplaceInto:(NSString *)arg1 values:(NSDictionary *)arg2;
- (long long)insertOrReplaceObject:(NSObject<CKPropertyCoding> *)arg1;
- (long long)lastInsertRowID;
- (void)select:(void *)arg1 from:(void *)arg2 where:(void *)arg3 bindings:(void *)arg4 orderBy:(void *)arg5 limit:(void *)arg6 block:(void *)arg7; // needs 7 arg types, found 13: NSArray *, NSString *, NSString *, NSArray *, NSArray *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, bool*, void*
- (void)select:(void *)arg1 from:(void *)arg2 where:(void *)arg3 bindings:(void *)arg4 orderBy:(void *)arg5 limit:(void *)arg6 offset:(void *)arg7 block:(void *)arg8; // needs 8 arg types, found 14: NSArray *, NSString *, NSString *, NSArray *, NSArray *, NSNumber *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, bool*, void*
- (void)selectAllObjectsOfClass:(void *)arg1 where:(void *)arg2 bindings:(void *)arg3 orderBy:(void *)arg4 limit:(void *)arg5 block:(void *)arg6; // needs 6 arg types, found 12: Class, NSString *, NSArray *, NSArray *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, bool*, void*
- (void)selectFrom:(void *)arg1 where:(void *)arg2 bindings:(void *)arg3 orderBy:(void *)arg4 limit:(void *)arg5 block:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, NSArray *, NSArray *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, bool*, void*
- (id)selectObjectOfClass:(Class)arg1 where:(NSString *)arg2 bindings:(NSArray *)arg3;
- (void)update:(NSString *)arg1 set:(NSString *)arg2 where:(NSString *)arg3 bindings:(NSArray *)arg4 limit:(NSNumber *)arg5;
- (void)updateAllObjectsOfClass:(Class)arg1 set:(NSString *)arg2 where:(NSString *)arg3 bindings:(NSArray *)arg4;
- (long long)upsertInto:(NSString *)arg1 values:(NSDictionary *)arg2 onConflict:(NSArray *)arg3 doUpdate:(NSArray *)arg4 where:(NSString *)arg5;
- (void)usingStatementForSQL:(void *)arg1 performBlock:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKSQLiteStatement *, void*

@end

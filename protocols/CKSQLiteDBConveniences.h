
@protocol CKSQLiteDBConveniences

@required

- (NSArray *)allTableNames;
- (NSSet *)columnNamesForTable:(NSString *)arg1;
- (NSDate *)datePropertyForKey:(NSString *)arg1;
- (int)deleteAllObjectsOfClass:(Class)arg1 where:(NSString *)arg2 bindings:(NSArray *)arg3;
- (NSString *)propertyForKey:(NSString *)arg1;
- (void)removePropertyForKey:(NSString *)arg1;
- (NSArray *)select:(NSArray *)arg1 from:(NSString *)arg2;
- (NSArray *)select:(NSArray *)arg1 from:(NSString *)arg2 where:(NSString *)arg3 bindings:(NSArray *)arg4;
- (NSArray *)select:(NSArray *)arg1 from:(NSString *)arg2 where:(NSString *)arg3 bindings:(NSArray *)arg4 orderBy:(NSArray *)arg5;
- (NSArray *)select:(NSArray *)arg1 from:(NSString *)arg2 where:(NSString *)arg3 bindings:(NSArray *)arg4 orderBy:(NSArray *)arg5 limit:(NSNumber *)arg6;
- (NSArray *)selectAllFrom:(NSString *)arg1 where:(NSString *)arg2 bindings:(NSArray *)arg3;
- (NSArray *)selectAllObjectsOfClass:(Class)arg1;
- (NSArray *)selectAllObjectsOfClass:(Class)arg1 where:(NSString *)arg2 bindings:(NSArray *)arg3;
- (NSArray *)selectAllObjectsOfClass:(Class)arg1 where:(NSString *)arg2 bindings:(NSArray *)arg3 limit:(NSNumber *)arg4;
- (long long)selectCountFrom:(NSString *)arg1 where:(NSString *)arg2 bindings:(NSArray *)arg3;
- (void)setDateProperty:(NSDate *)arg1 forKey:(NSString *)arg2;
- (void)setProperty:(NSString *)arg1 forKey:(NSString *)arg2;

@end

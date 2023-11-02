
@interface EFSQLQueryGenerator : NSObject

+ (id)_createStatementForPredicate:(id)arg1 propertyMapper:(id)arg2 tablesUsed:(id)arg3;
+ (id)countStatementForPredicate:(id)arg1 propertyMapper:(id)arg2 distinctBy:(id)arg3;
+ (id)selectStatementForReturnObjectKeypaths:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(long long)arg4 propertyMapper:(id)arg5 protectedDataAvailable:(bool)arg6;
+ (id)selectStatementForReturnObjectKeypaths:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertyMapper:(id)arg4 protectedDataAvailable:(bool)arg5;

@end

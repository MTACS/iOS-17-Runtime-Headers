
@protocol NSSQLiteDatabaseTraceDelegate <NSObject>

@optional

- (void)managedObjectContext:(NSManagedObjectContext *)arg1 didExecuteFetchRequest:(NSFetchRequest *)arg2 withSQLString:(NSString *)arg3 bindVariables:(NSArray *)arg4 rowCount:(long long)arg5;
- (void)managedObjectContext:(NSManagedObjectContext *)arg1 willExecuteFetchRequest:(NSFetchRequest *)arg2;

@end


@protocol HDDatabaseConnectionPoolDelegate <NSObject>

@required

- (void)databasePool:(HDDatabaseConnectionPool *)arg1 didFlushConnections:(NSArray *)arg2;
- (id)newConnectionForPool:(HDDatabaseConnectionPool *)arg1 error:(id*)arg2;

@end


@protocol ML3DatabaseConnectionPoolDelegate <NSObject>

@optional

- (void)connectionPool:(ML3DatabaseConnectionPool *)arg1 createdNewConnection:(ML3DatabaseConnection *)arg2;

@end

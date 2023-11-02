
@protocol ACDDatabaseConnectionDelegate <NSObject>

@required

- (void)databaseConnection:(ACDDatabaseConnection *)arg1 encounteredUnrecoverableError:(NSError *)arg2;

@end


@protocol PLSearchIndexManagerDatabaseConnectionDelegate

@required

- (void)didCreateConnection:(struct sqlite3 { }*)arg1;
- (void)willTeardownConnection:(struct sqlite3 { }*)arg1;

@end

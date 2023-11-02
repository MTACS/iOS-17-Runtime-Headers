
@protocol EDPersistenceDatabaseConnectionPoolDelegate <NSObject>

@required

- (EDPersistenceDatabaseConnection *)openConnectionIsWriter:(bool)arg1;

@end

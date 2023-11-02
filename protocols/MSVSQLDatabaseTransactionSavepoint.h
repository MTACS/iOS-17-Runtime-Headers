
@protocol MSVSQLDatabaseTransactionSavepoint <NSObject>

@required

- (bool)commit;
- (NSString *)name;

@end

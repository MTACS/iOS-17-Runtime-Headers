
@interface _MSVSQLDatabaseTransactionSavepoint : NSObject <MSVSQLDatabaseTransactionSavepoint> {
    NSString * _name;
    MSVSQLDatabaseTransaction * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)commit;
- (void)dealloc;
- (id)description;
- (id)name;

@end

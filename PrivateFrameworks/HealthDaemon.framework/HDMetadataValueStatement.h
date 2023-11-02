
@interface HDMetadataValueStatement : HDSQLiteStatement {
    HDDatabaseTransaction * _transaction;
}

@property (nonatomic, readonly) HDDatabaseTransaction *transaction;

+ (id)metadataValueStatementWithTransaction:(id)arg1;

- (void).cxx_destruct;
- (bool)enumerateResultsForObjectID:(long long)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)transaction;

@end


@interface _BSSqliteDeferredPreparedSimpleStatement : _BSSqlitePreparedSimpleStatement {
    NSString * _deferredSql;
}

- (void).cxx_destruct;
- (bool)executeWithBindings:(id)arg1 resultRowHandler:(id /* block */)arg2 error:(out id*)arg3;

@end

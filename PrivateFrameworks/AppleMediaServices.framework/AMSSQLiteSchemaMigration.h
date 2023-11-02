
@interface AMSSQLiteSchemaMigration : NSObject {
    AMSSQLiteConnection * _connection;
    NSError * _error;
    bool  _success;
}

@property (readonly) NSError *error;
@property (readonly) bool success;

- (void).cxx_destruct;
- (void)_executeStatement:(id)arg1 canFailMigration:(bool)arg2 bindings:(id /* block */)arg3;
- (id)error;
- (void)executeOptionalStatement:(id)arg1;
- (void)executeOptionalStatement:(id)arg1 bindings:(id /* block */)arg2;
- (void)executeStatement:(id)arg1;
- (void)executeStatement:(id)arg1 bindings:(id /* block */)arg2;
- (id)initWithConnection:(id)arg1;
- (bool)success;

@end

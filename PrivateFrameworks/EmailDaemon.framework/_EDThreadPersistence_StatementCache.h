
@interface _EDThreadPersistence_StatementCache : NSObject {
    EDPersistenceDatabaseConnection * _connection;
    NSMutableDictionary * _preparedStatements;
}

@property (nonatomic, readonly) EDPersistenceDatabaseConnection *connection;
@property (nonatomic, readonly) NSMutableDictionary *preparedStatements;

- (void).cxx_destruct;
- (id)connection;
- (id)initWithConnection:(id)arg1;
- (id)preparedStatementForQueryString:(id)arg1;
- (id)preparedStatements;

@end

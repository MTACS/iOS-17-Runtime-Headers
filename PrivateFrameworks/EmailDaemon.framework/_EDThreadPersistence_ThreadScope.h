
@interface _EDThreadPersistence_ThreadScope : NSObject {
    bool  _didCreateTempScopeView;
    EDMessagePersistence * _messagePersistence;
    _EDThreadPersistence_SQLHelper * _sqlHelper;
    long long  _threadScopeDatabaseID;
    <EFSQLExpressable> * _threadScopeExpression;
}

@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) _EDThreadPersistence_SQLHelper *sqlHelper;
@property (nonatomic, readonly) long long threadScopeDatabaseID;
@property (nonatomic, readonly) <EFSQLExpressable> *threadScopeExpression;

- (void).cxx_destruct;
- (void)_ensureTempScopeView;
- (id)createMessagesWithThreadObjectID:(id)arg1 wrappedMessages:(id)arg2;
- (void)dropTemporaryView;
- (id)initWithCache:(id)arg1 messagePersistence:(id)arg2 threadScopeDatabaseID:(long long)arg3 threadScopeExpression:(id)arg4;
- (id)messagePersistence;
- (id)sqlHelper;
- (long long)threadScopeDatabaseID;
- (id)threadScopeExpression;

@end


@interface TransactionManager : CHSynchronizedLoggable {
    NSXPCConnection * _connection;
    NSXPCInterface * _interface;
    NSMutableArray * _queuedTransactions;
    id  _syncHelperReadyNotificationRef;
}

+ (id)instance;

- (void).cxx_destruct;
- (void)appendTransactions:(id)arg1;
- (void)appendTransactions_sync:(id)arg1;
- (void)createXpcConnection;
- (void)createXpcConnection_sync;
- (void)dealloc;
- (id)init;
- (void)setupConnectionHandlers_sync;

@end

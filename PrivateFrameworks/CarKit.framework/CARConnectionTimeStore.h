
@interface CARConnectionTimeStore : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)_CARConnectionServiceInterface;

- (void).cxx_destruct;
- (void)_setupConnection;
- (void)_xpcFetchWithServiceBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_xpcFetchWithSynchronousServiceBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)clearHistoricalConnectionsWithCompletion:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (void)fetchRecentSessions:(id /* block */)arg1;
- (id)init;
- (void)sendConnectionEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)syncSendConnectionEvent:(id)arg1 completion:(id /* block */)arg2;

@end

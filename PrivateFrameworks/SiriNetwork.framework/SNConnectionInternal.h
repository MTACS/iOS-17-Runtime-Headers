
@interface SNConnectionInternal : NSObject {
    void activeBackgroundConnection;
    void activeConnectionGroup;
    void activeRoute;
    void comatoseBackgroundConnections;
    void comatoseRoutes;
    void connectionConfiguration;
    void connectionMethodUsedHistory;
    void connectionQueue;
    void delegate;
    void isCanceled;
    void isCanceledInternal;
    void networkManager;
    void pendingBackgroundConnections;
    void pendingRoutes;
    void scheduledRoutes;
}

@property (nonatomic) <SNConnectionDelegateInternal> *delegate;

- (void).cxx_destruct;
- (void)cancelSynchronously:(bool)arg1 isOnConnectionQueue:(bool)arg2 with:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (void)getSNConnectionMetrics:(bool)arg1 with:(id /* block */)arg2;
- (id)init;
- (id)initWithConnectionInfo:(id)arg1 connectionQueue:(id)arg2;
- (id)initWithConnectionInfo:(id)arg1 connectionQueue:(id)arg2 networkManager:(id)arg3;
- (void)sendData:(id)arg1 with:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSendPings:(bool)arg1;
- (bool)startAndReturnError:(id*)arg1;

@end


@interface SessionCore.AssertionServiceServer : NSObject <BSServiceConnectionListenerDelegate> {
    void _lock_clients;
    void assertionManager;
    void listener;
    void lock;
    void requestProcessingQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end

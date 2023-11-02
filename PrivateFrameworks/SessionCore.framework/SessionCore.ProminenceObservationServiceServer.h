
@interface SessionCore.ProminenceObservationServiceServer : NSObject <BSServiceConnectionListenerDelegate> {
    void _lock_clients;
    void _lock_prominentActivityIdentifiers;
    void listener;
    void lock;
    void prominenceSubscription;
    void requestProcessingQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end


@interface SessionCore.PresentationObservationServiceServer : NSObject <BSServiceConnectionListenerDelegate> {
    void _lock_clients;
    void _lock_presentations;
    void listener;
    void lock;
    void presentationSubscription;
    void requestProcessingQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end

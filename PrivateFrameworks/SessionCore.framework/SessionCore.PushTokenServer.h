
@interface SessionCore.PushTokenServer : NSObject <BSServiceConnectionListenerDelegate> {
    void activityStore;
    void clients;
    void listener;
    void lock;
    void processManager;
    void pushServer;
    void requestProcessingQueue;
    void subscriptions;
}

- (void).cxx_destruct;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end

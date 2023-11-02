
@interface SessionCore.AuthorizationServer : NSObject <BSServiceConnectionListenerDelegate> {
    void authorizationManager;
    void clients;
    void listener;
    void lock;
    void requestProcessingQueue;
    void serverStartupToken;
}

- (void).cxx_destruct;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end


@interface SessionCore.InputServer : NSObject <BSServiceConnectionListenerDelegate> {
    void activityAuthorizer;
    void backoffPolicy;
    void clients;
    void delegate;
    void listener;
    void lock;
    void pushServer;
    void queue;
}

- (void).cxx_destruct;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end

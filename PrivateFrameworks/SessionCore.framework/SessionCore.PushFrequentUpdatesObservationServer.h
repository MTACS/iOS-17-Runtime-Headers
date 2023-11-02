
@interface SessionCore.PushFrequentUpdatesObservationServer : NSObject <ACActivityFrequentUpdatesObservationXPCServer, BSServiceConnectionListenerDelegate> {
    void authorizationManager;
    void clients;
    void listener;
    void lock;
    void pushServer;
    void requestProcessingQueue;
    void serverStartupToken;
}

- (void).cxx_destruct;
- (id)activitiesExceedingReducedPushBudget;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end


@interface SessionCore.StateCaptureServiceServer : NSObject <ACStateCaptureXPCServer, BSServiceConnectionListenerDelegate> {
    void listener;
    void requestProcessingQueue;
    void stateCaptureManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)stateForIdentifier:(id)arg1 error:(id*)arg2;

@end

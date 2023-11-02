
@interface CMProxPDPManagerInternal : NSObject {
    void * fLocationdConnection;
    id /* block */  fPDPHandler;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    bool  fStartedUpdates;
}

- (void)_startPDPUpdatesWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;

@end

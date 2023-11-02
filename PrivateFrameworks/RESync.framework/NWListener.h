
@interface NWListener : NSObject {
    void * layer;
    NSObject<OS_nw_listener> * listener;
    NSObject<OS_dispatch_queue> * listenerQueue;
    int  listenerState;
    NSObject<OS_dispatch_semaphore> * readySemaphore;
    NSObject<OS_dispatch_queue> * transportQueue;
}

- (void).cxx_destruct;
- (id)initWithLayer:(void*)arg1;
- (void)setListener:(id)arg1;
- (void)stopListening;
- (void)waitForReady;

@end

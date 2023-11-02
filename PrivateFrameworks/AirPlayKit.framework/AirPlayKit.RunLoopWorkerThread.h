
@interface AirPlayKit.RunLoopWorkerThread : NSThread {
    void lock;
    void pendingQueue;
    void runLoop;
    void source;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)main;

@end

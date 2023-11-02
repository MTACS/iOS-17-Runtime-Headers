
@interface VCDisplayLink : VCObject {
    CADisplayLink * _caDisplayLink;
    id /* block */  _handler;
    NSRunLoop * _runLoop;
    unsigned long long  _state;
    struct tagVCRealTimeThread { unsigned int x1; unsigned int x2; struct _opaque_pthread_mutex_t { long long x_3_1_1; BOOL x_3_1_2[56]; } x3; id x4; int (*x5)(); void *x6; struct OpaqueFigThread {} *x7; int x8; BOOL x9[60]; unsigned int x10; unsigned int x11; } * _thread;
    NSObject<OS_dispatch_semaphore> * _waitToRunSemaphore;
}

- (bool)activate;
- (void)deactivate;
- (void)dealloc;
- (void)displayLinkTick:(id)arg1;
- (bool)ensureDisplayIsReady;
- (void)handleWaitToRunTimeout;
- (id)initWithHandler:(id /* block */)arg1;
- (id)initWithHandler:(id /* block */)arg1 threadPriority:(unsigned int)arg2 threadOptions:(unsigned int)arg3 threadIdentifier:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)runDisplayLinkThreadWithStopRequested:(bool*)arg1;

@end

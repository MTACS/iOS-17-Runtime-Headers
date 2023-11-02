
@interface PVLivePlayerRenderLink : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastTime;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _lock;
    PVLivePlayer * _player;
    unsigned int  _throttledFPS;
}

- (void).cxx_destruct;
- (unsigned int)_throttledRenderLinkFPS_NoLock;
- (void)dealloc;
- (id)init;
- (void)rebuild;
- (void)registerWithPlayer:(id)arg1;
- (bool)setThrottledFPS:(unsigned int)arg1;
- (void)signalDroppedRenderLink;
- (void)signalPlayer:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)skipThrottledRenderLinkTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)teardown;
- (unsigned int)thermalPolicyThrottledFPS;
- (unsigned int)throttledFPS;

@end

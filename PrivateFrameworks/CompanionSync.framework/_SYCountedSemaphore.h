
@interface _SYCountedSemaphore : NSObject {
    _Atomic int  _count;
    _Atomic bool  _invalidated;
    _Atomic unsigned int  _sem_port;
    _Atomic int  _signals;
}

- (void)_ensureSemaphore;
- (void)_signalSemaphore;
- (bool)_waitSemaphoreWithTimeout:(double)arg1;
- (id)init;
- (id)initWithCount:(long long)arg1;
- (void)invalidate;
- (void)signal;
- (bool)waitWithTimeout:(double)arg1;

@end


@interface DVTQueueBasedTimer : NSObject {
    id /* block */  _block;
    double  _interval;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _mlock;
    NSObject<OS_dispatch_queue> * _queue;
    struct atomic<DVTQueueBasedTimerState> { 
        struct __cxx_atomic_impl<DVTQueueBasedTimerState, std::__cxx_atomic_base_impl<DVTQueueBasedTimerState>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _state;
    NSObject<OS_dispatch_source> * _timer;
}

@property (readonly) double interval;
@property (readonly) bool running;
@property (readonly) unsigned int state;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_runBlock;
- (id)initWithInterval:(double)arg1 block:(id /* block */)arg2;
- (id)initWithInterval:(double)arg1 qos:(unsigned int)arg2 block:(id /* block */)arg3;
- (double)interval;
- (void)pause;
- (void)resume;
- (bool)running;
- (void)start;
- (unsigned int)state;
- (void)stop;

@end


@interface ReachabilityCallbacker : NSObject {
    struct function<void ()>="__f_"{__value_func<void ()>="__buf_"{type="__lx"[24C] {}  _listener;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_reachabilityChanged:(id)arg1;
- (void)clearListener;
- (void)dealloc;
- (id)initWithListener:(struct function<void ()>={__value_func<void ()>={type=[24C] {})arg1 queue:(id)arg2;

@end

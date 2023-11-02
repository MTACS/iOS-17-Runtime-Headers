
@interface RBAnimationTimer : NSObject {
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _cond;
    unsigned int  _empty_ttl;
    int  _frame_rate;
    struct objc_ptr<CADisplayLink *> { 
        CADisplayLink *_p; 
    }  _link;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    int  _pending_frame_rate;
    struct objc_ptr<NSThread *> { 
        NSThread *_p; 
    }  _thread;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dispatchHandlers:(id)arg1;
- (id)init;
- (void)thread:(id)arg1;

@end

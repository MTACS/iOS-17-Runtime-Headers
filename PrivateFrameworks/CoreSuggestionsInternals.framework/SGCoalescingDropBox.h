
@interface SGCoalescingDropBox : NSObject {
    id  _box;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _boxLock;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _cond;
    id /* block */  _handler;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _handlerLock;
    id /* block */  _makeEmptyBox;
    const char * _name;
    int  _outstanding;
    bool  _pendingMerge;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
    NSObject<OS_os_transaction> * _transaction;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithName:(const char *)arg1 boxMaker:(id /* block */)arg2 handler:(id /* block */)arg3 qos:(unsigned int)arg4;
- (void)typeCheckingSink:(id)arg1;
- (void)updateBox:(id /* block */)arg1;
- (void)updateBox:(id /* block */)arg1 delay:(double)arg2;
- (void)wait;

@end

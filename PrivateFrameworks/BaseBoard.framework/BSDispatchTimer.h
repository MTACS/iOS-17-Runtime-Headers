
@interface BSDispatchTimer : NSObject {
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _lock_context;
    unsigned long long  _lock_fireCount;
    unsigned long long  _lock_fireTime;
    id /* block */  _lock_handler;
    bool  _lock_invalidated;
    long long  _lock_leewayNanoseconds;
    NSObject<OS_dispatch_queue> * _lock_queue;
    long long  _lock_repeatNanoseconds;
    unsigned int  _lock_scheduleToken;
    NSObject<OS_dispatch_source> * _lock_source;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

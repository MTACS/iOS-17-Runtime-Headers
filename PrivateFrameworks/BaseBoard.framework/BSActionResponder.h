
@interface BSActionResponder : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_handler;
    NSObject<OS_dispatch_queue> * _lock_queue;
    unsigned long long  _lock_timeout;
    _BSActionResponder * _lock_underlying;
}

+ (id)responderByWrappingResponder:(id)arg1 withHandler:(id /* block */)arg2;
+ (id)responderWithHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)annul;
- (void)dealloc;
- (id)init;
- (void)setQueue:(id)arg1;
- (void)setTimeout:(unsigned long long)arg1;

@end

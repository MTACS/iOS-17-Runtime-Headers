
@interface PPKVOObserver : NSObject {
    id /* block */  _handler;
    NSString * _key;
    NSString * _name;
    id  _observee;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)observerWithName:(id)arg1 object:(id)arg2 key:(id)arg3 handler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end

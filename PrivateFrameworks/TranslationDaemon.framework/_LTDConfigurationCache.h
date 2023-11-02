
@interface _LTDConfigurationCache : NSObject {
    NSMutableDictionary * _cache;
    NSMutableDictionary * _conditions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)_errorForType:(long long)arg1 reason:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)init;
- (void)objectForType:(long long)arg1 completion:(id /* block */)arg2;
- (id)objectForType:(long long)arg1 error:(id*)arg2;
- (void)removeAllObjects;
- (void)removeObjectForType:(long long)arg1;
- (void)setObject:(id)arg1 forType:(long long)arg2 ttl:(double)arg3 completion:(id /* block */)arg4;

@end

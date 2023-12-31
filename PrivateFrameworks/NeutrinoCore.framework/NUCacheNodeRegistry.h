
@interface NUCacheNodeRegistry : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _registry;
}

- (void).cxx_destruct;
- (Class)classForCacheNodeType:(id)arg1;
- (id)init;
- (void)registerClass:(Class)arg1 forCacheNodeType:(id)arg2;

@end

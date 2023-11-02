
@interface WFDiskCache : NSObject {
    NSURL * _cacheURL;
    NSMutableDictionary * _overridingClassMap;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSURL *cacheURL;
@property (nonatomic, retain) NSMutableDictionary *overridingClassMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)workflowCache;

- (void).cxx_destruct;
- (id)actuallyGetObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)actuallyRemoveObjectForKey:(id)arg1;
- (void)actuallySetObject:(id)arg1 forKey:(id)arg2;
- (id)cacheURL;
- (id)fileURLForKey:(id)arg1;
- (id)init;
- (id)initWithApplicationGroupIdentifier:(id)arg1 name:(id)arg2;
- (id)initWithCacheDirectory:(id)arg1 name:(id)arg2;
- (id)initWithCacheURL:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)objectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)objectOfClasses:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (id)objectOfClasses:(id)arg1 forKeyComponents:(id)arg2;
- (id)overridingClassMap;
- (id)queue;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)removeObjectForKeyComponents:(id)arg1;
- (void)setClass:(Class)arg1 forCachedClassName:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setObject:(id)arg1 forKeyComponents:(id)arg2;
- (void)setOverridingClassMap:(id)arg1;
- (void)setQueue:(id)arg1;

@end

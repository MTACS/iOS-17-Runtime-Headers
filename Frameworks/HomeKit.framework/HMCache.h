
@interface HMCache : HMFObject <HMCache> {
    NSString * _cacheName;
    NSMutableDictionary * _cachedItems;
    <HMCacheDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *cacheName;
@property (readonly, copy) NSDictionary *cachedObjects;
@property (readonly, copy) NSString *debugDescription;
@property <HMCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_setData:(id)arg1 forKey:(id)arg2;
- (id)cacheName;
- (id)cachedObjects;
- (id)dataForKey:(id)arg1;
- (id)delegate;
- (id)initWithCachedObjects:(id)arg1 name:(id)arg2;
- (id)name;
- (id)numberForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;

@end

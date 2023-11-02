
@interface IMWeakObjectCache : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _tableLock;
    NSMutableDictionary * _weakObjectCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)copyObjectForKey:(id)arg1;
- (id)copyOrSetObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeObject:(id)arg1 key:(id)arg2;

@end

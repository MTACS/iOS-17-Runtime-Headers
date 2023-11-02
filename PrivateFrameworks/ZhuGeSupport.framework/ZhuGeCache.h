
@interface ZhuGeCache : NSObject {
    NSMutableDictionary * _cacheDict;
    NSMutableArray * _cacheList;
    Class  _cacheType;
    NSNumber * _capacity;
    NSString * _name;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  aRecursiveMutex;
}

@property (readonly) NSMutableDictionary *cacheDict;
@property (readonly) NSMutableArray *cacheList;
@property (readonly) Class cacheType;
@property (readonly) NSNumber *capacity;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (id)cacheDict;
- (id)cacheList;
- (Class)cacheType;
- (id)capacity;
- (void)clearCache;
- (void)delCacheForKey:(id)arg1;
- (id)getCacheForKey:(id)arg1;
- (id)initWithName:(id)arg1 andCapacity:(id)arg2 andCacheType:(Class)arg3;
- (id)name;
- (bool)setCache:(id)arg1 forKey:(id)arg2 withError:(id*)arg3;

@end

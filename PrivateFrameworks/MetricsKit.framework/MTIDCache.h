
@interface MTIDCache : NSObject {
    NSMutableDictionary * _cache;
    NSMutableDictionary * _promiseCache;
}

@property (nonatomic, retain) NSMutableDictionary *cache;
@property (nonatomic, retain) NSMutableDictionary *promiseCache;

+ (bool)idInfo:(id)arg1 isValidForDate:(id)arg2;

- (void).cxx_destruct;
- (id)IDInfoForScheme:(id)arg1 options:(id)arg2;
- (void)addIDInfo:(id)arg1 reset:(bool)arg2;
- (void)addIdInfoPromise:(id)arg1 forScheme:(id)arg2 options:(id)arg3;
- (id)cache;
- (id)init;
- (id)optionsDescription:(id)arg1;
- (id)promiseCache;
- (id)promiseKeyForScheme:(id)arg1 options:(id)arg2;
- (void)removeAllNamespaces;
- (void)removeNamespace:(id)arg1;
- (void)removeNamespaces:(id)arg1;
- (void)removeUnsyncedNamespaces;
- (void)setCache:(id)arg1;
- (void)setPromiseCache:(id)arg1;

@end

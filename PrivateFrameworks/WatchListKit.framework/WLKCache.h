
@interface WLKCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _countLimit;
    NSMutableDictionary * _dictionary;
    NSMutableArray * _stack;
}

@property unsigned long long countLimit;

- (void).cxx_destruct;
- (void)_onQueueRemoveObjectForKey:(id)arg1;
- (unsigned long long)countLimit;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setCountLimit:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

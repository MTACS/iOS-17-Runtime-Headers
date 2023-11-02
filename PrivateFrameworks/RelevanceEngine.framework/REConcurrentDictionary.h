
@interface REConcurrentDictionary : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _table;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)init;
- (id)initStrongToStrongDictionary;
- (id)initWeakToStrongDictionary;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

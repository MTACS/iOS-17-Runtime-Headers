
@interface JFXThreadSafeDictionary : NSObject {
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    NSMutableDictionary * _dict;
}

@property (readonly) NSArray *allKeys;
@property (readonly) NSArray *allValues;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly) unsigned long long count;
@property (nonatomic, retain) NSMutableDictionary *dict;

- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeys;
- (id)allValues;
- (id)concurrentQueue;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)dict;
- (id)init;
- (id)objectForKey:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setConcurrentQueue:(id)arg1;
- (void)setDict:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end

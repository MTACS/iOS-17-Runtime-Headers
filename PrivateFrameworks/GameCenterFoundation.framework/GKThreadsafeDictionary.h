
@interface GKThreadsafeDictionary : NSObject {
    NSMutableDictionary * _dictionary;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *dictionary;

- (void).cxx_destruct;
- (id)allKeys;
- (id)allObjects;
- (id)description;
- (id)dictionary;
- (id)dictionaryCopy;
- (id)initWithName:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 objectProducerBlock:(id /* block */)arg2;
- (id)objectForKeyWillReplace:(id)arg1 objectProducerBlock:(id /* block */)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)readFromDictionary:(id /* block */)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)writeToDictionary:(id /* block */)arg1;

@end

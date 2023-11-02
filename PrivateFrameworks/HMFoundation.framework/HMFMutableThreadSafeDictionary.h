
@interface HMFMutableThreadSafeDictionary : NSObject <HMFMutableAssociativeCollection, NSCopying> {
    NSMutableDictionary * _dictionary;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSDictionary *rawDictionarySnapshot;

+ (id)threadSafeDictionary;

- (void).cxx_destruct;
- (id)allKeys;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)rawDictionarySnapshot;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

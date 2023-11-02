
@interface APOrderedMutableDictionary : NSObject {
    NSMutableDictionary * _dictionary;
    NSMutableOrderedSet * _mutableOrderedSet;
}

@property (nonatomic, readonly) NSArray *allKeys;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) id firstKey;
@property (nonatomic, readonly) id firstObject;
@property (nonatomic, readonly) id lastKey;
@property (nonatomic, readonly) id lastObject;

+ (id)dictionary;
+ (id)dictionaryWithCapacity:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)allKeys;
- (bool)containsKey:(id)arg1;
- (unsigned long long)count;
- (void)enumerateKeysUsingBlock:(id /* block */)arg1;
- (id)firstKey;
- (id)firstObject;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)lastKey;
- (id)lastObject;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

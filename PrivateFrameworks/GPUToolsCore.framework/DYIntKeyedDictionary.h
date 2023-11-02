
@interface DYIntKeyedDictionary : NSObject <NSSecureCoding> {
    void * _private;
}

+ (bool)supportsSecureCoding;

- (id)allKeys;
- (unsigned long long)count;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntKeyedDictionary:(id)arg1;
- (id)objectForIntKey:(long long)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForIntKey:(long long)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forIntKey:(long long)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

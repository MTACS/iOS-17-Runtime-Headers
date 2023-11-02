
@interface WFOrderedDictionary : NSDictionary {
    NSDictionary * _dictionary;
    NSOrderedSet * _keys;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSOrderedSet *keys;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allKeys;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)initWithQueryItems:(id)arg1;
- (id)keyEnumerator;
- (id)keys;
- (id)objectForKey:(id)arg1;

@end

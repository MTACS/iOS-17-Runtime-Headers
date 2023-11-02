
@interface MSVDefaultDictionary : NSMutableDictionary {
    id /* block */  _defaultValue;
    NSMutableDictionary * _storage;
}

@property (nonatomic, copy) id /* block */ defaultValue;

+ (id)dictionaryWithCapacity:(unsigned long long)arg1 defaultValue:(id /* block */)arg2;
+ (id)dictionaryWithDefaultValue:(id /* block */)arg1;
+ (id)dictionaryWithDictionary:(id)arg1 defaultValue:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id /* block */)defaultValue;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1 defaultValue:(id /* block */)arg2;
- (id)initWithDefaultValue:(id /* block */)arg1;
- (id)initWithDictionary:(id)arg1 defaultValue:(id /* block */)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setDefaultValue:(id /* block */)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end


@interface APJSONArchiver : NSCoder {
    id  _container;
}

+ (id)JSONObjectWithObject:(id)arg1;

- (void).cxx_destruct;
- (id)_JSONObjectWithObject:(id)arg1;
- (void)_addClassToContainer:(Class)arg1;
- (void)_addValueToContainer:(id)arg1 forKey:(id)arg2;
- (bool)_containerIsArray;
- (id)_valueForNumber:(id)arg1;
- (bool)allowsKeyedCoding;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithArray;
- (id)initWithDictionary;
- (id)object;

@end

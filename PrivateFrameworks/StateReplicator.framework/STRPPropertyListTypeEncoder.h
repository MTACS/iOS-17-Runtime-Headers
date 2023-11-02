
@interface STRPPropertyListTypeEncoder : NSCoder {
    NSMutableDictionary * _storage;
}

- (void).cxx_destruct;
- (id)_encodeRawObject:(id)arg1;
- (bool)allowsKeyedCoding;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)encodeRootObject:(id)arg1;
- (id)init;

@end

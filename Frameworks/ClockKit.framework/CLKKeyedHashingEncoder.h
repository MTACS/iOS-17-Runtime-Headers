
@interface CLKKeyedHashingEncoder : NSCoder {
    void keyValuePairs;
    void state;
}

@property (nonatomic, readonly) bool allowsKeyedCoding;
@property (nonatomic, readonly) NSData *encodedData;
@property (nonatomic, readonly) bool isFinished;
@property (nonatomic, readonly) bool requiresSecureCoding;

- (void).cxx_destruct;
- (bool)allowsKeyedCoding;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (id)encodedData;
- (void)finishEncoding;
- (id)init;
- (bool)isFinished;
- (bool)requiresSecureCoding;

@end

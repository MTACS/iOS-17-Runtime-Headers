
@interface BMDSLJSONCoder : NSCoder {
    bool  _allowKeyModifications;
    bool  _allowSecureCodingObjects;
    NSMutableDictionary * _currentDictionary;
    NSMutableArray * _stack;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSDictionary *userInfo;

+ (bool)hasNativeSupportForClass:(Class)arg1;

- (void).cxx_destruct;
- (bool)_jsonDecodeArray:(inout id*)arg1 forKey:(inout id*)arg2;
- (bool)_jsonDecodeDictionary:(id*)arg1 asClass:(Class)arg2;
- (bool)_jsonDecodeDictionary:(inout id*)arg1 forKey:(inout id*)arg2;
- (bool)_jsonDecodeObject:(id*)arg1 encodingDescriptor:(id)arg2;
- (bool)_jsonDecodeObject:(id*)arg1 forKey:(id*)arg2;
- (bool)_jsonEncodeArray:(id*)arg1 forKey:(id*)arg2;
- (bool)_jsonEncodeDictionary:(id*)arg1 forKey:(id*)arg2;
- (bool)_jsonEncodeObject:(id*)arg1 forKey:(id*)arg2;
- (bool)allowsKeyedCoding;
- (id)buildKeyFromClass:(Class)arg1 originalKey:(id)arg2;
- (id)buildKeyFromEncodingDescriptor:(id)arg1 originalKey:(id)arg2;
- (Class)classFromEncodingDescriptor:(id)arg1;
- (bool)decodeBoolForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeRootObjectFromData:(id)arg1;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (id)encodeDataFromRootObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)encodingCompatibleObjectFromRootObject:(id)arg1;
- (id)encodingDescriptorFromKey:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })encodingDescriptorRangeInKey:(id)arg1;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)keyWithoutEncodingDescriptor:(id)arg1;
- (id)pop;
- (void)push:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end

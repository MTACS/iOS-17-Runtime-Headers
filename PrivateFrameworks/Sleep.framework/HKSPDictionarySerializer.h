
@interface HKSPDictionarySerializer : NSCoder {
    NSError * _internalError;
    NSMutableSet * _mutableSerializedClasses;
    unsigned long long  _serializationOptions;
    NSDictionary * _serializedDictionary;
    NSMutableArray * _stack;
}

@property (nonatomic, readonly) NSError *internalError;
@property (nonatomic, readonly) NSMutableSet *mutableSerializedClasses;
@property (nonatomic, readonly) unsigned long long serializationOptions;
@property (nonatomic, readonly) NSSet *serializedClasses;
@property (nonatomic, readonly) NSDictionary *serializedDictionary;
@property (nonatomic, readonly) NSMutableArray *stack;

- (void).cxx_destruct;
- (id)_dictionaryForProtocolObject:(id)arg1;
- (void)_encodeObject:(id)arg1 forKey:(id)arg2;
- (void)_encodeProtocolObject:(id)arg1 forKey:(id)arg2;
- (bool)allowsKeyedCoding;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (unsigned long long)hksp_serializationOptions;
- (id)init;
- (id)initWithSerializationOptions:(unsigned long long)arg1;
- (id)internalError;
- (id)mutableSerializedClasses;
- (unsigned long long)serializationOptions;
- (bool)serialize:(id)arg1 error:(id*)arg2;
- (id)serializedClasses;
- (id)serializedDictionary;
- (id)stack;

@end

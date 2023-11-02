
@interface HKSPDictionaryDeserializer : NSCoder {
    NSSet * _allowedClasses;
    unsigned long long  _serializationOptions;
    NSDictionary * _serializedDictionary;
    NSMutableArray * _stack;
}

@property (nonatomic, readonly) NSSet *allowedClasses;
@property (nonatomic, readonly) unsigned long long serializationOptions;
@property (nonatomic, readonly) NSDictionary *serializedDictionary;
@property (nonatomic, readonly) NSMutableArray *stack;

- (void).cxx_destruct;
- (id)_decodeDeserializable:(id)arg1 error:(id*)arg2;
- (id)_decodeObject:(id)arg1 error:(id*)arg2;
- (id)allowedClasses;
- (bool)allowsKeyedCoding;
- (bool)decodeBoolForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)deserializeObjectOfClass:(Class)arg1 error:(id*)arg2;
- (unsigned long long)hksp_serializationOptions;
- (id)initWithAllowedClasses:(id)arg1 serializedDictionary:(id)arg2;
- (id)initWithAllowedClasses:(id)arg1 serializedDictionary:(id)arg2 serializationOptions:(unsigned long long)arg3;
- (unsigned long long)serializationOptions;
- (id)serializedDictionary;
- (id)stack;

@end

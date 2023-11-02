
@interface STRPPropertyListTypeDecoder : NSCoder {
    NSDictionary * _storage;
}

+ (id)_supportedCoreTypesForEncoding;

- (void).cxx_destruct;
- (id)_decodeObjectOfClasses:(id)arg1 fromObject:(id)arg2;
- (id)_errorWithCode:(long long)arg1 message:(id)arg2;
- (id)_failWithCode:(long long)arg1 message:(id)arg2;
- (id)_numberForKey:(id)arg1;
- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (id)decodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (id)decodeDictionaryWithKeysOfClass:(Class)arg1 objectsOfClass:(Class)arg2 forKey:(id)arg3;
- (id)decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeRootObjectOfClass:(Class)arg1 fromEncoded:(id)arg2 error:(id*)arg3;
- (id)decodeTopLevelObjectForKey:(id)arg1 error:(id*)arg2;
- (id)initWithDictionary:(id)arg1;

@end

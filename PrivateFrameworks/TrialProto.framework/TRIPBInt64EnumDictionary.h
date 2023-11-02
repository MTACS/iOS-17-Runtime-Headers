
@interface TRIPBInt64EnumDictionary : NSObject <NSCopying, TRIPBDictionaryInternalsProtocol> {
    TRIPBMessage * _autocreator;
    NSMutableDictionary * _dictionary;
    int (* _validationFunc;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) int (*validationFunc;

- (void)addRawEntriesFromDictionary:(id)arg1;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateForTextFormat:(id /* block */)arg1;
- (void)enumerateKeysAndEnumsUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndRawValuesUsingBlock:(id /* block */)arg1;
- (bool)getEnum:(int*)arg1 forKey:(long long)arg2;
- (bool)getRawValue:(int*)arg1 forKey:(long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithValidationFunction:(int (*)arg1;
- (id)initWithValidationFunction:(int (*)arg1 capacity:(unsigned long long)arg2;
- (id)initWithValidationFunction:(int (*)arg1 rawValues:(const int*)arg2 forKeys:(const long long*)arg3 count:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (void)removeAll;
- (void)removeEnumForKey:(long long)arg1;
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; id x10; int x11; }*)arg2 keyDataType:(unsigned char)arg3;
- (void)setEnum:(int)arg1 forKey:(long long)arg2;
- (void)setRawValue:(int)arg1 forKey:(long long)arg2;
- (void)setTRIPBGenericValue:(union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; id x10; int x11; }*)arg1 forTRIPBGenericValueKey:(union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; id x10; int x11; }*)arg2;
- (int (*)validationFunc;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;

@end

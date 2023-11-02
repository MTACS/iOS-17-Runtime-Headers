
@interface TRIPBInt64DoubleDictionary : NSObject <NSCopying, TRIPBDictionaryInternalsProtocol> {
    TRIPBMessage * _autocreator;
    NSMutableDictionary * _dictionary;
}

@property (nonatomic, readonly) unsigned long long count;

- (void)addEntriesFromDictionary:(id)arg1;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateForTextFormat:(id /* block */)arg1;
- (void)enumerateKeysAndDoublesUsingBlock:(id /* block */)arg1;
- (bool)getDouble:(double*)arg1 forKey:(long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDoubles:(const double*)arg1 forKeys:(const long long*)arg2 count:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (void)removeAll;
- (void)removeDoubleForKey:(long long)arg1;
- (void)setDouble:(double)arg1 forKey:(long long)arg2;
- (void)setTRIPBGenericValue:(union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; id x10; int x11; }*)arg1 forTRIPBGenericValueKey:(union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; id x10; int x11; }*)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;

@end

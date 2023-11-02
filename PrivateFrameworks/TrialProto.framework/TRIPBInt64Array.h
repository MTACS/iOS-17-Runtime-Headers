
@interface TRIPBInt64Array : NSObject <NSCopying> {
    TRIPBMessage * _autocreator;
    unsigned long long  _capacity;
    unsigned long long  _count;
    long long * _values;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)array;
+ (id)arrayWithCapacity:(unsigned long long)arg1;
+ (id)arrayWithValue:(long long)arg1;
+ (id)arrayWithValueArray:(id)arg1;

- (void)addValue:(long long)arg1;
- (void)addValues:(const long long*)arg1 count:(unsigned long long)arg2;
- (void)addValuesFromArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateValuesWithBlock:(id /* block */)arg1;
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithValueArray:(id)arg1;
- (id)initWithValues:(const long long*)arg1 count:(unsigned long long)arg2;
- (void)insertValue:(long long)arg1 atIndex:(unsigned long long)arg2;
- (void)internalResizeToCapacity:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeAll;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(long long)arg2;
- (long long)valueAtIndex:(unsigned long long)arg1;

@end

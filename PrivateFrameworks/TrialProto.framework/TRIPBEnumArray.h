
@interface TRIPBEnumArray : NSObject <NSCopying> {
    TRIPBMessage * _autocreator;
    unsigned long long  _capacity;
    unsigned long long  _count;
    int (* _validationFunc;
    int * _values;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) int (*validationFunc;

+ (id)array;
+ (id)arrayWithValidationFunction:(int (*)arg1;
+ (id)arrayWithValidationFunction:(int (*)arg1 capacity:(unsigned long long)arg2;
+ (id)arrayWithValidationFunction:(int (*)arg1 rawValue:(int)arg2;
+ (id)arrayWithValueArray:(id)arg1;

- (void)addRawValue:(int)arg1;
- (void)addRawValues:(const int*)arg1 count:(unsigned long long)arg2;
- (void)addRawValuesFromArray:(id)arg1;
- (void)addValue:(int)arg1;
- (void)addValues:(const int*)arg1 count:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateRawValuesWithBlock:(id /* block */)arg1;
- (void)enumerateRawValuesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateValuesWithBlock:(id /* block */)arg1;
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithValidationFunction:(int (*)arg1;
- (id)initWithValidationFunction:(int (*)arg1 capacity:(unsigned long long)arg2;
- (id)initWithValidationFunction:(int (*)arg1 rawValues:(const int*)arg2 count:(unsigned long long)arg3;
- (id)initWithValueArray:(id)arg1;
- (void)insertRawValue:(int)arg1 atIndex:(unsigned long long)arg2;
- (void)insertValue:(int)arg1 atIndex:(unsigned long long)arg2;
- (void)internalResizeToCapacity:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (int)rawValueAtIndex:(unsigned long long)arg1;
- (void)removeAll;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withRawValue:(int)arg2;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(int)arg2;
- (int (*)validationFunc;
- (int)valueAtIndex:(unsigned long long)arg1;

@end

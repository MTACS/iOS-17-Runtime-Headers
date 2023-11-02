
@interface REKeyMultiValueMap : NSObject {
    NSMapTable * _keyMap;
    NSMapTable * _valueMap;
}

@property (nonatomic, readonly) unsigned long long keyCount;
@property (nonatomic, readonly) unsigned long long valueCount;

- (void).cxx_destruct;
- (void)addKey:(id)arg1 withValues:(id)arg2;
- (void)enumerateValuesForKey:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithValuePointFunctionOptions:(unsigned long long)arg1;
- (void)insertValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)keyCount;
- (id)keyForValue:(id)arg1;
- (void)removeKey:(id)arg1;
- (void)removeValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)valueCount;
- (id)valuesForKey:(id)arg1;

@end

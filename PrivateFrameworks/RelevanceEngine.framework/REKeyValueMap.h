
@interface REKeyValueMap : NSObject {
    NSMapTable * _keyMap;
    NSMapTable * _valueMap;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addKey:(id)arg1 withValue:(id)arg2;
- (unsigned long long)count;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)keyForValue:(id)arg1;
- (void)removeKey:(id)arg1;
- (unsigned long long)valueCount;
- (id)valueForKey:(id)arg1;

@end

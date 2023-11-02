
@interface IMMutableBagKeySet : AMSMutableBagKeySet {
    NSMutableDictionary * _defaultValueMap;
    NSMutableDictionary * _valueTypeMap;
}

@property (nonatomic, retain) NSMutableDictionary *defaultValueMap;
@property (nonatomic, retain) NSMutableDictionary *valueTypeMap;

- (void).cxx_destruct;
- (void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)defaultValueMap;
- (id)init;
- (void)setDefaultValueMap:(id)arg1;
- (void)setValueTypeMap:(id)arg1;
- (id)valueTypeMap;

@end

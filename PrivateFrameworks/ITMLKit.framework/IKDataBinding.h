
@interface IKDataBinding : NSObject {
    NSSet * _dataBoundKeys;
    NSDictionary * _entriesByKey;
    NSDictionary * _keyValues;
    NSMutableSet * _unresolvedKeys;
}

@property (nonatomic, readonly) NSSet *dataBoundKeys;
@property (nonatomic, copy) NSDictionary *keyValues;
@property (nonatomic, readonly) NSSet *unresolvedKeys;

- (void).cxx_destruct;
- (id)dataBoundKeys;
- (id)dataBoundKeysWithAnyOfAttributes:(unsigned long long)arg1;
- (id)initWithEntries:(id)arg1;
- (id)keyValues;
- (id)keysWithAnyOfAttributes:(unsigned long long)arg1;
- (void)markResolvedForKey:(id)arg1;
- (void)setKeyValues:(id)arg1;
- (void)setNeedsResolutionForAllKeys;
- (void)setNeedsResolutionForKey:(id)arg1;
- (id)unresolvedKeys;
- (id)unresolvedKeysWithAnyOfAttributes:(unsigned long long)arg1;

@end

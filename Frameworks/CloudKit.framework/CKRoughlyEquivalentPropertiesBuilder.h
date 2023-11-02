
@interface CKRoughlyEquivalentPropertiesBuilder : NSObject {
    NSMutableDictionary * _dictionary;
}

@property (nonatomic, readonly) NSMutableDictionary *dictionary;
@property (nonatomic, readonly) CKRoughlyEquivalentProperties *properties;

- (void).cxx_destruct;
- (void)addComplexObject:(id)arg1 forKey:(id)arg2;
- (void)addPlistObject:(id)arg1 forKey:(id)arg2;
- (void)addPlistObjects:(id)arg1;
- (id)dictionary;
- (id)init;
- (id)properties;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

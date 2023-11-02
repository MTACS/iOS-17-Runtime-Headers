
@interface MAConcreteNode : MANode {
    unsigned short  _domain;
    NSString * _label;
    NSMutableDictionary * _properties;
    float  _weight;
}

- (void).cxx_destruct;
- (unsigned short)domain;
- (void)enumeratePropertiesUsingBlock:(id /* block */)arg1;
- (bool)hasProperties;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;
- (id)label;
- (unsigned long long)memoryFootprint:(id)arg1;
- (unsigned long long)propertiesCount;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (id)propertyKeys;
- (float)weight;

@end

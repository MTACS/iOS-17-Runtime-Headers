
@interface MAConcreteEdge : MAEdge {
    unsigned short  _domain;
    NSString * _label;
    NSMutableDictionary * _properties;
    float  _weight;
}

- (void).cxx_destruct;
- (unsigned short)domain;
- (void)enumeratePropertiesUsingBlock:(id /* block */)arg1;
- (bool)hasProperties;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)label;
- (unsigned long long)memoryFootprint:(id)arg1;
- (unsigned long long)propertiesCount;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (id)propertyKeys;
- (float)weight;

@end

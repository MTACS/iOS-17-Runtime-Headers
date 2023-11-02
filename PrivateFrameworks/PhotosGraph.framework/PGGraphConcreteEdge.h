
@interface PGGraphConcreteEdge : PGGraphEdge {
    unsigned short  _domain;
    NSString * _label;
    NSMutableDictionary * _properties;
}

- (void).cxx_destruct;
- (unsigned short)domain;
- (void)enumeratePropertiesUsingBlock:(id /* block */)arg1;
- (bool)hasProperties;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)label;
- (unsigned long long)propertiesCount;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (id)propertyKeys;

@end

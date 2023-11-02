
@interface PGGraphConcreteNode : PGGraphNode {
    unsigned short  _domain;
    NSString * _label;
    NSMutableDictionary * _properties;
}

- (void).cxx_destruct;
- (id)UUID;
- (id)_stringValueForPropertyWithKey:(id)arg1;
- (unsigned short)domain;
- (void)enumeratePropertiesUsingBlock:(id /* block */)arg1;
- (bool)hasProperties;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;
- (id)name;
- (unsigned long long)propertiesCount;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (id)propertyKeys;

@end

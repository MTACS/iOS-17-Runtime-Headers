
@interface POXSComplexTypeDefinition : POXSDefinition {
    NSMutableDictionary * _attributeAttributes;
    NSMutableArray * _attributes;
    NSString * _contentPropertyName;
    NSMutableDictionary * _elementAttributes;
    NSMutableArray * _elements;
    NSMutableArray * _namespaces;
    NSMutableDictionary * _properties;
}

@property (nonatomic, readonly, copy) NSArray *attributes;
@property (nonatomic, readonly, copy) NSString *contentPropertyName;
@property (nonatomic, readonly, copy) NSArray *elements;
@property (nonatomic, readonly, copy) NSArray *namespaces;

+ (id)_descriptionForValue:(id)arg1 prefix:(id)arg2;
+ (id)descriptionForValue:(id)arg1;

- (void).cxx_destruct;
- (id)_attributeForName:(id)arg1 ofAttributeWithName:(id)arg2;
- (id)_attributeForName:(id)arg1 ofElementWithName:(id)arg2;
- (id)_attributeForName:(id)arg1 ofNodeWithName:(id)arg2 attributes:(id)arg3;
- (void)_setAttribute:(id)arg1 forName:(id)arg2 ofAttributeWithName:(id)arg3;
- (void)_setAttribute:(id)arg1 forName:(id)arg2 ofElementWithName:(id)arg3;
- (void)_setAttribute:(id)arg1 forName:(id)arg2 ofNodeWithName:(id)arg3 attributes:(id)arg4;
- (void)addAttributeWithName:(id)arg1 type:(Class)arg2;
- (void)addAttributeWithName:(id)arg1 type:(Class)arg2 isSpecifiedKey:(id)arg3;
- (void)addAttributeWithName:(id)arg1 type:(Class)arg2 namespaceURI:(id)arg3;
- (void)addElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3;
- (void)addElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3 isSpecifiedKey:(id)arg4;
- (void)addElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3 maxOccurs:(unsigned long long)arg4 minOccurs:(unsigned long long)arg5;
- (void)addElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3 maxOccurs:(unsigned long long)arg4 minOccurs:(unsigned long long)arg5 flattenMultiValue:(bool)arg6;
- (void)addNamespaceWithURI:(id)arg1;
- (void)addUnboundedElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3;
- (id)attributes;
- (id)contentPropertyName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)elements;
- (bool)flattenMultiValueElementWithName:(id)arg1;
- (id)init;
- (id)isSpecifiedKeyForAttributeName:(id)arg1;
- (id)isSpecifiedKeyForElementName:(id)arg1;
- (unsigned long long)maxCountForElementName:(id)arg1;
- (unsigned long long)minCountForElementName:(id)arg1;
- (id)namespaceForAttributeName:(id)arg1;
- (id)namespaces;
- (id)propertyForName:(id)arg1;
- (void)setContentPropertyName:(id)arg1 type:(Class)arg2;
- (void)setIsSpecifiedKey:(id)arg1 onElementWithName:(id)arg2;
- (void)setProperty:(id)arg1 forName:(id)arg2;

@end


@interface POXSDefinition : NSObject <NSCopying> {
    NSMutableDictionary * _types;
}

@property (nonatomic, readonly, copy) NSArray *types;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)flattenMultiValueElementWithName:(id)arg1;
- (id)init;
- (id)isSpecifiedKeyForAttributeName:(id)arg1;
- (id)isSpecifiedKeyForElementName:(id)arg1;
- (unsigned long long)maxCountForElementName:(id)arg1;
- (id)namespaceForAttributeName:(id)arg1;
- (id)propertyForName:(id)arg1;
- (void)setType:(Class)arg1 forName:(id)arg2;
- (Class)typeForName:(id)arg1;
- (id)types;

@end

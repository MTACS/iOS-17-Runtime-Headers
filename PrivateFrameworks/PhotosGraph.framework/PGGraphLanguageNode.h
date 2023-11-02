
@interface PGGraphLanguageNode : PGGraphOptimizedNode {
    NSString * _localeIdentifier;
}

@property (nonatomic, readonly) NSString *localeIdentifier;

+ (id)filter;
+ (id)filterWithLocaleIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned short)domain;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)label;
- (id)localeIdentifier;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;

@end

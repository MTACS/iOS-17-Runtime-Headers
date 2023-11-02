
@interface PGGraphPublicEventLocalizedCategoryNode : PGGraphOptimizedNode {
    NSString * _label;
    unsigned int  _level;
}

@property (readonly) unsigned long long level;

- (void).cxx_destruct;
- (id)description;
- (unsigned short)domain;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLabel:(id)arg1 level:(unsigned long long)arg2;
- (id)label;
- (unsigned long long)level;
- (id)propertyDictionary;

@end

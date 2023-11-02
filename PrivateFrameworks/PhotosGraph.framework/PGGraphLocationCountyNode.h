
@interface PGGraphLocationCountyNode : PGGraphNamedLocationNode

@property (nonatomic, readonly) PGGraphLocationCountyNodeCollection *collection;

+ (id)addressOfCounty;
+ (id)filter;
+ (id)momentOfCounty;

- (id)collection;
- (Class)collectionClass;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;

@end


@interface PGGraphLocationDistrictNode : PGGraphNamedLocationNode

@property (nonatomic, readonly) PGGraphLocationDistrictNodeCollection *collection;

+ (id)filter;

- (id)collection;
- (unsigned long long)featureType;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;

@end

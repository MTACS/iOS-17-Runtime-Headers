
@interface PGGraphLocationStreetNode : PGGraphNamedLocationNode

@property (nonatomic, readonly) PGGraphLocationStreetNodeCollection *collection;

+ (id)filter;

- (id)collection;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;

@end

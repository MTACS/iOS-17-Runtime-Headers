
@interface PGGraphLocationStateNode : PGGraphNamedLocationNode

@property (nonatomic, readonly) PGGraphLocationStateNodeCollection *collection;

+ (id)addressOfState;
+ (id)countryOfState;
+ (id)filter;
+ (id)momentOfState;

- (id)collection;
- (Class)collectionClass;
- (unsigned long long)featureType;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;

@end

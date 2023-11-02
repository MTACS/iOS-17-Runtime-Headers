
@interface PGGraphLocationCityNode : PGGraphNamedLocationNode

@property (nonatomic, readonly) PGGraphLocationCityNodeCollection *collection;

+ (id)addressOfCity;
+ (id)countryOfCity;
+ (id)countyOfCity;
+ (id)filter;
+ (id)momentInCity;
+ (id)stateOfCity;

- (id)collection;
- (Class)collectionClass;
- (unsigned long long)featureType;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;
- (bool)supportsNameShortening;

@end

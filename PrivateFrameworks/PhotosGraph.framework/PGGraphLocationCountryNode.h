
@interface PGGraphLocationCountryNode : PGGraphNamedLocationNode

@property (nonatomic, readonly) PGGraphLocationCountryNodeCollection *collection;
@property (nonatomic, readonly) NSString *displayName;

+ (id)addressOfCountry;
+ (id)filter;
+ (id)languageOfCountry;
+ (id)momentInCountry;

- (id)collection;
- (Class)collectionClass;
- (id)displayName;
- (unsigned long long)featureType;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;

@end

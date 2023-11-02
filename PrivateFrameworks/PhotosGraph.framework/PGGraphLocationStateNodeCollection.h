
@interface PGGraphLocationStateNodeCollection : PGGraphNamedLocationNodeCollection

@property (nonatomic, readonly) PGGraphAddressNodeCollection *addressNodes;
@property (nonatomic, readonly) PGGraphLocationCountryNodeCollection *countryNodes;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;

+ (Class)nodeClass;

- (id)addressNodes;
- (id)countryNodes;
- (id)momentNodes;

@end

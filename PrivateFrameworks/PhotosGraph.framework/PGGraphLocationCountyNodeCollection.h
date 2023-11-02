
@interface PGGraphLocationCountyNodeCollection : PGGraphNamedLocationNodeCollection

@property (nonatomic, readonly) PGGraphAddressNodeCollection *addressNodes;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;

+ (Class)nodeClass;

- (id)addressNodes;
- (id)momentNodes;

@end

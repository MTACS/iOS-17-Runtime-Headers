
@interface PGGraphLocationCountryNodeCollection : PGGraphNamedLocationNodeCollection

@property (nonatomic, readonly) PGGraphAddressNodeCollection *addressNodes;
@property (nonatomic, readonly) PGGraphLanguageNodeCollection *languageNodes;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;

+ (Class)nodeClass;

- (id)addressNodes;
- (id)languageNodes;
- (id)momentNodes;

@end

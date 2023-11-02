
@interface PGGraphAreaNode : PGGraphOptimizedNode <PGAssetCollectionFeature, PGGraphLocationCoordinates, PGGraphLocationNaming, PGGraphLocationOrArea> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _centroidCoordinate;
    unsigned int  _isBlocked;
    NSString * _name;
    double  _popularityScore;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } centroidCoordinate;
@property (nonatomic, readonly) PGGraphAreaNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) NSString *fullname;
@property (readonly) unsigned long long hash;
@property (readonly) bool isBlocked;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) <PGGraphLocationOrAreaNodeCollection> *locationOrAreaNodeCollection;
@property (readonly) NSString *name;
@property (readonly) double popularityScore;
@property (readonly) PGGraphLocationNode *stateOrBiggerParentLocationNode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsNameShortening;

+ (id)addressOfArea;
+ (id)blockedFilter;
+ (id)filter;
+ (id)filterWithName:(id)arg1;
+ (id)filterWithNames:(id)arg1;
+ (id)nonBlockedFilter;
+ (id)propertiesWithIsBlocked:(bool)arg1;
+ (id)propertiesWithName:(id)arg1 isBlocked:(bool)arg2 popularityScore:(double)arg3;
+ (id)propertiesWithPopularityScore:(double)arg1;

- (void).cxx_destruct;
- (id)addressNodes;
- (struct CLLocationCoordinate2D { double x1; double x2; })centroidCoordinate;
- (id)collection;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (bool)diameterIsLargerThanDiameter:(double)arg1;
- (unsigned short)domain;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (id)fullname;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;
- (id)initWithName:(id)arg1 isBlocked:(bool)arg2 popularityScore:(double)arg3;
- (bool)isBlocked;
- (id)label;
- (id)locationOrAreaNodeCollection;
- (id)name;
- (double)popularityScore;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (void)setCentroidCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)shortenedNameWithLocationHelper:(id)arg1;
- (id)stateOrBiggerParentLocationNode;
- (bool)supportsNameShortening;

@end

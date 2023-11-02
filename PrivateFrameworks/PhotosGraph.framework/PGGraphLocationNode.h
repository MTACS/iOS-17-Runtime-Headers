
@interface PGGraphLocationNode : PGGraphOptimizedNode <PGAssetCollectionFeature, PGGraphLocationCoordinates, PGGraphLocationNaming, PGGraphLocationOrArea> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _centroidCoordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } centroidCoordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) NSString *fullname;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) PGGraphLocationNodeCollection *locationNodeCollection;
@property (nonatomic, readonly) <PGGraphLocationOrAreaNodeCollection> *locationOrAreaNodeCollection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsNameShortening;

+ (id)addressOfLocation;
+ (id)childLocationOfLocation;
+ (id)filter;
+ (id)parentLocationOfLocation;

- (id)associatedNodesForRemoval;
- (struct CLLocationCoordinate2D { double x1; double x2; })centroidCoordinate;
- (Class)collectionClass;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (id)fullname;
- (id)init;
- (id)keywordDescription;
- (id)label;
- (unsigned long long)locationMask;
- (id)locationNodeCollection;
- (id)locationOrAreaNodeCollection;
- (void)setCentroidCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (bool)supportsNameShortening;

@end

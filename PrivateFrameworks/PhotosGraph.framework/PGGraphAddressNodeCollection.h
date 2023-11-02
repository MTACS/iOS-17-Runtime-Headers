
@interface PGGraphAddressNodeCollection : PGGraphLocationNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (nonatomic, readonly) PGGraphAreaNodeCollection *areaNodes;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } centroidCoordinate;
@property (nonatomic, readonly) CLLocation *centroidLocation;
@property (nonatomic, readonly) PGGraphLocationCityNodeCollection *cityNodes;
@property (nonatomic, readonly) PGGraphLocationCountryNodeCollection *countryNodes;
@property (nonatomic, readonly) PGGraphLocationCountyNodeCollection *countyNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphLocationDistrictNodeCollection *districtNodes;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphHomeWorkNodeCollection *homeNodes;
@property (nonatomic, readonly) PGGraphHomeWorkNodeCollection *homeWorkNodes;
@property (nonatomic, readonly) PGGraphLanguageNodeCollection *languageNodes;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) PGGraphLocationNumberNodeCollection *numberNodes;
@property (nonatomic, readonly) PGGraphAddressNodeCollection *preciseSubset;
@property (nonatomic, readonly) PGGraphLocationStateNodeCollection *stateNodes;
@property (nonatomic, readonly) PGGraphLocationStreetNodeCollection *streetNodes;
@property (readonly) Class superclass;
@property (readonly) NSSet *uuids;
@property (nonatomic, readonly) PGGraphHomeWorkNodeCollection *workNodes;

+ (id)addressNodeAsCollectionForUUID:(id)arg1 inGraph:(id)arg2;
+ (id)addressNodesForUUIDs:(id)arg1 inGraph:(id)arg2;
+ (id)addressNodesWithinDistance:(double)arg1 ofLocations:(id)arg2 inGraph:(id)arg3;
+ (Class)nodeClass;

- (id)addressNodes;
- (id)areaNodes;
- (struct CLLocationCoordinate2D { double x1; double x2; })centroidCoordinate;
- (id)centroidLocation;
- (id)cityNodes;
- (id)countryNodes;
- (id)countyNodes;
- (id)districtNodes;
- (void)enumerateLatitudesUsingBlock:(id /* block */)arg1;
- (void)enumerateLongitudesUsingBlock:(id /* block */)arg1;
- (void)enumerateUniversalEndDatesUsingBlock:(id /* block */)arg1;
- (id)featureNodeCollection;
- (id)homeNodes;
- (id)homeWorkNodes;
- (id)languageNodes;
- (id)locations;
- (id)momentNodes;
- (id)numberNodes;
- (id)preciseSubset;
- (id)stateNodes;
- (id)streetNodes;
- (id)uuids;
- (id)workNodes;

@end

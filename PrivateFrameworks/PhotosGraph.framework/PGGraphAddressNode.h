
@interface PGGraphAddressNode : PGGraphLocationNode <MAUniquelyIdentifiableNode, PGGraphPortraitLocationNamedEntity> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    long long  _locationMode;
    NSString * _name;
    NSString * _uuid;
}

@property (nonatomic, readonly) PGGraphAddressNodeCollection *collection;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCoarse;
@property (nonatomic, readonly) bool isImproved;
@property (nonatomic, readonly) bool isOcean;
@property (nonatomic, readonly) bool isPrecise;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) long long locationMode;
@property (nonatomic, readonly) PPLocationNamedEntities *pg_locationNamedEntity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MANodeFilter *uniquelyIdentifyingFilter;
@property (readonly) NSString *uuid;

+ (id)areaOfAddress;
+ (id)cityOfAddress;
+ (id)countryOfAddress;
+ (id)countyOfAddress;
+ (id)districtOfAddress;
+ (id)filter;
+ (id)frequentLocationOfAddress;
+ (id)homeOfAddress;
+ (id)homeWorkOfAddress;
+ (id)impreciseFilter;
+ (id)languageOfAddress;
+ (id)momentOfAddress;
+ (id)numberOfAddress;
+ (id)preciseFilter;
+ (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 onAddressNodeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;
+ (id)stateOfAddress;
+ (id)streetOfAddress;
+ (id)workOfAddress;

- (void).cxx_destruct;
- (id)collection;
- (Class)collectionClass;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (unsigned short)domain;
- (void)enumerateAreaEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLocationMode:(long long)arg1 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 name:(id)arg3;
- (bool)isCoarse;
- (bool)isImproved;
- (bool)isOcean;
- (bool)isPersonHomeOrWorkAddress;
- (bool)isPrecise;
- (id)label;
- (id)location;
- (long long)locationMode;
- (id)pg_locationNamedEntity;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (id)uniquelyIdentifyingFilter;
- (id)uuid;

@end


@interface PGLocationTripTitleUtility : NSObject {
    bool  _allowLongAOI;
    bool  _filterMomentsAndCities;
    NSSet * _filteredLocationNodes;
    PGIncompleteLocationResolver * _incompleteLocationResolver;
    PGGraphLocationHelper * _locationHelper;
    NSSet * _momentNodes;
    NSString * _title;
    unsigned long long  _tripTitleLocationType;
    unsigned long long  _tripTitleType;
    NSSet * _usedLocationNodes;
    NSArray * _usedTitleComponents;
}

@property (nonatomic) bool allowLongAOI;
@property (nonatomic) bool filterMomentsAndCities;
@property (nonatomic, retain) NSSet *filteredLocationNodes;
@property (nonatomic, retain) PGIncompleteLocationResolver *incompleteLocationResolver;
@property (nonatomic, retain) NSSet *momentNodes;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) unsigned long long tripTitleLocationType;
@property (nonatomic, readonly) unsigned long long tripTitleType;
@property (nonatomic, retain) NSSet *usedLocationNodes;
@property (nonatomic, retain) NSArray *usedTitleComponents;

+ (void)_aoiTitleWithLocationNodes:(id)arg1 momentNodes:(id)arg2 allowLongAOI:(bool)arg3 graph:(id)arg4 locationHelper:(id)arg5 result:(id /* block */)arg6;
+ (void)_cityStateAndCountryNodesForLocationNodes:(id)arg1 result:(id /* block */)arg2;
+ (id)_filteredCityNodesByNameForCityNodes:(id)arg1;
+ (bool)visitedLocations:(id)arg1 onlyDuringMoments:(id)arg2 locationHelper:(id)arg3;

- (void).cxx_destruct;
- (id)_bestAddressNodeForCityNodes:(id)arg1 inMomentNodes:(id)arg2;
- (id)_cityNodesFromMomentNodes:(id)arg1;
- (void)_cityTitleWithCityNode:(id)arg1 countryNode:(id)arg2 visitedCountryOnlyOnce:(bool)arg3 momentNodes:(id)arg4 result:(id /* block */)arg5;
- (void)_generateLocationTitle;
- (void)_generateTitleForMomentNodes:(id)arg1 resolvedMomentNodes:(id)arg2 resolvedLocations:(id)arg3;
- (id)_locationTitleWithLocationNode:(id)arg1 addressNode:(id)arg2 countryNode:(id)arg3 allowSecondPart:(bool)arg4;
- (void)_resolveMomentNodes:(id)arg1 withResult:(id /* block */)arg2;
- (bool)allowLongAOI;
- (bool)filterMomentsAndCities;
- (id)filteredLocationNodes;
- (id)incompleteLocationResolver;
- (id)initWithMomentNodes:(id)arg1 filterMomentsAndCities:(bool)arg2 allowLongAOI:(bool)arg3 locationHelper:(id)arg4;
- (id)initWithMomentNodes:(id)arg1 filterMomentsAndCities:(bool)arg2 locationHelper:(id)arg3;
- (id)momentNodes;
- (void)setAllowLongAOI:(bool)arg1;
- (void)setFilterMomentsAndCities:(bool)arg1;
- (void)setFilteredLocationNodes:(id)arg1;
- (void)setIncompleteLocationResolver:(id)arg1;
- (void)setMomentNodes:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsedLocationNodes:(id)arg1;
- (void)setUsedTitleComponents:(id)arg1;
- (id)title;
- (unsigned long long)tripTitleLocationType;
- (unsigned long long)tripTitleType;
- (id)usedLocationNodes;
- (id)usedTitleComponents;

@end

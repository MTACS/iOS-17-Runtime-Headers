
@interface PGLocationTitleOptions : NSObject {
    bool  _allowFamilyHome;
    unsigned long long  _aoiDisplayType;
    NSSet * _curationAddressNodes;
    unsigned long long  _filterSignificantLocationsType;
    PGGraphAddressNode * _keyAssetAddressNode;
    unsigned long long  _lineBreakBehavior;
    NSSet * _momentNodes;
    unsigned long long  _peopleDisplayType;
    bool  _showAllCities;
    bool  _useBusinessItems;
    bool  _useCities;
    bool  _useDistrict;
    bool  _useTripTitleForLongDuration;
}

@property (nonatomic) bool allowFamilyHome;
@property (nonatomic) unsigned long long aoiDisplayType;
@property (nonatomic, retain) NSSet *curationAddressNodes;
@property (nonatomic) unsigned long long filterSignificantLocationsType;
@property (nonatomic, retain) PGGraphAddressNode *keyAssetAddressNode;
@property (nonatomic) unsigned long long lineBreakBehavior;
@property (nonatomic, retain) NSSet *momentNodes;
@property (nonatomic) unsigned long long peopleDisplayType;
@property (nonatomic) bool showAllCities;
@property (nonatomic) bool useBusinessItems;
@property (nonatomic) bool useCities;
@property (nonatomic) bool useDistrict;
@property (nonatomic) bool useTripTitleForLongDuration;

+ (id)onlyPeopleLocationTitleOptions;

- (void).cxx_destruct;
- (bool)allowFamilyHome;
- (unsigned long long)aoiDisplayType;
- (id)curationAddressNodes;
- (unsigned long long)filterSignificantLocationsType;
- (id)init;
- (id)keyAssetAddressNode;
- (unsigned long long)lineBreakBehavior;
- (id)momentNodes;
- (unsigned long long)peopleDisplayType;
- (void)setAllowFamilyHome:(bool)arg1;
- (void)setAoiDisplayType:(unsigned long long)arg1;
- (void)setCurationAddressNodes:(id)arg1;
- (void)setFilterSignificantLocationsType:(unsigned long long)arg1;
- (void)setKeyAssetAddressNode:(id)arg1;
- (void)setLineBreakBehavior:(unsigned long long)arg1;
- (void)setMomentNodes:(id)arg1;
- (void)setPeopleDisplayType:(unsigned long long)arg1;
- (void)setShowAllCities:(bool)arg1;
- (void)setUseBusinessItems:(bool)arg1;
- (void)setUseCities:(bool)arg1;
- (void)setUseDistrict:(bool)arg1;
- (void)setUseTripTitleForLongDuration:(bool)arg1;
- (bool)showAllCities;
- (bool)useBusinessItems;
- (bool)useCities;
- (bool)useDistrict;
- (bool)useTripTitleForLongDuration;

@end

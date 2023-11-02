
@interface CLSLitePlacemarkTestData : NSObject {
    NSString * _ISOcountryCode;
    NSString * _administrativeArea;
    NSString * _administrativeAreaCode;
    NSArray * _areasOfInterest;
    NSString * _inlandWater;
    bool  _isIsland;
    NSString * _locality;
    CLLocation * _location;
    NSString * _ocean;
    NSArray * _popularityScoresOrderedByAOI;
    CLCircularRegion * _region;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
    NSString * _subThoroughfare;
    NSString * _thoroughfare;
}

@property (nonatomic, retain) NSString *ISOcountryCode;
@property (nonatomic, retain) NSString *administrativeArea;
@property (nonatomic, retain) NSString *administrativeAreaCode;
@property (nonatomic, retain) NSArray *areasOfInterest;
@property (nonatomic, retain) NSString *inlandWater;
@property (nonatomic) bool isIsland;
@property (nonatomic, retain) NSString *locality;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) NSString *ocean;
@property (nonatomic, retain) NSArray *popularityScoresOrderedByAOI;
@property (nonatomic, retain) CLCircularRegion *region;
@property (nonatomic, retain) NSString *subAdministrativeArea;
@property (nonatomic, retain) NSString *subLocality;
@property (nonatomic, retain) NSString *subThoroughfare;
@property (nonatomic, retain) NSString *thoroughfare;

- (void).cxx_destruct;
- (id)ISOcountryCode;
- (id)administrativeArea;
- (id)administrativeAreaCode;
- (id)areasOfInterest;
- (id)inlandWater;
- (bool)isIsland;
- (id)locality;
- (id)location;
- (id)ocean;
- (id)popularityScoresOrderedByAOI;
- (id)region;
- (void)setAdministrativeArea:(id)arg1;
- (void)setAdministrativeAreaCode:(id)arg1;
- (void)setAreasOfInterest:(id)arg1;
- (void)setISOcountryCode:(id)arg1;
- (void)setInlandWater:(id)arg1;
- (void)setIsIsland:(bool)arg1;
- (void)setLocality:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setOcean:(id)arg1;
- (void)setPopularityScoresOrderedByAOI:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setSubAdministrativeArea:(id)arg1;
- (void)setSubLocality:(id)arg1;
- (void)setSubThoroughfare:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;

@end

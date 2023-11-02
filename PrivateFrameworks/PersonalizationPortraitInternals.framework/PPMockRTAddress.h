
@interface PPMockRTAddress : NSObject {
    NSString * _administrativeArea;
    NSString * _administrativeAreaCode;
    NSArray * _areasOfInterest;
    NSString * _country;
    NSString * _countryCode;
    NSString * _inlandWater;
    NSString * _locality;
    NSString * _ocean;
    NSString * _postalCode;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
    NSString * _subThoroughfare;
    NSString * _thoroughfare;
}

@property (nonatomic, retain) NSString *administrativeArea;
@property (nonatomic, retain) NSString *administrativeAreaCode;
@property (nonatomic, retain) NSArray *areasOfInterest;
@property (nonatomic, retain) NSString *country;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *inlandWater;
@property (nonatomic, retain) NSString *locality;
@property (nonatomic, retain) NSString *ocean;
@property (nonatomic, retain) NSString *postalCode;
@property (nonatomic, retain) NSString *subAdministrativeArea;
@property (nonatomic, retain) NSString *subLocality;
@property (nonatomic, retain) NSString *subThoroughfare;
@property (nonatomic, retain) NSString *thoroughfare;

- (void).cxx_destruct;
- (id)administrativeArea;
- (id)administrativeAreaCode;
- (id)areasOfInterest;
- (id)country;
- (id)countryCode;
- (id)inlandWater;
- (id)locality;
- (id)ocean;
- (id)postalCode;
- (void)setAdministrativeArea:(id)arg1;
- (void)setAdministrativeAreaCode:(id)arg1;
- (void)setAreasOfInterest:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setInlandWater:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setOcean:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setSubAdministrativeArea:(id)arg1;
- (void)setSubLocality:(id)arg1;
- (void)setSubThoroughfare:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;

@end

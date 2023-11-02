
@interface GDGraphLocationAddressRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allCity;
    NSArray * _allCountry;
    NSArray * _allInferredSemanticLabel;
    NSArray * _allIsoCountryCode;
    NSArray * _allPostalCode;
    NSArray * _allState;
    NSArray * _allStreet;
    NSArray * _allSubAdministrativeArea;
    NSArray * _allSubLocality;
    NSString * _city;
    NSString * _country;
    NSString * _inferredSemanticLabel;
    NSString * _isoCountryCode;
    NSString * _postalCode;
    NSString * _state;
    NSString * _street;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
}

@property (nonatomic, readonly, copy) NSArray *allCity;
@property (nonatomic, readonly, copy) NSArray *allCountry;
@property (nonatomic, readonly, copy) NSArray *allInferredSemanticLabel;
@property (nonatomic, readonly, copy) NSArray *allIsoCountryCode;
@property (nonatomic, readonly, copy) NSArray *allPostalCode;
@property (nonatomic, readonly, copy) NSArray *allState;
@property (nonatomic, readonly, copy) NSArray *allStreet;
@property (nonatomic, readonly, copy) NSArray *allSubAdministrativeArea;
@property (nonatomic, readonly, copy) NSArray *allSubLocality;
@property (nonatomic, readonly, copy) NSString *city;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *inferredSemanticLabel;
@property (nonatomic, readonly, copy) NSString *isoCountryCode;
@property (nonatomic, readonly, copy) NSString *postalCode;
@property (nonatomic, readonly, copy) NSString *state;
@property (nonatomic, readonly, copy) NSString *street;
@property (nonatomic, readonly, copy) NSString *subAdministrativeArea;
@property (nonatomic, readonly, copy) NSString *subLocality;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allCity;
- (id)allCountry;
- (id)allInferredSemanticLabel;
- (id)allIsoCountryCode;
- (id)allPostalCode;
- (id)allState;
- (id)allStreet;
- (id)allSubAdministrativeArea;
- (id)allSubLocality;
- (id)city;
- (id)country;
- (Class)graphObjectType;
- (id)inferredSemanticLabel;
- (id)initWithStreetField:(id)arg1 subLocalityField:(id)arg2 cityField:(id)arg3 subAdministrativeAreaField:(id)arg4 stateField:(id)arg5 postalCodeField:(id)arg6 countryField:(id)arg7 isoCountryCodeField:(id)arg8 inferredSemanticLabelField:(id)arg9 allStreetField:(id)arg10 allSubLocalityField:(id)arg11 allCityField:(id)arg12 allSubAdministrativeAreaField:(id)arg13 allStateField:(id)arg14 allPostalCodeField:(id)arg15 allCountryField:(id)arg16 allIsoCountryCodeField:(id)arg17 allInferredSemanticLabelField:(id)arg18;
- (id)isoCountryCode;
- (id)postalCode;
- (id)state;
- (id)street;
- (id)subAdministrativeArea;
- (id)subLocality;

@end

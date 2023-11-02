
@interface _SFPBAirport : PBCodable <NSSecureCoding, _SFPBAirport> {
    NSString * _city;
    NSString * _code;
    NSString * _country;
    NSString * _countryCode;
    NSString * _district;
    _SFPBLatLng * _location;
    NSString * _name;
    NSString * _postalCode;
    NSString * _state;
    NSString * _street;
    _SFPBTimeZone * _timezone;
}

@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *district;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBLatLng *location;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *street;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBTimeZone *timezone;

- (void).cxx_destruct;
- (id)city;
- (id)code;
- (id)country;
- (id)countryCode;
- (id)dictionaryRepresentation;
- (id)district;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)location;
- (id)name;
- (id)postalCode;
- (bool)readFrom:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setCode:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDistrict:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStreet:(id)arg1;
- (void)setTimezone:(id)arg1;
- (id)state;
- (id)street;
- (id)timezone;
- (void)writeTo:(id)arg1;

@end

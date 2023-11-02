
@interface PPPBLabeledPostalAddress : PBCodable <NSCopying> {
    NSString * _city;
    NSString * _country;
    NSString * _isoCountryCode;
    NSString * _label;
    NSString * _postalCode;
    NSString * _state;
    NSString * _street;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
}

@property (nonatomic, retain) NSString *city;
@property (nonatomic, retain) NSString *country;
@property (nonatomic, readonly) bool hasCity;
@property (nonatomic, readonly) bool hasCountry;
@property (nonatomic, readonly) bool hasIsoCountryCode;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, readonly) bool hasPostalCode;
@property (nonatomic, readonly) bool hasState;
@property (nonatomic, readonly) bool hasStreet;
@property (nonatomic, readonly) bool hasSubAdministrativeArea;
@property (nonatomic, readonly) bool hasSubLocality;
@property (nonatomic, retain) NSString *isoCountryCode;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *postalCode;
@property (nonatomic, retain) NSString *state;
@property (nonatomic, retain) NSString *street;
@property (nonatomic, retain) NSString *subAdministrativeArea;
@property (nonatomic, retain) NSString *subLocality;

- (void).cxx_destruct;
- (id)city;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCity;
- (bool)hasCountry;
- (bool)hasIsoCountryCode;
- (bool)hasLabel;
- (bool)hasPostalCode;
- (bool)hasState;
- (bool)hasStreet;
- (bool)hasSubAdministrativeArea;
- (bool)hasSubLocality;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)isoCountryCode;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (id)postalCode;
- (bool)readFrom:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStreet:(id)arg1;
- (void)setSubAdministrativeArea:(id)arg1;
- (void)setSubLocality:(id)arg1;
- (id)state;
- (id)street;
- (id)subAdministrativeArea;
- (id)subLocality;
- (void)writeTo:(id)arg1;

@end

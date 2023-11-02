
@interface RTAddress : NSObject <NSCopying, NSSecureCoding> {
    NSString * _administrativeArea;
    NSString * _administrativeAreaCode;
    NSArray * _areasOfInterest;
    NSString * _country;
    NSString * _countryCode;
    NSDate * _creationDate;
    NSDate * _expirationDate;
    NSUUID * _identifier;
    NSString * _inlandWater;
    bool  _isIsland;
    NSString * _iso3166CountryCode;
    NSString * _iso3166SubdivisionCode;
    NSString * _locality;
    NSString * _ocean;
    NSString * _postalCode;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
    NSArray * _subPremises;
    NSString * _subThoroughfare;
    NSString * _thoroughfare;
}

@property (nonatomic, readonly, copy) NSString *administrativeArea;
@property (nonatomic, readonly, copy) NSString *administrativeAreaCode;
@property (nonatomic, readonly) NSArray *areasOfInterest;
@property (nonatomic, readonly, copy) NSString *country;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSString *inlandWater;
@property (nonatomic, readonly) bool isIsland;
@property (nonatomic, readonly, copy) NSString *iso3166CountryCode;
@property (nonatomic, readonly, copy) NSString *iso3166SubdivisionCode;
@property (nonatomic, readonly, copy) NSString *locality;
@property (nonatomic, readonly) NSString *mergedThoroughfare;
@property (nonatomic, readonly, copy) NSString *ocean;
@property (nonatomic, readonly, copy) NSString *postalCode;
@property (nonatomic, readonly, copy) NSString *subAdministrativeArea;
@property (nonatomic, readonly, copy) NSString *subLocality;
@property (nonatomic, readonly) NSArray *subPremises;
@property (nonatomic, readonly, copy) NSString *subThoroughfare;
@property (nonatomic, readonly, copy) NSString *thoroughfare;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)administrativeArea;
- (id)administrativeAreaCode;
- (id)areasOfInterest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)countryCode;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 subPremises:(id)arg2 subThoroughfare:(id)arg3 thoroughfare:(id)arg4 subLocality:(id)arg5 locality:(id)arg6 subAdministrativeArea:(id)arg7 administrativeArea:(id)arg8 administrativeAreaCode:(id)arg9 postalCode:(id)arg10 country:(id)arg11 countryCode:(id)arg12 inlandWater:(id)arg13 ocean:(id)arg14 areasOfInterest:(id)arg15 isIsland:(bool)arg16 creationDate:(id)arg17 expirationDate:(id)arg18 iso3166CountryCode:(id)arg19 iso3166SubdivisionCode:(id)arg20;
- (id)inlandWater;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAddress:(id)arg1;
- (bool)isIsland;
- (id)iso3166CountryCode;
- (id)iso3166SubdivisionCode;
- (id)locality;
- (id)mergedThoroughfare;
- (id)ocean;
- (id)postalCode;
- (void)setCreationDate:(id)arg1;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subPremises;
- (id)subThoroughfare;
- (id)thoroughfare;

// Image: /System/Library/PrivateFrameworks/KoaMapper.framework/KoaMapper

- (id)siriVocabularySpatialNames;

@end

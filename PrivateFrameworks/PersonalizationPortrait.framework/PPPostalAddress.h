
@interface PPPostalAddress : NSObject <NSCopying, NSSecureCoding> {
    NSString * _administrativeArea;
    NSString * _country;
    NSString * _locality;
    NSString * _postalCode;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
    NSString * _subThoroughfare;
    NSString * _thoroughfare;
}

@property (nonatomic, readonly) NSString *administrativeArea;
@property (nonatomic, readonly) NSString *country;
@property (nonatomic, readonly) NSString *locality;
@property (nonatomic, readonly) NSString *postalCode;
@property (nonatomic, readonly) NSString *subAdministrativeArea;
@property (nonatomic, readonly) NSString *subLocality;
@property (nonatomic, readonly) NSString *subThoroughfare;
@property (nonatomic, readonly) NSString *thoroughfare;

+ (id)normalizeAddressString:(id)arg1;
+ (id)postalAddressWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 subAdministrativeArea:(id)arg6 postalCode:(id)arg7 country:(id)arg8;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_countryStringWithCountry:(id)arg1 isoCode:(id)arg2;
- (id)administrativeArea;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactsPostalAddress:(id)arg1;
- (id)initWithFoundInAppsPostalAddress:(id)arg1;
- (id)initWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 subAdministrativeArea:(id)arg6 postalCode:(id)arg7 country:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPostalAddress:(id)arg1;
- (id)locality;
- (id)postalCode;
- (id)singleLineNormalizedAddressString;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)toCNPostalAddress;

@end

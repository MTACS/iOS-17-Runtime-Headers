
@interface APLocationInfo : NSObject <NSSecureCoding> {
    NSString * _administrativeArea;
    NSString * _isoCountryCode;
    NSString * _locality;
    NSString * _postalCode;
    NSString * _subAdministrativeArea;
}

@property (retain) NSString *administrativeArea;
@property (retain) NSString *isoCountryCode;
@property (retain) NSString *locality;
@property (retain) NSString *postalCode;
@property (retain) NSString *subAdministrativeArea;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)administrativeArea;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (id)isoCountryCode;
- (id)jsonRepresentationWithOptions:(unsigned long long)arg1;
- (id)locality;
- (id)postalCode;
- (void)setAdministrativeArea:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setSubAdministrativeArea:(id)arg1;
- (id)subAdministrativeArea;

@end

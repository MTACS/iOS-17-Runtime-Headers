
@interface _NBPhoneNumber : NSObject <NSCoding, NSCopying> {
    NSNumber * _countryCode;
    NSNumber * _countryCodeSource;
    NSString * _extension;
    bool  _italianLeadingZero;
    NSNumber * _nationalNumber;
    NSNumber * _numberOfLeadingZeros;
    NSString * _preferredDomesticCarrierCode;
    NSString * _rawInput;
}

@property (nonatomic, retain) NSNumber *countryCode;
@property (nonatomic, retain) NSNumber *countryCodeSource;
@property (nonatomic, retain) NSString *extension;
@property (nonatomic) bool italianLeadingZero;
@property (nonatomic, retain) NSNumber *nationalNumber;
@property (nonatomic, retain) NSNumber *numberOfLeadingZeros;
@property (nonatomic, retain) NSString *preferredDomesticCarrierCode;
@property (nonatomic, retain) NSString *rawInput;

- (void).cxx_destruct;
- (void)clearCountryCodeSource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)countryCodeSource;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extension;
- (long long)getCountryCodeSourceOrDefault;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)italianLeadingZero;
- (id)nationalNumber;
- (id)numberOfLeadingZeros;
- (id)preferredDomesticCarrierCode;
- (id)rawInput;
- (void)setCountryCode:(id)arg1;
- (void)setCountryCodeSource:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setItalianLeadingZero:(bool)arg1;
- (void)setNationalNumber:(id)arg1;
- (void)setNumberOfLeadingZeros:(id)arg1;
- (void)setPreferredDomesticCarrierCode:(id)arg1;
- (void)setRawInput:(id)arg1;

@end

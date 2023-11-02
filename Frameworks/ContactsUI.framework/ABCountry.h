
@interface ABCountry : NSObject {
    NSString * _countryCode;
    NSString * _countryName;
    NSString * _phoneticCountryName;
}

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *countryName;
@property (nonatomic, copy) NSString *phoneticCountryName;

- (void).cxx_destruct;
- (id)countryCode;
- (id)countryName;
- (id)phoneticCountryName;
- (void)setCountryCode:(id)arg1;
- (void)setCountryName:(id)arg1;
- (void)setPhoneticCountryName:(id)arg1;

@end

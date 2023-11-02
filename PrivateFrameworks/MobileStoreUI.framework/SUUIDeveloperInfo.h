
@interface SUUIDeveloperInfo : NSObject <NSCopying> {
    NSArray * _addressLines;
    NSString * _administrativeArea;
    NSString * _businessRegistrationIdentifier;
    NSString * _country;
    NSString * _ecommerceRegistrationIdentifier;
    NSString * _emailAddress;
    NSString * _isoCountryCode;
    NSString * _locality;
    NSString * _phoneNumber;
    NSString * _postalCode;
    NSString * _tradeName;
    NSString * _tradeRepresentativeName;
}

@property (nonatomic, copy) NSString *ECommerceRegistrationIdentifier;
@property (nonatomic, copy) NSString *ISOCountryCode;
@property (nonatomic, copy) NSArray *addressLines;
@property (nonatomic, copy) NSString *administrativeArea;
@property (nonatomic, copy) NSString *businessRegistrationIdentifier;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *locality;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *tradeName;
@property (nonatomic, copy) NSString *tradeRepresentativeName;

- (void).cxx_destruct;
- (id)ECommerceRegistrationIdentifier;
- (id)ISOCountryCode;
- (id)addressLines;
- (id)administrativeArea;
- (id)businessRegistrationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)emailAddress;
- (id)formattedAddressString;
- (id)initWithDeveloperDictionary:(id)arg1;
- (id)locality;
- (id)phoneNumber;
- (id)postalCode;
- (void)setAddressLines:(id)arg1;
- (void)setAdministrativeArea:(id)arg1;
- (void)setBusinessRegistrationIdentifier:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setECommerceRegistrationIdentifier:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setISOCountryCode:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setTradeName:(id)arg1;
- (void)setTradeRepresentativeName:(id)arg1;
- (id)tradeName;
- (id)tradeRepresentativeName;

@end

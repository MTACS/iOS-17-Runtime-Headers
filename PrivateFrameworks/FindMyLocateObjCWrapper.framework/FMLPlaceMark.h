
@interface FMLPlaceMark : NSObject {
    NSString * _administrativeArea;
    NSString * _country;
    NSArray * _formattedAddressLines;
    NSString * _locality;
    NSString * _stateCode;
    NSString * _streetAddress;
    NSString * _streetName;
}

@property (nonatomic, copy) NSString *administrativeArea;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSArray *formattedAddressLines;
@property (nonatomic, copy) NSString *locality;
@property (nonatomic, copy) NSString *stateCode;
@property (nonatomic, copy) NSString *streetAddress;
@property (nonatomic, copy) NSString *streetName;

- (void).cxx_destruct;
- (id)administrativeArea;
- (id)comparisonIdentifier;
- (id)country;
- (id)debugDescription;
- (id)description;
- (id)formattedAddressLines;
- (unsigned long long)hash;
- (id)initWithLocality:(id)arg1 administrativeArea:(id)arg2 country:(id)arg3 stateCode:(id)arg4 streetAddress:(id)arg5 streetName:(id)arg6 formattedAddressLines:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)locality;
- (void)setAdministrativeArea:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setFormattedAddressLines:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setStateCode:(id)arg1;
- (void)setStreetAddress:(id)arg1;
- (void)setStreetName:(id)arg1;
- (id)stateCode;
- (id)streetAddress;
- (id)streetName;

@end

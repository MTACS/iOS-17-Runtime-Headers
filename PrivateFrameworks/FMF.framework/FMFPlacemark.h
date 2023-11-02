
@interface FMFPlacemark : NSObject <NSCopying, NSSecureCoding> {
    NSString * _administrativeArea;
    NSString * _country;
    NSArray * _formattedAddressLines;
    NSString * _locality;
    NSString * _state;
    NSString * _streetAddress;
    NSString * _streetName;
}

@property (nonatomic, retain) NSString *administrativeArea;
@property (nonatomic, retain) NSString *country;
@property (nonatomic, retain) NSArray *formattedAddressLines;
@property (nonatomic, retain) NSString *locality;
@property (nonatomic, retain) NSString *state;
@property (nonatomic, retain) NSString *streetAddress;
@property (nonatomic, retain) NSString *streetName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)administrativeArea;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedAddress;
- (id)formattedAddressLines;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLocality:(id)arg1 administrativeArea:(id)arg2 country:(id)arg3 state:(id)arg4 streetAddress:(id)arg5 streetName:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)locality;
- (void)setAdministrativeArea:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setFormattedAddressLines:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStreetAddress:(id)arg1;
- (void)setStreetName:(id)arg1;
- (id)state;
- (id)streetAddress;
- (id)streetName;

@end

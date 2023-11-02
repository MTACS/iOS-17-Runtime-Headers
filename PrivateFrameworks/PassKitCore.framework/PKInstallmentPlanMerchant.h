
@interface PKInstallmentPlanMerchant : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _categoryCode;
    NSString * _city;
    NSString * _country;
    NSString * _identifier;
    NSString * _name;
    NSString * _postalCode;
    NSString * _state;
}

@property (nonatomic) unsigned long long categoryCode;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)categoryCode;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInstallmentPlanMerchant:(id)arg1;
- (id)name;
- (id)postalCode;
- (void)setCategoryCode:(unsigned long long)arg1;
- (void)setCity:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end

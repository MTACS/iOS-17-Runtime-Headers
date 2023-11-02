
@interface PKNameComponentFormatConfiguration : NSObject <NSSecureCoding> {
    PKContactFieldConfiguration * _familyNameFieldConfiguration;
    PKContactFieldConfiguration * _givenNameFieldConfiguration;
    PKContactFieldConfiguration * _phoneticFamilyNameFieldConfiguration;
    PKContactFieldConfiguration * _phoneticGivenNameFieldConfiguration;
}

@property (nonatomic, readonly) PKContactFieldConfiguration *familyNameFieldConfiguration;
@property (nonatomic, readonly) PKContactFieldConfiguration *givenNameFieldConfiguration;
@property (nonatomic, readonly) PKContactFieldConfiguration *phoneticFamilyNameFieldConfiguration;
@property (nonatomic, readonly) PKContactFieldConfiguration *phoneticGivenNameFieldConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyNameFieldConfiguration;
- (id)givenNameFieldConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)phoneticFamilyNameFieldConfiguration;
- (id)phoneticGivenNameFieldConfiguration;

@end

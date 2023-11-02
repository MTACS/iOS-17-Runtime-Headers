
@interface PKAddressFormatConfiguration : NSObject <NSSecureCoding> {
    PKContactFieldConfiguration * _cityFieldConfiguration;
    PKContactFieldConfiguration * _postalCodeFieldConfiguration;
    PKContactFieldConfiguration * _stateFieldConfiguration;
    PKContactFieldConfiguration * _streetFieldConfiguration;
    PKContactFieldConfiguration * _subAdministrativeAreaFieldConfiguration;
    PKContactFieldConfiguration * _subLocalityFieldConfiguration;
}

@property (nonatomic, readonly) PKContactFieldConfiguration *cityFieldConfiguration;
@property (nonatomic, readonly) PKContactFieldConfiguration *postalCodeFieldConfiguration;
@property (nonatomic, readonly) PKContactFieldConfiguration *stateFieldConfiguration;
@property (nonatomic, readonly) PKContactFieldConfiguration *streetFieldConfiguration;
@property (nonatomic, readonly) PKContactFieldConfiguration *subAdministrativeAreaFieldConfiguration;
@property (nonatomic, readonly) PKContactFieldConfiguration *subLocalityFieldConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cityFieldConfiguration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)postalCodeFieldConfiguration;
- (id)stateFieldConfiguration;
- (id)streetFieldConfiguration;
- (id)subAdministrativeAreaFieldConfiguration;
- (id)subLocalityFieldConfiguration;

@end

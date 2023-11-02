
@interface PKContactFormatConfiguration : NSObject <NSSecureCoding> {
    bool  _checkFormatOfEmailAddress;
    bool  _checkFormatOfPhoneNumber;
    NSDictionary * _regionalAddressFormatConfigurations;
}

@property (nonatomic, readonly) bool checkFormatOfEmailAddress;
@property (nonatomic, readonly) bool checkFormatOfPhoneNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkFormatOfEmailAddress;
- (bool)checkFormatOfPhoneNumber;
- (id)contactFieldConfigurationForCountryCode:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)regionalAddressFormatConfigurations;

@end


@interface PKPassShareActivationOptions : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _options;
}

@property (nonatomic, readonly) NSString *activationCode;
@property (nonatomic, readonly) NSArray *identifiers;
@property (nonatomic, readonly) NSString *localizationKeyPostfix;
@property (nonatomic, readonly) NSArray *options;
@property (nonatomic, readonly) PKPassShareActivationOption *primaryOption;

+ (id)optionsFromRemoteOptions:(id)arg1 localOptions:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activationCode;
- (bool)containsOptionOfType:(unsigned long long)arg1;
- (bool)containsPinCode;
- (bool)containsVehicalEnteredPin;
- (bool)containsVehicleEnteredPin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifiers;
- (id)init;
- (id)initWithCarKeyIdentifiers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultIdentifierForType:(unsigned long long)arg1;
- (id)initWithOptions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassShareActivationOptions:(id)arg1;
- (id)localizationKeyPostfix;
- (id)optionOfType:(unsigned long long)arg1;
- (id)optionOfTypes:(id)arg1;
- (id)options;
- (id)optionsExcludingIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)optionsOfType:(unsigned long long)arg1;
- (id)optionsOfTypes:(id)arg1;
- (id)optionsWithoutValues;
- (id)primaryOption;

@end

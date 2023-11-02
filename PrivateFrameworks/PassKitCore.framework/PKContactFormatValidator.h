
@interface PKContactFormatValidator : NSObject {
    PKContactFormatConfiguration * _configuration;
}

- (void).cxx_destruct;
- (id)_formattedFieldEntry:(id)arg1 forFieldConfiguration:(id)arg2;
- (bool)_isFieldEntry:(id)arg1 validForContactFieldConfiguration:(id)arg2;
- (bool)_isFieldEntry:(id)arg1 validForPickerContactFieldConfiguration:(id)arg2;
- (bool)_isFieldEntry:(id)arg1 validForTextContactFieldConfiguration:(id)arg2;
- (unsigned long long)checkNameFormat:(id)arg1 forCountryCode:(id)arg2;
- (unsigned long long)checkPostalAddressFormat:(id)arg1;
- (id)contactFieldConfigurationForFamilyNameForCountryCode:(id)arg1;
- (id)contactFieldConfigurationForGivenNameForCountryCode:(id)arg1;
- (id)contactFieldConfigurationForPhoneticFamilyNameForCountryCode:(id)arg1;
- (id)contactFieldConfigurationForPhoneticGivenNameForCountryCode:(id)arg1;
- (id)contactFieldConfigurationForPostalField:(id)arg1 forCountryCode:(id)arg2;
- (bool)emailAddressIsValid:(id)arg1;
- (id)formatPostalAddress:(id)arg1;
- (bool)hasFormatValidationConfigurationForCountryCode:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (bool)isFamilyName:(id)arg1 validFormatForCountryCode:(id)arg2;
- (bool)isGivenName:(id)arg1 validFormatForCountryCode:(id)arg2;
- (bool)isPhoneticFamilyName:(id)arg1 validFormatForCountryCode:(id)arg2;
- (bool)isPhoneticGivenName:(id)arg1 validFormatForCountryCode:(id)arg2;
- (bool)isPostalAddressFieldEntry:(id)arg1 validForPostalFieldKey:(id)arg2 forCountryCode:(id)arg3;
- (bool)phoneNumberIsValid:(id)arg1 forCountryCode:(id)arg2;

@end


@interface CNPhoneNumberHelper : NSObject

+ (id)countryCodeForNumber:(id)arg1;
+ (id)defaultCountryCode;
+ (id)internationalizedFormattedNumber:(id)arg1 countryCode:(id)arg2;
+ (id)internationalizedUnformattedNumber:(id)arg1 countryCode:(id)arg2;
+ (bool)isStringPhoneNumber:(id)arg1;
+ (id)lastFourDigitsForNumber:(id)arg1;
+ (id)makePhoneNumberRegex;

@end

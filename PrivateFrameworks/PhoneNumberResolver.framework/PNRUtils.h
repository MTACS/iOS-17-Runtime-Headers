
@interface PNRUtils : NSObject

+ (void)_countryCodeFromInternationalCode:(id)arg1 result:(id /* block */)arg2;
+ (id)_currentCountry;
+ (id)_currentLocale;
+ (bool)_isValidPhoneNumber:(id)arg1;
+ (void)_localizedCountryNameForISOCountryCode:(id)arg1 result:(id /* block */)arg2;
+ (id)_preferredLanguages;
+ (id)_stringByStrippingFormattingAndNotVisiblyAllowable:(id)arg1;

@end


@interface CNAddressFormats : NSObject

+ (id)addressFormatForCountryCode:(id)arg1;
+ (id)addressFormats;
+ (id)countryCodeByGlobalDefaultsLookup;
+ (id)countryCodeByLocaleLookup;
+ (id)defaultKeyboardSettingsDictionary;
+ (id)fallbackCountryCode;
+ (id)makeSupportedCountries;
+ (id)supportedCountries;
+ (id)usaStateAbbreviations;
+ (id)usaStateNames;

@end

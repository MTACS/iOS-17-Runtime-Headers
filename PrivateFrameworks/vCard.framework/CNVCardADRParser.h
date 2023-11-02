
@interface CNVCardADRParser : NSObject

+ (id)addressValueWithPrimaryAddress:(id)arg1 extendedAddress:(id)arg2 poBox:(id)arg3;
+ (void)collectStreetAddressComponentsIntoSingleKeyInAddress:(id)arg1;
+ (id)countryCodeForLine:(id)arg1 validCountryCodes:(id)arg2 parser:(id)arg3;
+ (bool)parseNextStringWithParser:(id)arg1 components:(id)arg2 key:(id)arg3;
+ (id)parseStreetAddressComponentsWithParser:(id)arg1;
+ (void)processExtensionValuesForLines:(id)arg1 validCountryCodes:(id)arg2 parser:(id)arg3;
+ (id)valueWithParser:(id)arg1;

@end
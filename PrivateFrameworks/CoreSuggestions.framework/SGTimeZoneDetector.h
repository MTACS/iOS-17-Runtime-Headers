
@interface SGTimeZoneDetector : NSObject {
    NSDictionary * _countryCodeForCountryName;
    bool  _keepData;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    unsigned long long  _memoryPressureStatus;
    NSDictionary * _postalCodeFormats;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _regionAbbreviations;
    NSDictionary * _timeZoneAbbreviations;
    NSDictionary * _timeZoneForCountryCode;
    NSDictionary * _timeZoneForCountryCodeDictionarySupplement;
    NSDictionary * _timeZoneForPostalCode;
    NSDictionary * _uniquePostalCodeFormats;
}

+ (id)_normalizedCountryString:(id)arg1;
+ (id)_normalizedString:(id)arg1;
+ (id)_regularExpressionForPostalCodeFormat:(id)arg1;

- (void).cxx_destruct;
- (id)_acronymForAddress:(id)arg1 airportCodeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 airportCodeNames:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_airportCodeRangeForAddress:(id)arg1;
- (id)_countryCodeByCountryNameFromNormalizedAddressWords:(id)arg1;
- (id)_countryCodeByRegionAbbreviationFromNormalizedAddress:(id)arg1;
- (id)_countryCodeByRegionNameFromNormalizedAddress:(id)arg1 withWords:(id)arg2;
- (id)_countryCodeByRegularExpressionFromNormalizedAddress:(id)arg1;
- (id)_getCountryCodeForCountryName;
- (id)_getPostalCodeFormats;
- (id)_getRegionAbbreviations;
- (id)_getRegionNames;
- (id)_getTimeZoneAbbreviations;
- (id)_getTimeZoneForCountryCode;
- (id)_getTimeZoneForCountryCodeDictionarySupplement;
- (id)_getTimeZoneForPostalCode;
- (id)_getUniquePostalCodeFormats;
- (void)_handleMemoryPressureStatus;
- (id)_postalCodeForAddress:(id)arg1 withCountryCode:(id)arg2;
- (void)_readPlistRegionAbbreviationsData;
- (id)_timeZoneNameForPostalCode:(id)arg1 withPostalCodeTable:(id)arg2;
- (void)cleanupCache;
- (id)countryCodeForAddress:(id)arg1;
- (id)init;
- (id)timeZoneFromAiportCodeForAddress:(id)arg1;
- (id)timeZoneNameForAddress:(id)arg1 withCountryCode:(id)arg2;

@end


@interface CNPostalAddressFormatter : NSFormatter {
    long long  _style;
}

@property (nonatomic) long long style;

+ (id)attributedStringFromPostalAddress:(id)arg1 style:(long long)arg2 withDefaultAttributes:(id)arg3;
+ (id)formatPropertyKeyForPostalAddressPropertyKey:(id)arg1;
+ (id)localizedCountryNameForISOCountryCode:(id)arg1;
+ (id)localizedStringForPostalAddressString:(id)arg1;
+ (id)postalAddressPropertyKeyForFormatPropertyKey:(id)arg1;
+ (id)singleLineStringFromPostalAddress:(id)arg1 addCountryName:(bool)arg2;
+ (id)specificationForCountry:(id)arg1;
+ (id)specificationWithAddressFormatPlist:(id)arg1;
+ (id)stringFromPostalAddress:(id)arg1 style:(long long)arg2;
+ (id)supportedCountries;

- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)attributedStringFromPostalAddress:(id)arg1 name:(id)arg2 organization:(id)arg3 attributes:(id)arg4;
- (id)attributedStringFromPostalAddress:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)postalAddressFromString:(id)arg1;
- (void)setStyle:(long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromPostalAddress:(id)arg1;
- (long long)style;

@end

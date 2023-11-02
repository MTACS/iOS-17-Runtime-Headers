
@interface _NSSwiftLocale : _NSLocaleBridge {
    void locale;
}

@property (nonatomic, readonly) NSString *alternateQuotationBeginDelimiter;
@property (nonatomic, readonly) NSString *alternateQuotationEndDelimiter;
@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic, readonly) Class classForCoder;
@property (nonatomic, readonly) NSString *collationIdentifier;
@property (nonatomic, readonly) NSString *collatorIdentifier;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSString *currencySymbol;
@property (nonatomic, readonly) NSString *decimalSeparator;
@property (nonatomic, readonly) NSCharacterSet *exemplarCharacterSet;
@property (nonatomic, readonly) NSString *groupingSeparator;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSString *languageIdentifier;
@property (nonatomic, readonly) NSString *localeIdentifier;
@property (nonatomic, readonly) NSString *quotationBeginDelimiter;
@property (nonatomic, readonly) NSString *quotationEndDelimiter;
@property (nonatomic, readonly) NSString *regionCode;
@property (nonatomic, readonly) NSString *scriptCode;
@property (nonatomic, readonly) bool usesMetricSystem;
@property (nonatomic, readonly) NSString *variantCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_doesNotRequireSpecialCaseHandling;
- (id)_localeWithNewCalendarIdentifier:(id)arg1;
- (id)_numberingSystem;
- (id)_prefForKey:(id)arg1;
- (id)alternateQuotationBeginDelimiter;
- (id)alternateQuotationEndDelimiter;
- (id)calendarIdentifier;
- (Class)classForCoder;
- (id)collationIdentifier;
- (id)collatorIdentifier;
- (id)countryCode;
- (id)currencyCode;
- (id)currencySymbol;
- (id)decimalSeparator;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)exemplarCharacterSet;
- (id)groupingSeparator;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)languageCode;
- (id)languageIdentifier;
- (id)localeIdentifier;
- (id)localizedStringForCalendarIdentifier:(id)arg1;
- (id)localizedStringForCollationIdentifier:(id)arg1;
- (id)localizedStringForCollatorIdentifier:(id)arg1;
- (id)localizedStringForCountryCode:(id)arg1;
- (id)localizedStringForCurrencyCode:(id)arg1;
- (id)localizedStringForCurrencySymbol:(id)arg1;
- (id)localizedStringForLanguageCode:(id)arg1;
- (id)localizedStringForLocaleIdentifier:(id)arg1;
- (id)localizedStringForScriptCode:(id)arg1;
- (id)localizedStringForVariantCode:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)quotationBeginDelimiter;
- (id)quotationEndDelimiter;
- (id)regionCode;
- (id)scriptCode;
- (bool)usesMetricSystem;
- (id)variantCode;

@end

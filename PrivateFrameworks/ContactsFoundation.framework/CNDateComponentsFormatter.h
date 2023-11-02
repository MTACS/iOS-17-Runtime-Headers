
@interface CNDateComponentsFormatter : NSFormatter {
    NSString * _dateFormatPlaceholderString;
    NSArray * _lazyFormatterFutures;
    NSLocale * _locale;
}

@property (nonatomic, retain) NSLocale *locale;

+ (id)chineseCyclicYearMonthDayFormatter;
+ (id)chineseLongStyleRelatedGregorianYearMonthDayFormatter;
+ (id)chineseMonthDayFormatter;
+ (id)chineseMonthDayHanidayFormatter;
+ (id)chineseRelatedGregorianYearMonthDayFormatter;
+ (id)chineseRelatedGregorianYearMonthDayHanidayFormatter;
+ (id)dateFormatterWithYearFormat:(id)arg1 hasLongFormat:(bool)arg2 locale:(id)arg3;
+ (id)formatterFuturesWithLocale:(id)arg1;
+ (id)longDayMonthYearDateFormatterWithLocale:(id)arg1;
+ (id)longDayMonthYearlessDateFormatterWithLocale:(id)arg1;
+ (id)os_log;
+ (id)shortDayMonthYearDateFormatterWithLocale:(id)arg1;
+ (id)shortDayMonthYearlessDateFormatterWithLocale:(id)arg1;
+ (bool)shouldUseChinaSpecificFormattersForLocale:(id)arg1;
+ (bool)shouldUseIslamicSpecificFormattersForLocale:(id)arg1;

- (void).cxx_destruct;
- (id)arabicGregorianPlaceholderString;
- (id)arabicIslamicPlaceholderString;
- (id)chinesePlaceholderStringWithDay:(id)arg1 month:(id)arg2 year:(id)arg3;
- (unsigned long long)componentsToExtract;
- (id)dateComponentsFromString:(id)arg1;
- (id)dateFormatPlaceholderString;
- (id)dateFormatPlaceholderStringForLanguage:(id)arg1;
- (id)displayFormatterForComponents:(id)arg1;
- (id)dmyFormatString;
- (bool)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (id)init;
- (id)locale;
- (id)normalizedComponentsFromDate:(id)arg1 calendar:(id)arg2 timeZone:(id)arg3;
- (id)placeholderStringWithLocalizedDay:(id)arg1 month:(id)arg2 year:(id)arg3;
- (id)placeholderSubstitutionStringWithDay:(unsigned long long)arg1 month:(unsigned long long)arg2 year:(unsigned long long)arg3;
- (void)regenerateFormatterFutures;
- (void)setLocale:(id)arg1;
- (bool)shouldUseArabicGregorianPlaceholderStringForLanguage:(id)arg1;
- (bool)shouldUseArabicIslamicPlaceholderStringForLanguage:(id)arg1;
- (bool)shouldUseChinesePlaceholderString;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDateComponents:(id)arg1;

@end

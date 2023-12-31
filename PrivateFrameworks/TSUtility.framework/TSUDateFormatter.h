
@interface TSUDateFormatter : NSObject {
    NSString * mDateOnlyFormatString;
    struct __CFDateFormatter { } * mFullDateFormatter;
    NSString * mTimeOnlyFormatString;
}

+ (id)dateFormatStringSpecialSymbols;
+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (id)defaultDateTimeFormat;
+ (unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1;
+ (id)shortMonthNamesForNonCachedCurrentLocale;
+ (id)supportedDateFormats;
+ (id)supportedTimeFormats;
+ (id)timePortionOfDateTimeFormatString:(id)arg1;

- (id)appropriateOutputFormatStringForInputFormatString:(id)arg1;
- (void)dealloc;
- (id)fullDateString:(id)arg1;
- (id)init;
- (id)stringFromDate:(id)arg1 format:(id)arg2;

@end

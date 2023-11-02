
@interface OITSUDateFormatter : NSObject {
    NSString * _dateOnlyFormatString;
    struct __CFDateFormatter { } * _fullDateFormatter;
    NSString * _timeOnlyFormatString;
}

+ (id)dateFormatStringSpecialSymbols;
+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (id)defaultDateTimeFormatForLocale:(id)arg1;
+ (unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1;
+ (id)p_supportedDateFormatMatchingFormat:(id)arg1 locale:(id)arg2;
+ (id)p_supportedTimeFormatMatchingFormat:(id)arg1 locale:(id)arg2;
+ (id)supportedDateFormatsForLocale:(id)arg1;
+ (id)supportedTimeFormatsForLocale:(id)arg1;
+ (id)timePortionOfDateTimeFormatString:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)arg1;

@end

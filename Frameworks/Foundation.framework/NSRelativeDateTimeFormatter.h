
@interface NSRelativeDateTimeFormatter : NSFormatter {
    NSCalendar * _calendar;
    long long  _dateTimeStyle;
    struct __CFRelativeDateTimeFormatter { } * _formatter;
    long long  _formattingContext;
    NSLocale * _locale;
    long long  _unitsStyle;
}

@property (copy) NSCalendar *calendar;
@property long long dateTimeStyle;
@property long long formattingContext;
@property (copy) NSLocale *locale;
@property long long unitsStyle;

- (void)_clearFormatter;
- (id)_stringForCalendarUnit:(unsigned long long)arg1 value:(long long)arg2;
- (id)_stringFromDateComponents:(id)arg1;
- (id)calendar;
- (long long)dateTimeStyle;
- (void)dealloc;
- (long long)formattingContext;
- (id)locale;
- (id)localizedStringForDate:(id)arg1 relativeToDate:(id)arg2;
- (id)localizedStringFromDateComponents:(id)arg1;
- (id)localizedStringFromTimeInterval:(double)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDateTimeStyle:(long long)arg1;
- (void)setFormattingContext:(long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setUnitsStyle:(long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (long long)unitsStyle;

@end


@interface _UIDatePickerCalendarTimeFormat : NSObject <NSCopying> {
    NSString * _AMSymbol;
    NSString * _PMSymbol;
    long long  _clock;
    long long  _clockLayout;
    bool  _displaysTimeZone;
    NSString * _extendedHoursFormat;
    bool  _forceDoubleDigitHours;
    bool  _hasLeadingLiteral;
    bool  _hasTrailingLiteral;
    NSString * _hourFormat;
    NSNumberFormatter * _hourFormatter;
    NSLocale * _locale;
    NSNumberFormatter * _minuteFormatter;
    NSNumberFormatter * _strictHourFormatter;
    NSString * _timeFormat;
    NSTimeZone * _timeZone;
    NSDate * _timeZoneReferenceDate;
    bool  _wantsDoubleDigitHours;
}

@property (nonatomic, readonly) NSString *AMSymbol;
@property (nonatomic, readonly) NSString *PMSymbol;
@property (nonatomic, readonly) long long clock;
@property (nonatomic, readonly) long long clockLayout;
@property (nonatomic, readonly) bool displaysTimeZone;
@property (nonatomic, readonly) NSString *extendedHoursFormat;
@property (nonatomic, readonly) bool forceDoubleDigitHours;
@property (nonatomic, readonly) bool hasLeadingLiteral;
@property (nonatomic, readonly) bool hasTrailingLiteral;
@property (nonatomic, readonly) NSString *hourFormat;
@property (nonatomic, readonly) NSNumberFormatter *hourFormatter;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSNumberFormatter *minuteFormatter;
@property (nonatomic, readonly) NSNumberFormatter *strictHourFormatter;
@property (nonatomic, readonly) NSString *timeFormat;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic) NSDate *timeZoneReferenceDate;
@property (nonatomic, readonly) bool wantsDoubleDigitHours;

+ (id)formatWithCalendar:(id)arg1 locale:(id)arg2;
+ (id)formatWithCalendar:(id)arg1 locale:(id)arg2 followsSystemHourCycle:(bool)arg3;

- (void).cxx_destruct;
- (id)AMSymbol;
- (id)PMSymbol;
- (long long)clock;
- (long long)clockLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)displaysTimeZone;
- (id)extendedHoursFormat;
- (bool)forceDoubleDigitHours;
- (bool)hasLeadingLiteral;
- (bool)hasTrailingLiteral;
- (id)hourFormat;
- (id)hourFormatter;
- (id)initWithCalendar:(id)arg1 locale:(id)arg2 followsSystemHourCycle:(bool)arg3 forceDoubleDigitHours:(bool)arg4 displaysTimeZone:(bool)arg5;
- (id)initWithCalendar:(id)arg1 locale:(id)arg2 forceDoubleDigitHours:(bool)arg3 displaysTimeZone:(bool)arg4;
- (id)locale;
- (id)localizedTimeStringWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2 isPM:(bool)arg3;
- (id)localizedTimeStringWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2 isPM:(bool)arg3 ranges:(struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct _NSRange { unsigned long long x_4_1_1; unsigned long long x_4_1_2; } x4; }*)arg4;
- (id)minuteFormatter;
- (void)setTimeZoneReferenceDate:(id)arg1;
- (id)strictHourFormatter;
- (id)timeFormat;
- (id)timeZone;
- (id)timeZoneReferenceDate;
- (bool)wantsDoubleDigitHours;
- (id)withDisplaysTimeZone:(bool)arg1;
- (id)withForceDoubleDigitHours:(bool)arg1;
- (id)withTimeZone:(id)arg1;

@end

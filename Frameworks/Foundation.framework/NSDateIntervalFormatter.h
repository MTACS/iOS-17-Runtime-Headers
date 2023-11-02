
@interface NSDateIntervalFormatter : NSFormatter {
    unsigned long long  _boundaryStyle;
    NSCalendar * _calendar;
    unsigned long long  _dateStyle;
    NSString * _dateTemplate;
    NSString * _dateTemplateFromStyles;
    struct UDateIntervalFormat { } * _formatter;
    NSLocale * _locale;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _modified;
    unsigned long long  _timeStyle;
    NSTimeZone * _timeZone;
    bool  _useTemplate;
}

@property (copy) NSCalendar *calendar;
@property unsigned long long dateStyle;
@property (copy) NSString *dateTemplate;
@property (copy) NSLocale *locale;
@property unsigned long long timeStyle;
@property (copy) NSTimeZone *timeZone;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (id)_stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (unsigned long long)boundaryStyle;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dateStyle;
- (id)dateTemplate;
- (void)dealloc;
- (id)editingStringForObjectValue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorDescription:(id*)arg5;
- (id)locale;
- (void)setBoundaryStyle:(unsigned long long)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDateStyle:(unsigned long long)arg1;
- (void)setDateTemplate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setTimeStyle:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)stringFromDateInterval:(id)arg1;
- (unsigned long long)timeStyle;
- (id)timeZone;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_dateTimeDateIntervalFormatter;
+ (id)hk_dayIntervalFormatter;
+ (id)hk_hourDateIntervalFormatter;
+ (id)hk_hourDateIntervalWithDateFormatter;
+ (id)hk_hourMinuteOnlyDateIntervalFormatter;
+ (id)hk_hourOnlyDateIntervalFormatter;
+ (id)hk_mediumDateStyleIntervalFormatter;
+ (id)hk_mediumMonthDayDateIntervalFormatter;
+ (id)hk_monthDayYearIntervalFormatter;
+ (id)hk_monthIntervalFormatter;
+ (id)hk_monthYearIntervalFormatter;
+ (id)hk_threadSafe_mediumMonthDayDateIntervalFormatter;
+ (id)hk_yearIntervalFormatter;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (bool)_px_isChineseYearTemplate;
- (id)_px_localizedCapitalizedString:(id)arg1;
- (id)_px_substitutions;
- (id)px_attributedStringFromDateInterval:(id)arg1 defaultAttributes:(id)arg2 emphasizedAttributes:(id)arg3;
- (bool)px_customizesAttributedString;
- (id)px_dateTemplateForGranularity:(unsigned long long)arg1 abbreviated:(bool)arg2;
- (id)px_dateTemplateForGranularity:(unsigned long long)arg1 abbreviated:(bool)arg2 onlyCalendarUnit:(bool)arg3;

@end

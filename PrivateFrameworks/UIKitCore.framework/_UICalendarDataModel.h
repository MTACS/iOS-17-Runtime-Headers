
@interface _UICalendarDataModel : NSObject {
    NSDateInterval * _availableDateRange;
    NSCalendar * _calendar;
    NSCalendar * _effectiveCalendar;
    NSLocale * _effectiveLocale;
    NSString * _fontDesign;
    NSLocale * _locale;
    NSTimeZone * _timeZone;
    _UIDatePickerCalendarMonth * _visibleMonth;
}

@property (nonatomic, copy) NSDateInterval *availableDateRange;
@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, readonly) NSCalendar *effectiveCalendar;
@property (nonatomic, readonly) NSLocale *effectiveLocale;
@property (nonatomic, readonly) NSTimeZone *effectiveTimeZone;
@property (nonatomic, retain) NSString *fontDesign;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, retain) _UIDatePickerCalendarMonth *visibleMonth;

- (void).cxx_destruct;
- (void)_deriveEffectiveLocaleAndCalendarIfNeeded;
- (id)availableDateRange;
- (id)calendar;
- (id)effectiveCalendar;
- (id)effectiveLocale;
- (id)effectiveTimeZone;
- (id)fontDesign;
- (id)init;
- (id)locale;
- (void)setAvailableDateRange:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setFontDesign:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setVisibleMonth:(id)arg1;
- (id)timeZone;
- (id)visibleMonth;

@end

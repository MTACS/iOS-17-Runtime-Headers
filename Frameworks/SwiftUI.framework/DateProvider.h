
@interface DateProvider : BaseDateProvider {
    unsigned long long  _calendarUnits;
    NSDate * _date;
    NSString * _dateFormat;
    NSString * _dateFormatTemplate;
    NSDateFormatter * _dateFormatter;
    NSArray * _templateSeries;
    unsigned long long  _updateWallClockAlignment;
    bool  _uppercase;
}

@property (nonatomic) unsigned long long calendarUnits;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSString *dateFormat;
@property (nonatomic, copy) NSString *dateFormatTemplate;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic) unsigned long long updateWallClockAlignment;
@property (nonatomic) bool uppercase;

- (void).cxx_destruct;
- (id)_completeDateTemplateSeries;
- (unsigned long long)_minCalendarUnitFromFormat:(id)arg1;
- (id)_partialDateTemplateSeriesForUnits:(unsigned long long)arg1;
- (id)_sessionTextForIndex:(long long)arg1 context:(id)arg2;
- (void)_startSessionWithDate:(id)arg1;
- (unsigned long long)calendarUnits;
- (id)date;
- (id)dateFormat;
- (id)dateFormatTemplate;
- (id)dateFormatter;
- (id)initWithDate:(id)arg1 units:(unsigned long long)arg2;
- (id)initWithDate:(id)arg1 units:(unsigned long long)arg2 calendar:(id)arg3 locale:(id)arg4 timeZone:(id)arg5;
- (id)initWithDateFormat:(id)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4;
- (id)initWithDateFormatTemplate:(id)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4;
- (void)setCalendarUnits:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (void)setDateFormatTemplate:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setUpdateWallClockAlignment:(unsigned long long)arg1;
- (void)setUppercase:(bool)arg1;
- (long long)updateType;
- (unsigned long long)updateWallClockAlignment;
- (bool)uppercase;

@end

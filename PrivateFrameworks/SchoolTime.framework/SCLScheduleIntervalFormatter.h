
@interface SCLScheduleIntervalFormatter : NSFormatter {
    NSDateIntervalFormatter * _briefFormatter;
    NSBundle * _bundle;
    bool  _coalescesAMPMSymbols;
    unsigned long long  _formattingStyle;
    NSLocale * _locale;
    bool  _prefersHoursOnly;
    NSCalendar * _referenceCalendar;
    NSTimeZone * _referenceTimeZone;
    NSDateFormatter * _shortFormatter;
    NSString * _table;
}

@property (nonatomic, retain) NSDateIntervalFormatter *briefFormatter;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic) bool coalescesAMPMSymbols;
@property (nonatomic) unsigned long long formattingStyle;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) bool prefersHoursOnly;
@property (nonatomic, retain) NSCalendar *referenceCalendar;
@property (nonatomic, retain) NSTimeZone *referenceTimeZone;
@property (nonatomic, retain) NSDateFormatter *shortFormatter;
@property (nonatomic, retain) NSString *table;

- (void).cxx_destruct;
- (id)_shortIntervalStringWithStart:(id)arg1 end:(id)arg2;
- (id)_stringForCoalescedAMPMSymbolsWithDateInterval:(id)arg1 locale:(id)arg2 startTimeComponents:(id)arg3 endTimeComponents:(id)arg4;
- (id)_stringForDateInterval:(id)arg1 startComponents:(id)arg2 endComponents:(id)arg3;
- (id)briefFormatter;
- (id)bundle;
- (bool)coalescesAMPMSymbols;
- (unsigned long long)formattingStyle;
- (id)init;
- (id)locale;
- (id)newDateFormatterWithLocale:(id)arg1;
- (bool)prefersHoursOnly;
- (id)referenceCalendar;
- (id)referenceTimeZone;
- (void)setBriefFormatter:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setCoalescesAMPMSymbols:(bool)arg1;
- (void)setFormattingStyle:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setPrefersHoursOnly:(bool)arg1;
- (void)setReferenceCalendar:(id)arg1;
- (void)setReferenceTimeZone:(id)arg1;
- (void)setShortFormatter:(id)arg1;
- (void)setTable:(id)arg1;
- (id)shortFormatter;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTime:(id)arg1 toTime:(id)arg2;
- (id)stringFromTimeInterval:(id)arg1;
- (id)table;

@end

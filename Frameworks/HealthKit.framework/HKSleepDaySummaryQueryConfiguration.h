
@interface HKSleepDaySummaryQueryConfiguration : HKQueryServerConfiguration {
    bool  _ascending;
    HKSleepDaySummaryCacheSettings * _cacheSettings;
    NSCalendar * _calendarOverrides;
    long long  _limit;
    struct { 
        long long start; 
        long long duration; 
    }  _morningIndexRange;
    unsigned long long  _options;
}

@property (nonatomic) bool ascending;
@property (nonatomic, copy) HKSleepDaySummaryCacheSettings *cacheSettings;
@property (nonatomic, copy) NSCalendar *calendarOverrides;
@property (nonatomic) long long limit;
@property (nonatomic) struct { long long x1; long long x2; } morningIndexRange;
@property (nonatomic) unsigned long long options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)ascending;
- (id)cacheSettings;
- (id)calendarOverrides;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)limit;
- (struct { long long x1; long long x2; })morningIndexRange;
- (unsigned long long)options;
- (void)setAscending:(bool)arg1;
- (void)setCacheSettings:(id)arg1;
- (void)setCalendarOverrides:(id)arg1;
- (void)setLimit:(long long)arg1;
- (void)setMorningIndexRange:(struct { long long x1; long long x2; })arg1;
- (void)setOptions:(unsigned long long)arg1;

@end

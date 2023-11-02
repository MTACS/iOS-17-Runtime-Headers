
@interface TimeProvider : BaseDateProvider {
    NSDate * _date;
    NSDateFormatter * _dateFormatter;
    NSMutableArray * _sizingFallbackBlocks;
}

@property (nonatomic, retain) NSDate *date;

- (void).cxx_destruct;
- (id)_sessionTextForIndex:(long long)arg1 context:(id)arg2;
- (id)_timeTextWithDropMinutes:(bool)arg1 dropDesignator:(bool)arg2;
- (id)date;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4;
- (void)setDate:(id)arg1;

@end

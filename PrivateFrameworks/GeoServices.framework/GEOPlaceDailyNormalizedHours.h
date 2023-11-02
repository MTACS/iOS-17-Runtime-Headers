
@interface GEOPlaceDailyNormalizedHours : NSObject {
    double  _closingSoonThresholdSeconds;
    NSArray * _localTimeIntervals;
    bool  _openFromMidnight;
    bool  _openToMidnight;
    double  _openingSoonThresholdSeconds;
    long long  _weekday;
}

@property (nonatomic) double closingSoonThresholdSeconds;
@property (nonatomic, readonly) NSArray *localTimeIntervals;
@property (nonatomic, readonly) bool openFromMidnight;
@property (nonatomic, readonly) bool openToMidnight;
@property (nonatomic) double openingSoonThresholdSeconds;
@property (nonatomic, readonly) long long weekday;

+ (id)dailyNormalizedHoursForWeekday:(long long)arg1 timeIntervals:(id)arg2 closingThreshold:(double)arg3 openingThreshold:(double)arg4 openToMidnight:(bool)arg5 openFromMidnight:(bool)arg6;
+ (long long)getWeekdayForDate:(id)arg1 inNormalizedHours:(id)arg2 timeZone:(id)arg3;
+ (long long)todaysWeekday:(long long)arg1 yesterdaysWeekday:(long long)arg2 containsTimeFromMidnight:(double)arg3 inNormalizedHours:(id)arg4;

- (void).cxx_destruct;
- (double)closingSoonThresholdSeconds;
- (id)description;
- (id)localTimeIntervals;
- (bool)openFromMidnight;
- (bool)openToMidnight;
- (double)openingSoonThresholdSeconds;
- (void)setClosingSoonThresholdSeconds:(double)arg1;
- (void)setOpeningSoonThresholdSeconds:(double)arg1;
- (long long)weekday;

@end

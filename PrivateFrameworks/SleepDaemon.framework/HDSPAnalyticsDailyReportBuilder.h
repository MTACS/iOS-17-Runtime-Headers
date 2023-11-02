
@interface HDSPAnalyticsDailyReportBuilder : NSObject {
    NSArray * _daySummaries;
    HDSPEnvironment * _environment;
    struct { 
        long long start; 
        long long duration; 
    }  _morningIndexRange;
}

@property (nonatomic, readonly) NSArray *daySummaries;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (nonatomic, readonly) struct { long long x1; long long x2; } morningIndexRange;

+ (unsigned long long)_stageDurationPercentage:(double)arg1 ofTotalDuration:(double)arg2;

- (void).cxx_destruct;
- (id)_biologicalSex;
- (double)_bucketedSleepDurationLastNight;
- (bool)_changedSchedule:(id)arg1 withinNumberOfDays:(unsigned long long)arg2 currentDate:(id)arg3 calendar:(id)arg4;
- (id)_dailyReportEvent;
- (long long)_daysWatchWornToSleepOverLastNumberOfDays:(long long)arg1 excludeWeekdays:(bool)arg2 calendar:(id)arg3;
- (bool)_didInteractWithWindDownActionsWithinLastTwoDays;
- (double)_lastNightsDurationForSleepStage:(long long)arg1;
- (double)_sleepDurationLastNightIncludingAwake:(bool)arg1;
- (id)_userAgeForCurrentDate:(id)arg1;
- (id)_weeksSinceOnboardDate:(id)arg1 currentDate:(id)arg2 calendar:(id)arg3;
- (id)_windDownEvents;
- (bool)_woreWatchToSleepLastNight;
- (id)analyticsManager;
- (id)analyticsStore;
- (id)buildReports;
- (id)currentDate;
- (id)daySummaries;
- (id)environment;
- (id)healthStore;
- (id)initWithEnvironment:(id)arg1 daySummaries:(id)arg2 morningIndexRange:(struct { long long x1; long long x2; })arg3;
- (struct { long long x1; long long x2; })morningIndexRange;
- (id)sleepSchedule;
- (id)sleepSettings;

@end


@interface HKMCAnalysis : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding> {
    NSArray * _cycles;
    NSArray * _deviations;
    NSArray * _fertileWindowProjections;
    bool  _fertileWindowProjectionsEnabled;
    bool  _hasHealthAppDevicesWithHigherAlgorithmVersions;
    bool  _isPeriodLogLate;
    NSNumber * _lastLoggedDayIndex;
    NSNumber * _lastMenstrualFlowDayIndex;
    HKMCSampleInfo * _latestSampleInfo;
    NSArray * _menstruationProjections;
    bool  _menstruationProjectionsEnabled;
    long long  _numberOfDailyAwakeHeartRateStatisticsForPast100Days;
    long long  _numberOfDailySleepHeartRateStatisticsForPast100Days;
    NSArray * _ongoingCycleFactors;
    HKMCRecentBasalBodyTemperature * _recentBasalBodyTemperature;
    unsigned long long  _recentSymptoms;
    HKMCStatistics * _statistics;
}

@property (nonatomic, readonly) NSArray *cycles;
@property (nonatomic, readonly) NSArray *deviations;
@property (nonatomic, readonly) NSArray *fertileWindowProjections;
@property (nonatomic, readonly) bool fertileWindowProjectionsEnabled;
@property (nonatomic, readonly) bool hasHealthAppDevicesWithHigherAlgorithmVersions;
@property (nonatomic, readonly, copy) HDMCNotification *hdmc_afterPeriodEndNotification;
@property (nonatomic, readonly, copy) HDMCNotification *hdmc_afterPeriodStartNotification;
@property (nonatomic, readonly, copy) HDMCNotification *hdmc_beforeFertileWindowStartNotification;
@property (nonatomic, readonly, copy) HDMCNotification *hdmc_beforePeriodStartNotification;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly) bool isPeriodLogLate;
@property (nonatomic, readonly, copy) NSNumber *lastLoggedDayIndex;
@property (nonatomic, readonly, copy) NSNumber *lastMenstrualFlowDayIndex;
@property (nonatomic, copy) HKMCSampleInfo *latestSampleInfo;
@property (nonatomic, readonly) NSArray *menstruationProjections;
@property (nonatomic, readonly) bool menstruationProjectionsEnabled;
@property (nonatomic, readonly) long long numberOfDailyAwakeHeartRateStatisticsForPast100Days;
@property (nonatomic, readonly) long long numberOfDailySleepHeartRateStatisticsForPast100Days;
@property (nonatomic, readonly) NSArray *ongoingCycleFactors;
@property (nonatomic, readonly) HKMCRecentBasalBodyTemperature *recentBasalBodyTemperature;
@property (nonatomic, readonly) unsigned long long recentSymptoms;
@property (nonatomic, readonly) HKMCStatistics *statistics;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cycles;
- (id)description;
- (id)deviations;
- (void)encodeWithCoder:(id)arg1;
- (id)fertileWindowProjections;
- (bool)fertileWindowProjectionsEnabled;
- (bool)hasHealthAppDevicesWithHigherAlgorithmVersions;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatistics:(id)arg1 menstruationProjections:(id)arg2 fertileWindowProjections:(id)arg3 menstruationProjectionsEnabled:(bool)arg4 fertileWindowProjectionsEnabled:(bool)arg5 cycles:(id)arg6 deviations:(id)arg7 recentSymptoms:(unsigned long long)arg8 recentBasalBodyTemperature:(id)arg9 lastLoggedDayIndex:(id)arg10 lastMenstrualFlowDayIndex:(id)arg11 isPeriodLogLate:(bool)arg12 ongoingCycleFactors:(id)arg13 numberOfDailySleepHeartRateStatisticsForPast100Days:(long long)arg14 numberOfDailyAwakeHeartRateStatisticsForPast100Days:(long long)arg15 hasHealthAppDevicesWithHigherAlgorithmVersions:(bool)arg16;
- (bool)isEqual:(id)arg1;
- (bool)isPeriodLogLate;
- (id)lastLoggedDayIndex;
- (id)lastMenstrualFlowDayIndex;
- (id)latestSampleInfo;
- (id)menstruationProjections;
- (bool)menstruationProjectionsEnabled;
- (long long)numberOfDailyAwakeHeartRateStatisticsForPast100Days;
- (long long)numberOfDailySleepHeartRateStatisticsForPast100Days;
- (id)ongoingCycleFactors;
- (id)recentBasalBodyTemperature;
- (unsigned long long)recentSymptoms;
- (void)setLatestSampleInfo:(id)arg1;
- (id)statistics;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

- (id)_hdmc_firstPeriodStartProjection;
- (id)hdmc_afterPeriodEndNotification;
- (id)hdmc_afterPeriodStartNotification;
- (id)hdmc_beforeFertileWindowStartNotification;
- (id)hdmc_beforePeriodStartNotification;
- (id)hdmc_fertileWindowDidUpdateDueToSensorDataNotificationForNotificationFireDate:(id)arg1 lastFiredDate:(id)arg2 fertileWindowNotificationTimeOfDay:(id)arg3;
- (bool)isEarliestNotificationScheduledAfterDate:(id)arg1 gregorianCalendar:(id)arg2;

@end

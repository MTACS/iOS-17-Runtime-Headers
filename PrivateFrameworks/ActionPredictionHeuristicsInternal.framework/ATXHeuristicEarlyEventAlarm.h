
@interface ATXHeuristicEarlyEventAlarm : NSObject <ATXContextHeuristicProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_enabledAlarmsFromTS:(double)arg1 toTS:(double)arg2 environment:(id)arg3;
- (double)_timestampAtDayOfTimestamp:(double)arg1 hour:(long long)arg2 minute:(long long)arg3;
- (double)_timestampByOffsettingDays:(double)arg1 dayOffset:(long long)arg2;
- (double)_timestampByOffsettingStartOfTodayByNumberOfDays:(long long)arg1;
- (double)_timestampWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 atDayOfTimestamp:(double)arg3;
- (id)_usualAlarmTimeOfDayDataSourceWithEnvironment:(id)arg1;
- (bool)_willAlarm:(id)arg1 fireFrom:(double)arg2 to:(double)arg3;
- (id)heuristicResultWithEnvironment:(id)arg1;
- (bool)isEventInterestingForSettingAlarm:(id)arg1;
- (id)permanentRefreshTriggers;
- (bool)shouldShowSuggestionForEarlyEvent:(id)arg1 alarms:(id)arg2 environment:(id)arg3;

@end

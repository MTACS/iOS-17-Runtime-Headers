
@interface _LTActivityLogger : NSObject <_LTActivityLoggerDelegate> {
    NSCalendar * _calendar;
    <_LTActivityLoggerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_LTActivityLoggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityDatePreferenceKeyForTask:(long long)arg1;
- (id)_featureNameForTask:(long long)arg1;
- (void)_logActivityForTask:(long long)arg1 interval:(unsigned long long)arg2 date:(id)arg3;
- (void)_logAllIntervalsForTask:(long long)arg1 date:(id)arg2;
- (void)_registerActivity:(long long)arg1 onDate:(id)arg2;
- (void)_sendDailyUsageForTask:(long long)arg1 date:(id)arg2;
- (void)_sendMonthlyUsageForTask:(long long)arg1 date:(id)arg2;
- (void)_sendWeeklyUsageForTask:(long long)arg1 date:(id)arg2;
- (void)_updateLastLoggedDate:(id)arg1 forTask:(long long)arg2;
- (id)activityLogger:(id)arg1 lastLoggedDateForTask:(long long)arg2;
- (void)activityLogger:(id)arg1 logAggregateUsageForInterval:(unsigned long long)arg2 date:(id)arg3;
- (void)activityLogger:(id)arg1 logUsageForTask:(long long)arg2 interval:(unsigned long long)arg3 date:(id)arg4;
- (void)activityLogger:(id)arg1 updateLastAggregateLogDate:(id)arg2;
- (void)activityLogger:(id)arg1 updateLastLoggedDate:(id)arg2 forTask:(long long)arg3;
- (id)delegate;
- (id)init;
- (id)lastAggregateLogDateForActivityLogger:(id)arg1;
- (void)registerActivity:(long long)arg1;
- (void)setDelegate:(id)arg1;

@end

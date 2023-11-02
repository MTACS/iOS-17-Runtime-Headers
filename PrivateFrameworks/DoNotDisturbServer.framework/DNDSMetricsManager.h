
@interface DNDSMetricsManager : NSObject {
    NSCalendar * _calendar;
    <DNDSBackingStore> * _metricsBackingStore;
    DNDSMutableMetricsRecord * _metricsRecord;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_aggregateMetricsWithEnabled:(bool)arg1 manuallyEnabled:(bool)arg2 numberOfNewSessions:(int)arg3 numberOfNewManualSessions:(int)arg4 controlCenterPhone:(bool)arg5 controlCenterWatch:(bool)arg6 type:(id)arg7 mode:(id)arg8 dayOfWeek:(id)arg9;
- (id)_calendar;
- (id)_dateForYesterday;
- (id)_dateFormatter;
- (id)_metricsDayStringForDate:(id)arg1;
- (id)_metricsMonthStringForDate:(id)arg1;
- (id)_metricsWeekStringForDate:(id)arg1;
- (void)_sendDailyHeartbeatIfNeeded;
- (void)_sendMonthlyHeartbeatIfNeeded;
- (void)_sendWeeklyHeartbeatIfNeeded;
- (id)_startOfLastMonth;
- (id)_startOfLastWeek;
- (id)_startOfMonthWithDate:(id)arg1;
- (id)_startOfWeekWithDate:(id)arg1;
- (void)_writeMetricsToStore:(id)arg1;
- (void)assertionTaken:(id)arg1 withClientDetails:(id)arg2 lockState:(unsigned long long)arg3;
- (id)init;
- (void)sendMetricsHeartbeatsIfNeeded;

@end

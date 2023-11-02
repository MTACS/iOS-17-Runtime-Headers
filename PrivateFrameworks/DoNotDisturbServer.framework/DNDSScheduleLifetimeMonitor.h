
@interface DNDSScheduleLifetimeMonitor : DNDSBaseLifetimeMonitor {
    NSCalendar * _calendar;
    NSDate * _lifetimeTimerFireDate;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic) <DNDSScheduleLifetimeMonitorDataSource> *dataSource;

+ (Class)lifetimeClass;

- (void).cxx_destruct;
- (id)_activeDateIntervalForScheduleLifetime:(id)arg1 assertion:(id)arg2 date:(id)arg3 ignoreMatchScheduleStartDate:(bool)arg4;
- (id)_activeDateIntervalForScheduleLifetime:(id)arg1 assertionStartDate:(id)arg2 date:(id)arg3 scheduleSettings:(id)arg4 calendar:(id)arg5 ignoreMatchScheduleStartDate:(bool)arg6;
- (id)activeDateIntervalForScheduleLifetime:(id)arg1 assertion:(id)arg2 date:(id)arg3;
- (id)calendar;
- (id)nextActiveDateIntervalForScheduleLifetime:(id)arg1 assertion:(id)arg2 date:(id)arg3;
- (void)setCalendar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;

@end

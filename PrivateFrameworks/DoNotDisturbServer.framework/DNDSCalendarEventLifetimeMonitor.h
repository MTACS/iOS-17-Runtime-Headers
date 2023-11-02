
@interface DNDSCalendarEventLifetimeMonitor : DNDSBaseLifetimeMonitor {
    EKEventStore * _eventStore;
    NSDate * _lifetimeTimerFireDate;
}

+ (Class)lifetimeClass;

- (void).cxx_destruct;
- (void)_calendarEventStoreChangedWithNotification:(id)arg1;
- (id)_eventForCalendarEventLifetime:(id)arg1 assertionStartDate:(id)arg2;
- (id)_eventStore;
- (id)_eventStoreCreatingIfNeeded;
- (id)activeDateIntervalForCalendarEventLifetime:(id)arg1 assertionStartDate:(id)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;

@end

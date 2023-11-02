
@interface PGMemoryTriggerUpcomingHoliday : PGHolidayMemoryTrigger {
    NSSet * _validHolidaysNames;
}

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)arg1 holidayService:(id)arg2;
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;
- (unsigned long long)triggerType;

@end

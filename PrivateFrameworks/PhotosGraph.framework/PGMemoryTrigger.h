
@interface PGMemoryTrigger : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) bool supportsFutureLookup;
@property (nonatomic, readonly) unsigned long long triggerType;

+ (id)dateNodesInGraph:(id)arg1 startDayOffset:(long long)arg2 endDayOffset:(long long)arg3 fromLocalDate:(id)arg4 inTimeZone:(id)arg5;
+ (id)localDateIntervalFromLocalDate:(id)arg1 startDayOffset:(long long)arg2 endDayOffset:(long long)arg3 inTimeZone:(id)arg4;
+ (id)memoryTriggerResultsForMemoryNodes:(id)arg1 withValidityInterval:(id)arg2;
+ (id)memoryTriggerResultsForMemoryNodesArray:(id)arg1 withValidityInterval:(id)arg2;
+ (id)monthDayCalendarUnitValuesForLocalDateInterval:(id)arg1;
+ (id)monthDayNodesInGraph:(id)arg1 startDayOffset:(long long)arg2 endDayOffset:(long long)arg3 fromLocalDate:(id)arg4 inTimeZone:(id)arg5;
+ (id)singleDayValidityIntervalWithContext:(id)arg1;
+ (id)stringFromTriggerType:(unsigned long long)arg1;
+ (unsigned long long)triggerTypeFromString:(id)arg1;
+ (id)validityIntervalForLocalStartDate:(id)arg1 localEndDate:(id)arg2 timeZone:(id)arg3;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLoggingConnection:(id)arg1;
- (id)loggingConnection;
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;
- (bool)supportsFutureLookup;
- (unsigned long long)triggerType;

@end

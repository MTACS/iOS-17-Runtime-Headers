
@interface CADStatsOccurrences : CADStatCollector {
    CalDateRange * _desiredOccurrenceRange;
    NSDate * _now;
    NSMutableArray * _occurrenceInfos;
}

+ (id)eventName;

- (void).cxx_destruct;
- (id)desiredOccurrenceRange;
- (id)eventDictionaries;
- (void)prepareWithContext:(id)arg1;
- (void)processOccurrences:(id)arg1;
- (bool)wantsOccurrences;

@end

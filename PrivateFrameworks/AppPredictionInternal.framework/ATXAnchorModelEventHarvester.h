
@interface ATXAnchorModelEventHarvester : NSObject

+ (id)deduplicatedActionEventsByIdFromActionEvents:(id)arg1;
+ (id)idsFromBiomeEvents:(id)arg1;
+ (id)idsFromDuetEvents:(id)arg1;
+ (id)negativeAppsGivenAllAppIds:(id)arg1 positiveAppIds:(id)arg2;
+ (id)randomSampleFromArray:(id)arg1 sampleSize:(unsigned long long)arg2;

- (id)fetchAppLaunchEventsAfterAnchorOccurrenceDate:(id)arg1 limit:(unsigned long long)arg2 maxSecondsBeforeAnchor:(long long)arg3 maxSecondsAfterAnchor:(long long)arg4 isIncluded:(id /* block */)arg5;
- (id)fetchEventsAfterAnchorOccurenceDate:(id)arg1 withBiomePublisher:(id)arg2 maxSecondsBeforeAnchor:(long long)arg3 maxSecondsAfterAnchor:(long long)arg4;
- (id)fetchEventsAfterAnchorOccurenceDate:(id)arg1 withBiomePublisher:(id)arg2 maxSecondsBeforeAnchor:(long long)arg3 maxSecondsAfterAnchor:(long long)arg4 isIncluded:(id /* block */)arg5;
- (id)fetchEventsAfterAnchorOccurrenceDate:(id)arg1 withDuetDataProviderClass:(Class)arg2 limit:(unsigned long long)arg3 maxSecondsBeforeAnchor:(long long)arg4 maxSecondsAfterAnchor:(long long)arg5 predicates:(id)arg6;
- (id)negativeActionsOnAnchorOccurrenceDate:(id)arg1 positiveActionEvents:(id)arg2;
- (id)negativeActionsOnAnchorOccurrenceDate:(id)arg1 positiveActionIds:(id)arg2;

@end

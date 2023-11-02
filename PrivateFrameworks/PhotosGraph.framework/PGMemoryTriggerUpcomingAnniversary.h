
@interface PGMemoryTriggerUpcomingAnniversary : PGMemoryTrigger

- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;
- (unsigned long long)triggerType;
- (id)upcomingAnniversaryDateFromLocalDate:(id)arg1 originalAnniversaryDate:(id)arg2;

@end

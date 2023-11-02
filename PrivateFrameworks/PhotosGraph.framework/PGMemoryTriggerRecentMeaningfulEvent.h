
@interface PGMemoryTriggerRecentMeaningfulEvent : PGMemoryTrigger

- (id)meaningNodesSupportedForTriggerInGraph:(id)arg1;
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;
- (unsigned long long)triggerType;

@end

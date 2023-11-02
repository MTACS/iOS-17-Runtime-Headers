
@interface PGMemoryTriggerRecentTrendsMoment : PGMemoryTrigger {
    PGGraphSceneFeatureNodeCollection * _trendsSceneFeatureNodes;
}

- (void).cxx_destruct;
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;
- (id)trendsSceneFeatureNodesInGraph:(id)arg1;
- (unsigned long long)triggerType;

@end

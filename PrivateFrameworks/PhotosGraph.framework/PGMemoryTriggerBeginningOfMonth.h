
@interface PGMemoryTriggerBeginningOfMonth : PGMemoryTrigger {
    PGMemoryMomentNodesWithBlockedFeatureCache * _momentNodesWithBlockedFeatureCache;
}

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)arg1 momentNodesWithBlockedFeatureCache:(id)arg2;
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;
- (unsigned long long)triggerType;

@end

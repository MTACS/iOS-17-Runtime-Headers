
@interface PGMemoryTriggerRecentBreakoutOfRoutine : PGMemoryTrigger {
    PGNeighborScoreComputer * _neighborScoreComputer;
}

- (void).cxx_destruct;
- (id)neighborScoreComputerWithGraph:(id)arg1;
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;
- (unsigned long long)triggerType;

@end

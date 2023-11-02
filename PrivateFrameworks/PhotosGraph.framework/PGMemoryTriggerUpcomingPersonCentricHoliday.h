
@interface PGMemoryTriggerUpcomingPersonCentricHoliday : PGHolidayMemoryTrigger {
    PGGraphMemoryNodeCollection * _allSingleMomentMemoryNodes;
    PGGraphMemoryNodeCollection * _singleMomentMemoryNodesWithFather;
    PGGraphMemoryNodeCollection * _singleMomentMemoryNodesWithMother;
    PGGraphMemoryNodeCollection * _singleMomentMemoryNodesWithPartner;
}

- (void).cxx_destruct;
- (id)allSingleMomentMemoryNodesInGraph:(id)arg1;
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;
- (id)singleMomentMemoryNodesWithRelevantPersonNodes:(id)arg1 inGraph:(id)arg2;
- (unsigned long long)triggerType;

@end


@interface PGMemoryTriggerRecentSyndicatedAssets : PGPhotoKitMemoryTrigger {
    PGMemoryMomentNodesWithBlockedFeatureCache * _momentNodesWithBlockedFeatureCache;
}

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)arg1 photoLibrary:(id)arg2 momentNodesWithBlockedFeatureCache:(id)arg3;
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;
- (bool)supportsFutureLookup;
- (unsigned long long)triggerType;

@end

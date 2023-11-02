
@interface HealthMedicationsUI.OntologyShardStateObserver : _TtCs12_SwiftObject <HKOntologyStoreObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isImported;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _shardState;
    void identifier;
    void ontologyStore;
    void settingsManager;
}

- (void)ontologyStore:(id)arg1 didImportEntry:(id)arg2;
- (void)ontologyStore:(id)arg1 didStageEntry:(id)arg2;
- (void)ontologyStoreDidReconnect:(id)arg1;

@end

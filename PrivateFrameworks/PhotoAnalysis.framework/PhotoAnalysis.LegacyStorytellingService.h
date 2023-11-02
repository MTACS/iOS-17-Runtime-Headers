
@interface PhotoAnalysis.LegacyStorytellingService : _TtCs12_SwiftObject <PLPhotoAnalysisGenericServiceProtocol, PLPhotoAnalysisJobServiceProtocol> {
    void currentTaskIdentifiers;
    void identifier;
    void operationID;
    void operationManager;
    void stateHolder;
    void worker;
}

- (void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)writeQALog:(id)arg1;

@end

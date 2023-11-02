
@interface SiriPrivateLearningAnalytics.GroundTruthModelV3toV4CoreDataMigration : NSEntityMigrationPolicy {
    void messagesDomainEnumValue;
    void messagesGroundTruthName;
    void messagesSiriKitTaskName;
    void promptGroundTruthName;
    void promptTaskAttribute;
    void suggestionOutcomDomainAttribute;
    void suggestionOutcomeGroundTruthName;
}

- (void).cxx_destruct;
- (bool)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4;
- (id)init;

@end


@interface HDOntologyMedsEducationFeatureEvaluator : HDOntologyMedicationFeatureEvaluator <HDMedicationCountObserver, HDOntologyFeatureEvaluator> {
    <HDMedicationCountProvider> * _medicationCountProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)featureIdentifier;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (id)initWithDaemon:(id)arg1 medicationCountProvider:(id)arg2;
- (void)medicationCountProvider:(id)arg1 didObserveChangeForProfile:(id)arg2 ontologyBackedMedicationCount:(long long)arg3;
- (void)registerRequiredObserversForProfile:(id)arg1 queue:(id)arg2;
- (long long)requiresFeatureShardForProfile:(id)arg1;

@end

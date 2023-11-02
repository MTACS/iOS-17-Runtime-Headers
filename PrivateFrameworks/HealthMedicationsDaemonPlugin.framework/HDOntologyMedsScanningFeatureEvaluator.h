
@interface HDOntologyMedsScanningFeatureEvaluator : HDOntologyMedicationFeatureEvaluator <HDOntologyFeatureEvaluator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)minimumTimeToLive;

- (id)featureIdentifier;
- (id)init;
- (void)registerRequiredObserversForProfile:(id)arg1 queue:(id)arg2;
- (long long)requiresFeatureShardForProfile:(id)arg1;

@end

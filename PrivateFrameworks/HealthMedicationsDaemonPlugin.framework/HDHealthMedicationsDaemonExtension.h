
@interface HDHealthMedicationsDaemonExtension : NSObject <HDHealthDaemonExtension> {
    HDOntologyCoreMedsFeatureEvaluator * _coreMedsFeatureEvaluator;
    HDDaemon * _daemon;
    HDDrugInteractionFactorStateProvider * _drugInteractionStateProvider;
    HDOntologyInteractionsFeatureEvaluator * _interactionsFeatureEvaluator;
    HDMedicationCountProvider * _medicationCountProvider;
    HKMedicationsBehavior * _medicationsBehavior;
    HDOntologyMedsEducationFeatureEvaluator * _medsEducationFeatureEvaluator;
    HDOntologyMedsScanningFeatureEvaluator * _medsScanningFeatureEvaluator;
    HDMedicationPeriodicScheduler * _periodicScheduler;
}

@property (nonatomic, readonly) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKMedicationsBehavior *medicationsBehavior;
@property (nonatomic, readonly) NSArray *ontologyFeatureEvaluators;
@property (nonatomic, readonly) HDMedicationPeriodicScheduler *periodicScheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)daemon;
- (bool)daemonDidReceiveNotification:(const char *)arg1;
- (id)init;
- (id)initWithHealthDaemon:(id)arg1;
- (id)medicationsBehavior;
- (id)ontologyFeatureEvaluators;
- (id)periodicScheduler;

@end


@interface HDMHPromptedAssessmentsManager : NSObject <HDMHLoggingPatternEscalationsManagerObserver, HDMHPeriodicPromptedAssessmentsManagerObserver, HKFeatureStatusProvidingObserver> {
    HKFeatureStatusManager * _loggingPatternEscalationsFeatureStatusManager;
    HDMHLoggingPatternEscalationsManager * _loggingPatternEscalationsManager;
    HKObserverSet * _observers;
    HKFeatureStatusManager * _periodicAssessmentsFeatureStatusManager;
    HDMHPeriodicPromptedAssessmentsManager * _periodicAssessmentsManager;
    HDProfile * _profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKFeatureStatusManager *loggingPatternEscalationsFeatureStatusManager;
@property (nonatomic, readonly) HDMHLoggingPatternEscalationsManager *loggingPatternEscalationsManager;
@property (nonatomic, readonly) HKObserverSet *observers;
@property (nonatomic, readonly) HKFeatureStatusManager *periodicAssessmentsFeatureStatusManager;
@property (nonatomic, readonly) HDMHPeriodicPromptedAssessmentsManager *periodicAssessmentsManager;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyObserversForPromptedAssessmentsUpdate;
- (void)_startObserving;
- (void)_stopObserving;
- (void)dealloc;
- (void)featureStatusProviding:(id)arg1 didUpdateFeatureStatus:(id)arg2;
- (id)initWithProfile:(id)arg1 periodicAssessmentsAvailability:(id)arg2 loggingPatternEscalationsAvailability:(id)arg3;
- (id)initWithProfile:(id)arg1 periodicAssessmentsAvailability:(id)arg2 loggingPatternEscalationsAvailability:(id)arg3 periodicAssessmentsManager:(id)arg4 loggingPatternEscalationsManager:(id)arg5;
- (id)loggingPatternEscalationsFeatureStatusManager;
- (id)loggingPatternEscalationsManager;
- (void)loggingPatternEscalationsManagerDidUpdatePromptedAssessment:(id)arg1;
- (id)observers;
- (id)periodicAssessmentsFeatureStatusManager;
- (id)periodicAssessmentsManager;
- (void)periodicPromptedAssessmentsManagerDidUpdatePromptedAssessment:(id)arg1;
- (id)profile;
- (id)promptedAssessmentsWithError:(id*)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end

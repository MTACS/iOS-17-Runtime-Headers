
@interface CHCompanionWidgetSchedulingManager : NSObject <HDDataObserver, HDProfileReadyObserver, HDUserCharacteristicsProfileObserver> {
    HDProfile * _profile;
    int  _standalonePhoneFitnessModeChangeToken;
    long long  _wheelchairUse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_currentWheelchairUse;
- (void)_donateRelevance;
- (void)_reloadWidgetTimelines;
- (void)_startObservingStandalonePhoneFitnessMode;
- (void)_startObservingUserCharacteristics;
- (void)_startObservingWorkouts;
- (void)_stopObservingStandalonePhoneFitnessMode;
- (void)_stopObservingUserCharacteristics;
- (void)_stopObservingWorkouts;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)userCharacteristicsManager:(id)arg1 didUpdateUserProfile:(id)arg2;

@end

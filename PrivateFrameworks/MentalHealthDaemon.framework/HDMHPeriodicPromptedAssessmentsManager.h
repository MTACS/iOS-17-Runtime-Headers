
@interface HDMHPeriodicPromptedAssessmentsManager : NSObject <HDDataObserver> {
    NSUserDefaults * _cadenceOverrideDefaults;
    HKObserverSet * _observers;
    HDProfile * _profile;
    NSDate * _unitTest_currentDate;
    NSCalendar * _unitTest_gregorianCalendar;
}

@property (nonatomic, retain) NSUserDefaults *cadenceOverrideDefaults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKObserverSet *observers;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *unitTest_currentDate;
@property (nonatomic, copy) NSCalendar *unitTest_gregorianCalendar;

- (void).cxx_destruct;
- (id)_currentDate;
- (id)_currentGregorianCalendar;
- (id)_lastPromptAcknowledgmentDateWithFeatureSettings:(id)arg1;
- (id)_mostRecentAssessmentDateWithError:(id*)arg1;
- (id)_mostRecentAssessmentInteractionDateWithFeatureSettings:(id)arg1 error:(id*)arg2;
- (id)_mostRecentSampleStartDateForSampleType:(id)arg1 error:(id*)arg2;
- (void)_notifyObserversForPromptedAssessmentUpdate;
- (long long)_periodicAssessmentPromptCadenceInDays;
- (id)_promptedAssessmentEligibilityStartDateWithFeatureStatus:(id)arg1 error:(id*)arg2;
- (void)_startObserving;
- (void)_stopObserving;
- (id)cadenceOverrideDefaults;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observers;
- (id)profile;
- (bool)promptedAssessment:(id*)arg1 featureStatus:(id)arg2 error:(id*)arg3;
- (void)registerObserver:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setCadenceOverrideDefaults:(id)arg1;
- (void)setUnitTest_currentDate:(id)arg1;
- (void)setUnitTest_gregorianCalendar:(id)arg1;
- (id)unitTest_currentDate;
- (id)unitTest_gregorianCalendar;
- (void)unregisterObserver:(id)arg1;

@end


@interface HDMHLoggingPatternEscalationsManager : NSObject <HDDataObserver> {
    HKObserverSet * _observers;
    HDProfile * _profile;
    NSDate * _unitTest_currentDate;
    NSCalendar * _unitTest_gregorianCalendar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKObserverSet *observers;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *unitTest_currentDate;
@property (nonatomic, copy) NSCalendar *unitTest_gregorianCalendar;

- (void).cxx_destruct;
- (bool)_areEscalationsSnoozedWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 featureSettings:(id)arg3;
- (bool)_areEscalationsSupportedAndNotSnoozedWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 featureStatus:(id)arg3;
- (id)_currentDate;
- (id)_currentGregorianCalendar;
- (id)_lastEscalationAcknowledgmentDateWithFeatureSettings:(id)arg1;
- (void)_notifyObserversForPromptedAssessmentUpdate;
- (void)_startObserving;
- (void)_stopObserving;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)observers;
- (id)profile;
- (bool)promptedAssessment:(id*)arg1 featureStatus:(id)arg2 pendingStateOfMind:(id)arg3 error:(id*)arg4;
- (void)registerObserver:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setUnitTest_currentDate:(id)arg1;
- (void)setUnitTest_gregorianCalendar:(id)arg1;
- (id)unitTest_currentDate;
- (id)unitTest_gregorianCalendar;
- (void)unregisterObserver:(id)arg1;

@end

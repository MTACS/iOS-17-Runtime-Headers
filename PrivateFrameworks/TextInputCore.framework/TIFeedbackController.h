
@interface TIFeedbackController : NSObject {
    NSString * _completionEventTimestampKey;
    NSString * _countsRetainedKey;
    NSString * _feedbackFeatureEnabledKey;
    NSString * _finalInputModesKey;
    NSString * _finalPreferenceValueKey;
    NSString * _finalTimestampKey;
    NSString * _initialInputModesKey;
    NSString * _initialPreferenceValueKey;
    NSString * _initialTimestampKey;
    NSString * _initiationEventTimestampKey;
    NSString * _preferenceKey;
    NSString * _stateKey;
    NSArray * _supportedLanguages;
    NSString * _surveyOutcomeKey;
}

@property (nonatomic, readonly) NSString *completionEventTimestampKey;
@property (nonatomic, readonly) NSString *countsRetainedKey;
@property (nonatomic, readonly) NSString *feedbackFeatureEnabledKey;
@property (nonatomic, readonly) NSString *finalInputModesKey;
@property (nonatomic, readonly) NSString *finalPreferenceValueKey;
@property (nonatomic, readonly) NSString *finalTimestampKey;
@property (nonatomic, readonly) NSString *initialInputModesKey;
@property (nonatomic, readonly) NSString *initialPreferenceValueKey;
@property (nonatomic, readonly) NSString *initialTimestampKey;
@property (nonatomic, readonly) NSString *initiationEventTimestampKey;
@property (nonatomic, readonly) NSString *preferenceKey;
@property (nonatomic, readonly) NSString *stateKey;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) NSString *surveyOutcomeKey;

- (void).cxx_destruct;
- (id)completionEventTimestamp;
- (id)completionEventTimestampKey;
- (id)computeRandomizedTimeIntervalFromTimestamp:(id)arg1;
- (bool)countsRetained;
- (id)countsRetainedKey;
- (id)currentInputModes;
- (bool)currentPreferenceValue;
- (long long)currentState;
- (void)dispatchScheduledEventsWithDelegate:(id)arg1;
- (void)dispatchScheduledInitiationAndCompletionEventsImmediatelyWithDelegate:(id)arg1;
- (void)dispatchScheduledInitiationAndTerminationEventsImmediatelyWithDelegate:(id)arg1;
- (bool)feedbackFeatureEnabled;
- (id)feedbackFeatureEnabledKey;
- (id)finalInputModes;
- (id)finalInputModesKey;
- (bool)finalPreferenceValue;
- (id)finalPreferenceValueKey;
- (id)finalTimestamp;
- (id)finalTimestampKey;
- (void)handleFeedbackActionsWithDelegate:(id)arg1;
- (id)initWithPreferenceKey:(id)arg1 supportedLanguages:(id)arg2;
- (id)initialInputModes;
- (id)initialInputModesKey;
- (bool)initialPreferenceValue;
- (id)initialPreferenceValueKey;
- (id)initialTimestamp;
- (id)initialTimestampKey;
- (id)initiationEventTimestamp;
- (id)initiationEventTimestampKey;
- (bool)isEligibleDevice;
- (id)preferenceKey;
- (void)scheduleCompletionEvent;
- (void)scheduleInitiationEvent;
- (void)setCompletionState;
- (void)setInitiationState;
- (void)setTerminationStateWithValue:(long long)arg1;
- (id)stateKey;
- (id)supportedLanguages;
- (long long)surveyOutcome;
- (id)surveyOutcomeKey;
- (void)updateStateWithValue:(long long)arg1;
- (bool)wasSurveySubmitted;

@end

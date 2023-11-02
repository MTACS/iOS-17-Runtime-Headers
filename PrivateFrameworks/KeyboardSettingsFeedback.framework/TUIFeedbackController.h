
@interface TUIFeedbackController : NSObject {
    NSString * _feedbackFeatureEnabledKey;
    _TtC24KeyboardSettingsFeedback26TUIFeedbackSurveyPresenter * _feedbackSurveyPresenter;
    NSString * _finalInputModesKey;
    NSString * _finalPreferenceValueKey;
    NSString * _finalTimestampKey;
    NSString * _initialInputModesKey;
    NSString * _initialPreferenceValueKey;
    NSString * _initialTimestampKey;
    NSString * _preferenceKey;
    NSString * _stateKey;
    NSArray * _supportedLanguages;
    NSString * _surveyOutcomeKey;
}

@property (nonatomic, readonly) NSString *feedbackFeatureEnabledKey;
@property (nonatomic, readonly) _TtC24KeyboardSettingsFeedback26TUIFeedbackSurveyPresenter *feedbackSurveyPresenter;
@property (nonatomic, readonly) NSString *finalInputModesKey;
@property (nonatomic, readonly) NSString *finalPreferenceValueKey;
@property (nonatomic, readonly) NSString *finalTimestampKey;
@property (nonatomic, readonly) NSString *initialInputModesKey;
@property (nonatomic, readonly) NSString *initialPreferenceValueKey;
@property (nonatomic, readonly) NSString *initialTimestampKey;
@property (nonatomic, readonly) NSString *preferenceKey;
@property (nonatomic, readonly) NSString *stateKey;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) NSString *surveyOutcomeKey;

+ (id)controllerWithPreferenceKey:(id)arg1 supportedLanguages:(id)arg2;

- (void).cxx_destruct;
- (void)_presentSurveyWithParentController:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateStudyDataWithFinalPreferenceValue:(bool)arg1 finalTimestamp:(id)arg2;
- (void)_updateStudyDataWithSurveyOutcome:(long long)arg1 surveyError:(id)arg2 initialState:(long long)arg3;
- (id)build;
- (void)completeStudyWithFinalPreferenceValue:(bool)arg1 parentController:(id)arg2;
- (id)computeSurveyMetadata;
- (id)currentInputModes;
- (bool)feedbackFeatureEnabled;
- (id)feedbackFeatureEnabledKey;
- (id)feedbackSurveyPresenter;
- (id)finalInputModes;
- (id)finalInputModesKey;
- (bool)finalPreferenceValue;
- (id)finalPreferenceValueKey;
- (id)finalTimestamp;
- (id)finalTimestampKey;
- (id)initWithPreferenceKey:(id)arg1 supportedLanguages:(id)arg2;
- (id)initialInputModes;
- (id)initialInputModesKey;
- (bool)initialPreferenceValue;
- (id)initialPreferenceValueKey;
- (id)initialTimestamp;
- (id)initialTimestampKey;
- (bool)isEligibleDevice;
- (id)model;
- (id)preferenceKey;
- (bool)shouldCompleteStudyWithPreferenceValue:(bool)arg1;
- (id)stateKey;
- (id)supportedLanguages;
- (id)surveyOutcomeKey;

@end


@interface TIProactiveQuickTypeManager : NSObject <TIKeyboardActivityObserving, TIProactiveQuickTypeManaging> {
    <_ICPredictionManaging> * _inputContextPredictionManager;
    NSDate * _lastSuggestionTime;
    TIProactiveTrigger * _lastTriggerForSuggestion;
    NSString * _maxLengthProactiveCandidate;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _textBeforeLength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)buildSecureCandidateForTestFrom:(id)arg1 withSecureCandidateRenderer:(id)arg2 input:(id)arg3;
+ (id)buildSecureCandidateFrom:(id)arg1 withSecureCandidateRenderer:(id)arg2 input:(id)arg3;
+ (id)proactiveTriggerForTextContentType:(id)arg1;
+ (id)proactiveTriggerForTextContentType:(id)arg1 withContextBeforeInput:(id)arg2 autofillMode:(unsigned long long)arg3;
+ (void)setSharedTIProactiveQuickTypeManager:(id)arg1;
+ (id)sharedInstance;
+ (id)singletonInstance;

- (void).cxx_destruct;
- (id)_makeQueue;
- (void)addToTypologyTrace:(id /* block */)arg1 withTriggerSource:(id)arg2 withTriggerType:(id)arg3 withTriggerSubType:(id)arg4 withPredictionResults:(id)arg5 withFirstTrigger:(id)arg6;
- (void)dealloc;
- (void)generateAndRenderProactiveSuggestionsForInput:(id)arg1 withKeyboardState:(id)arg2 withAdditionalPredictions:(id)arg3 withSecureCandidateRenderer:(id)arg4 withRenderTraits:(id)arg5 withInput:(id)arg6 withRecipient:(id)arg7 withApplication:(id)arg8 withLocale:(id)arg9 nextInputWillInsertAutospace:(bool)arg10 withIsResponseDenyListed:(bool)arg11 withShouldDisableAutoCaps:(bool)arg12 withAvailableApps:(id)arg13 logBlock:(id /* block */)arg14 async:(bool)arg15 completion:(id /* block */)arg16;
- (id)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4;
- (void)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4 async:(bool)arg5 completion:(id /* block */)arg6;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withKeyboardState:(id)arg2 withAdditionalPredictions:(id)arg3 withSecureCandidateRenderer:(id)arg4 withRenderTraits:(id)arg5 withInput:(id)arg6 withRecipient:(id)arg7 withApplication:(id)arg8 withLocale:(id)arg9 nextInputWillInsertAutospace:(bool)arg10 withAvailableApps:(id)arg11 logBlock:(id /* block */)arg12;
- (id)getLastSuggestionTime;
- (id)init;
- (id)initWithICManager:(id)arg1;
- (bool)isAutoCompleteEnabled;
- (bool)isAutoPopupEnabled;
- (bool)isEnabled;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)loggingProactiveEngagementMetric:(unsigned long long)arg1 withLocale:(id)arg2 fieldType:(id)arg3;
- (unsigned long long)matchProactiveCandidateToUserInput:(id)arg1 userInput:(id)arg2;
- (void)propogateMetrics:(id)arg1 data:(id)arg2;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (id)renderItems:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5;
- (void)reset;
- (id)searchForMeCardEmailAddresses;
- (id)searchForMeCardRegions;
- (void)suggestionAccepted:(id)arg1 fieldType:(id)arg2;
- (void)suggestionNotAccepted:(id)arg1;
- (bool)usePQT2Flow;
- (void)userActionWithNoNewTriggers:(id)arg1 fieldType:(id)arg2;

@end

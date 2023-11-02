
@interface TIProactiveQuickTypeManagerMock : NSObject <TIProactiveQuickTypeManaging> {
    NSMutableDictionary * _metrics;
}

@property (retain) NSDictionary *metrics;

- (void).cxx_destruct;
- (void)generateAndRenderProactiveSuggestionsForInput:(id)arg1 withKeyboardState:(id)arg2 withAdditionalPredictions:(id)arg3 withSecureCandidateRenderer:(id)arg4 withRenderTraits:(id)arg5 withInput:(id)arg6 withRecipient:(id)arg7 withApplication:(id)arg8 withLocale:(id)arg9 nextInputWillInsertAutospace:(bool)arg10 withIsResponseDenyListed:(bool)arg11 withShouldDisableAutoCaps:(bool)arg12 withAvailableApps:(id)arg13 logBlock:(id /* block */)arg14 async:(bool)arg15 completion:(id /* block */)arg16;
- (id)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4;
- (void)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4 async:(bool)arg5 completion:(id /* block */)arg6;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withKeyboardState:(id)arg2 withAdditionalPredictions:(id)arg3 withSecureCandidateRenderer:(id)arg4 withRenderTraits:(id)arg5 withInput:(id)arg6 withRecipient:(id)arg7 withApplication:(id)arg8 withLocale:(id)arg9 isContinuousPath:(bool)arg10 withAvailableApps:(id)arg11 logBlock:(id /* block */)arg12;
- (void)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withKeyboardState:(id)arg2 withAdditionalPredictions:(id)arg3 withSecureCandidateRenderer:(id)arg4 withRenderTraits:(id)arg5 withInput:(id)arg6 withRecipient:(id)arg7 withApplication:(id)arg8 withLocale:(id)arg9 isContinuousPath:(bool)arg10 withAvailableApps:(id)arg11 logBlock:(id /* block */)arg12 async:(bool)arg13 completion:(id /* block */)arg14;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withKeyboardState:(id)arg2 withAdditionalPredictions:(id)arg3 withSecureCandidateRenderer:(id)arg4 withRenderTraits:(id)arg5 withInput:(id)arg6 withRecipient:(id)arg7 withApplication:(id)arg8 withLocale:(id)arg9 nextInputWillInsertAutospace:(bool)arg10 withAvailableApps:(id)arg11 logBlock:(id /* block */)arg12;
- (id)getMeCardEmailAddresses;
- (id)init;
- (bool)isAutoCompleteEnabled;
- (bool)isAutoPopupEnabled;
- (bool)isEnabled;
- (id)metrics;
- (void)propogateMetrics:(id)arg1 data:(id)arg2;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)reset;
- (id)searchForMeCardEmailAddresses;
- (id)searchForMeCardRegions;
- (void)setMetrics:(id)arg1;
- (void)suggestionAccepted:(id)arg1 fieldType:(id)arg2;
- (void)suggestionNotAccepted:(id)arg1;
- (bool)usePQT2Flow;
- (void)userActionWithNoNewTriggers:(id)arg1 fieldType:(id)arg2;

@end

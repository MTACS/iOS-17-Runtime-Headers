
@protocol TIProactiveQuickTypeManaging

@required

- (void)generateAndRenderProactiveSuggestionsForInput:(void *)arg1 withKeyboardState:(void *)arg2 withAdditionalPredictions:(void *)arg3 withSecureCandidateRenderer:(void *)arg4 withRenderTraits:(void *)arg5 withInput:(void *)arg6 withRecipient:(void *)arg7 withApplication:(void *)arg8 withLocale:(void *)arg9 nextInputWillInsertAutospace:(void *)arg10 withIsResponseDenyListed:(void *)arg11 withShouldDisableAutoCaps:(void *)arg12 withAvailableApps:(void *)arg13 logBlock:(void *)arg14 async:(void *)arg15 completion:(void *)arg16; // needs 16 arg types, found 26: NSArray *, TIKeyboardState *, NSArray *, TIKeyboardSecureCandidateRenderer *, TIKeyboardSecureCandidateRenderTraits *, NSString *, NSString *, NSString *, NSString *, bool, bool, bool, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, bool, id /* block */, void*, void, id /* block */, NSArray *, void*
- (NSArray *)generateAndRenderProactiveSuggestionsWithInput:(NSString *)arg1 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg2 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg3 textContentType:(NSString *)arg4;
- (void)generateAndRenderProactiveSuggestionsWithInput:(void *)arg1 withSecureCandidateRenderer:(void *)arg2 withRenderTraits:(void *)arg3 textContentType:(void *)arg4 async:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NSString *, TIKeyboardSecureCandidateRenderer *, TIKeyboardSecureCandidateRenderTraits *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (NSArray *)generateAndRenderProactiveSuggestionsWithTriggers:(void *)arg1 withKeyboardState:(void *)arg2 withAdditionalPredictions:(void *)arg3 withSecureCandidateRenderer:(void *)arg4 withRenderTraits:(void *)arg5 withInput:(void *)arg6 withRecipient:(void *)arg7 withApplication:(void *)arg8 withLocale:(void *)arg9 nextInputWillInsertAutospace:(void *)arg10 withAvailableApps:(void *)arg11 logBlock:(void *)arg12; // needs 12 arg types, found 17: NSArray *, TIKeyboardState *, NSArray *, TIKeyboardSecureCandidateRenderer *, TIKeyboardSecureCandidateRenderTraits *, NSString *, NSString *, NSString *, NSString *, bool, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (bool)isAutoCompleteEnabled;
- (bool)isAutoPopupEnabled;
- (bool)isEnabled;
- (void)propogateMetrics:(NSString *)arg1 data:(NSDictionary *)arg2;
- (void)provideFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)reset;
- (NSArray *)searchForMeCardEmailAddresses;
- (NSArray *)searchForMeCardRegions;
- (void)suggestionAccepted:(NSString *)arg1 fieldType:(NSString *)arg2;
- (void)suggestionNotAccepted:(NSArray *)arg1;
- (bool)usePQT2Flow;
- (void)userActionWithNoNewTriggers:(NSString *)arg1 fieldType:(NSString *)arg2;

@end

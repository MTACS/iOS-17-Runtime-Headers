
@protocol TIAppAutofillManaging <NSObject>

@required

- (void)generateAutofillFormCandidatesWithRenderTraits:(void *)arg1 withKeyboardState:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: TIKeyboardSecureCandidateRenderTraits *, TIKeyboardState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)generateAutofillFormSuggestedUsernameWithRenderTraits:(void *)arg1 withKeyboardState:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: TIKeyboardSecureCandidateRenderTraits *, TIKeyboardState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)generateJustHMEAutofillFormSuggestionWithRenderTraits:(void *)arg1 withKeyboardState:(void *)arg2 applicationID:(void *)arg3 applicationBundleID:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: TIKeyboardSecureCandidateRenderTraits *, TIKeyboardState *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIKeyboardCandidate *, void*
- (NSArray *)generateOneTimeCodeCandidatesWithRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg1 withKeyboardState:(TIKeyboardState *)arg2;
- (bool)hasOneTimeCode;
- (void)obtainCredential:(SFSafariCredential *)arg1;
- (void)presentHideMyEmailUI:(void *)arg1 keyboardState:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: TIKeyboardCandidate *, TIKeyboardState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIKeyboardCandidate *, void*
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(TIKeyboardState *)arg1;
- (void)reset;
- (TIKeyboardSecureCandidateRenderer *)secureCandidateRenderer;
- (void)shouldAcceptAutofill:(void *)arg1 withPayload:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: TIKeyboardCandidate *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)shouldAcceptOneTimeCode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: TIKeyboardCandidate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end


@interface AFSuggestionGenerationManager : NSObject {
    <_ICPredictionManaging> * _inputContextPredictionManager;
    LAContext * _laContext;
    AFLocalizationManager * _localizationManager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) AFLocalizationManager *localizationManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_authenticateIfNecessaryForCreditCardSuggestion:(id)arg1 withPayload:(id)arg2 documentTraits:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_makeQueue;
- (void)authenticateIfNecessaryForSuggestion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateIfNecessaryForSuggestion:(id)arg1 documentTraits:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateAutoFillSuggestionsWithAutoFillMode:(unsigned long long)arg1 textPrefix:(id)arg2 documentTraits:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)generateContactAutoFillSuggestionsWithTextPrefix:(id)arg1 documentTraits:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateCreditCardAutoFillWithCompletionHandler:(id /* block */)arg1;
- (id)generateSuggestionsForContactAutoFill:(id)arg1 textPrefix:(id)arg2;
- (id)initPrivate;
- (id)localizationManager;
- (bool)needContactAutofill:(unsigned long long)arg1;
- (void)shouldAcceptSuggestion:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)shouldAuthenticateToAcceptAutoFill;

@end

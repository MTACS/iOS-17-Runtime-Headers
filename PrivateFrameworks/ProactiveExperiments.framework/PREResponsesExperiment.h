
@interface PREResponsesExperiment : NSObject {
    NSUserDefaults * _defaults;
    PREPredictionExemptTermsDetector * _exemptTermsDetector;
    <PREExperimentResolverProtocol> * _experimentResolver;
    _PASLock * _guardedCachedResponsesGeneratedEvent;
    bool  _includeCannedResponses;
    bool  _includeCustomResponses;
    bool  _includeResponsesToRobots;
    <PREResponsesMetricsProtocol> * _metrics;
    bool  _registerDisplayed;
    _PASLRUCache * _responsesGeneratedCache;
    RKMessageResponseManager * _rkClient;
    TIPreferencesController * _tiPreferencesController;
    bool  _useResponseKitAsFallback;
    <PREResponsesProtocol> * _xpcClient;
}

@property (nonatomic) bool includeCannedResponses;
@property (nonatomic) bool includeCustomResponses;
@property (nonatomic) bool includeResponsesToRobots;
@property (nonatomic) bool registerDisplayed;
@property (nonatomic) bool useResponseKitAsFallback;

+ (id)_cannedRepliesForLanguage:(id)arg1 inputPreferences:(id)arg2;
+ (id)_getConversationHistoryFromRequest:(id)arg1;
+ (id)_getFormattedPREResponseItems:(id)arg1 inputPreferences:(id)arg2;
+ (id)_inputMethodStringFrom:(int)arg1;
+ (bool)_isPreferredLocaleValid:(id)arg1;
+ (bool)_isStringEmpty:(id)arg1;
+ (int)_preInputMethodFrom:(id)arg1;
+ (id)_rawStringsForMessages:(id)arg1 excludingTapBacks:(bool)arg2;
+ (bool)_shouldInsertSuggestion:(id)arg1 forExistingSuggestions:(id)arg2;
+ (id)_suggestionsWithDynamicResponseItems:(id)arg1 cannedResponseItems:(id)arg2 inputPreferences:(id)arg3;
+ (id)sharedManager;
+ (id)stringArrayFromPreResponseItems:(id)arg1;

- (void).cxx_destruct;
- (id)_responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 outgoingMessageHistory:(id)arg3 forConversationHistory:(id)arg4 forContext:(id)arg5 time:(id)arg6 withLanguage:(id)arg7 languageLastChangedDate:(id)arg8 recipientHandles:(id)arg9 options:(unsigned long long)arg10 preferredLocale:(id)arg11;
- (void)_responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 outgoingMessageHistory:(id)arg3 forConversationHistory:(id)arg4 forContext:(id)arg5 time:(id)arg6 withLanguage:(id)arg7 languageLastChangedDate:(id)arg8 recipientHandles:(id)arg9 options:(unsigned long long)arg10 preferredLocale:(id)arg11 completionBlock:(id /* block */)arg12;
- (id)activeExperimentNameForLanguage:(id)arg1;
- (id)cacheKeyForMessage:(id)arg1 maxResponses:(unsigned long long)arg2 time:(id)arg3 language:(id)arg4;
- (id)cachedResponsesGeneratedEvent;
- (id)clippedMessageIfNecessary:(id)arg1;
- (id)fullNonEditableSuggestionsListForMessage:(id)arg1 context:(id)arg2 additionalSenderMessages:(id)arg3 date:(id)arg4 keyboardLanguageID:(id)arg5 keyboardLanguageLastChangedDate:(id)arg6 recipients:(id)arg7 includeDynamicSuggestions:(bool)arg8;
- (void)fullNonEditableSuggestionsListForMessage:(id)arg1 context:(id)arg2 additionalSenderMessages:(id)arg3 date:(id)arg4 keyboardLanguageID:(id)arg5 keyboardLanguageLastChangedDate:(id)arg6 recipients:(id)arg7 includeDynamicSuggestions:(bool)arg8 completion:(id /* block */)arg9;
- (id)handlesFromRecipients:(id)arg1;
- (bool)includeCannedResponses;
- (bool)includeCustomResponses;
- (bool)includeResponsesToRobots;
- (id)init;
- (id)initWithExperimentResolver:(id)arg1 metricsClient:(id)arg2 xpcClient:(id)arg3 rkClient:(id)arg4 tiPreferencesController:(id)arg5;
- (unsigned long long)mode;
- (id)nonEditableSuggestionsForMessage:(id)arg1 messageDate:(id)arg2 senderID:(id)arg3 recipientHandles:(id)arg4 outgoingMessageHistory:(id)arg5 keyboardLanguageID:(id)arg6 keyboardLanguageLastChangedDate:(id)arg7 includeDynamicSuggestions:(bool)arg8;
- (void)nonEditableSuggestionsForMessage:(id)arg1 messageDate:(id)arg2 senderID:(id)arg3 recipientHandles:(id)arg4 outgoingMessageHistory:(id)arg5 keyboardLanguageID:(id)arg6 keyboardLanguageLastChangedDate:(id)arg7 includeDynamicSuggestions:(bool)arg8 completion:(id /* block */)arg9;
- (id)nonEditableSuggestionsForMessage:(id)arg1 messageDate:(id)arg2 senderID:(id)arg3 recipients:(id)arg4 outgoingMessageHistory:(id)arg5 keyboardLanguageID:(id)arg6 keyboardLanguageLastChangedDate:(id)arg7 includeDynamicSuggestions:(bool)arg8;
- (void)nonEditableSuggestionsForMessage:(id)arg1 messageDate:(id)arg2 senderID:(id)arg3 recipients:(id)arg4 outgoingMessageHistory:(id)arg5 keyboardLanguageID:(id)arg6 keyboardLanguageLastChangedDate:(id)arg7 includeDynamicSuggestions:(bool)arg8 completion:(id /* block */)arg9;
- (void)performWithResolvedModelAssetPathsUsingLanguage:(id)arg1 block:(id /* block */)arg2;
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipientHandles:(id)arg7 options:(unsigned long long)arg8 completionBlock:(id /* block */)arg9;
- (void)predictionsForRequest:(id)arg1 heads:(id)arg2 completion:(id /* block */)arg3;
- (void)predictionsForRequest:(id)arg1 plistPath:(id)arg2 espressoBinPath:(id)arg3 vocabPath:(id)arg4 heads:(id)arg5 completion:(id /* block */)arg6;
- (void)primeResponsesExperimentsIfNeeded;
- (bool)registerDisplayed;
- (void)registerGenerationWithPreResponseItems:(id)arg1 language:(id)arg2 isCached:(bool)arg3 responseTimePerf:(unsigned long long)arg4 promptMessage:(id)arg5 generationStatus:(int)arg6;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 time:(id)arg3 metadata:(id)arg4 withLanguage:(id)arg5;
- (void)registerResponseDisplayedAtIndex:(id)arg1;
- (id)responsesCache;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipientHandles:(id)arg7 options:(unsigned long long)arg8;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipientHandles:(id)arg7 options:(unsigned long long)arg8 completionBlock:(id /* block */)arg9;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipients:(id)arg7 options:(unsigned long long)arg8;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipients:(id)arg7 options:(unsigned long long)arg8 completionBlock:(id /* block */)arg9;
- (void)setCachedResponsesGeneratedEvent:(id)arg1;
- (void)setIncludeCannedResponses:(bool)arg1;
- (void)setIncludeCustomResponses:(bool)arg1;
- (void)setIncludeResponsesToRobots:(bool)arg1;
- (void)setRegisterDisplayed:(bool)arg1;
- (void)setUseResponseKitAsFallback:(bool)arg1;
- (bool)shouldUseDefaultRKTreatment;
- (bool)shouldUseDefaultRKTreatmentForLanguage:(id)arg1;
- (id)suggestionsForRequest:(id)arg1;
- (void)suggestionsForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)useResponseKitAsFallback;
- (id)waitForPreResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipientHandles:(id)arg7 options:(unsigned long long)arg8;

@end

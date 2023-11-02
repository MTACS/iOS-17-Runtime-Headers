
@interface ATXActionPredictionServer : NSObject <ATXActionPredictionInterface, ATXProactiveSuggestionRealTimeProviderDelegateProtocol, NSXPCListenerDelegate> {
    bool  _checkEntitlements;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)behavioralModelSuggestionsForRequest:(id)arg1;
- (void)dealloc;
- (id)endpoint;
- (id)filteredCachedIntentSuggestionsForClientModelId:(id)arg1 request:(id)arg2;
- (void)getActionPredictionsForCandidateBundleIdentifiers:(id)arg1 candidateActionTypes:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 limit:(int)arg5 reply:(id /* block */)arg6;
- (void)getActionPredictionsForContext:(id)arg1 includeBundleIds:(id)arg2 excludeBundleIds:(id)arg3 includeActionTypes:(id)arg4 excludeActionTypes:(id)arg5 limit:(unsigned long long)arg6 reply:(id /* block */)arg7;
- (id)init;
- (id)initAnonymousListener;
- (id)initWithListener:(id)arg1 checkEntitlements:(bool)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)pingWithCompletion:(id /* block */)arg1;
- (void)registerForRealTimeRequestsWithBlendingLayerServer:(id)arg1;
- (void)removeActionPredictionNotificationsMatchingSuggestion:(id)arg1 reply:(id /* block */)arg2;
- (void)shouldDisplayDailyRoutineForContext:(id)arg1 reply:(id /* block */)arg2;
- (void)suggestionsForIntentSuggestionRequest:(id)arg1 clientModelId:(id)arg2 reply:(id /* block */)arg3;

@end


@interface WFContextualActionSuggester : NSObject {
    NSUUID * _lastSuggestionSessionUUID;
    CAXSuggestionProvider * _provider;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSUUID *lastSuggestionSessionUUID;
@property (nonatomic, readonly) CAXSuggestionProvider *provider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)init;
- (id)initialSuggestionsForContextIfApplicable:(id)arg1 numSuggestions:(unsigned long long)arg2;
- (id)lastSuggestionSessionUUID;
- (id)provider;
- (id)queue;
- (void)reportEvent:(unsigned long long)arg1 inContext:(id)arg2 involvingActions:(id)arg3;
- (bool)shouldShowInitialSuggestionsForContext:(id)arg1;
- (void)suggestActionsForContext:(id)arg1 numSuggestions:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end


@interface MRMediaSuggestionPreferences : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _disabledBundlesForContexts;
    NSMutableDictionary * _globalDisplayPreferencesForContexts;
    id /* block */  _userDisplayPreferencesDidChangeCallback;
}

@property (nonatomic, copy) id /* block */ userDisplayPreferencesDidChangeCallback;

+ (id)allContexts;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)disabledBundleIdentifiersInContext:(id)arg1;
- (id)init;
- (void)setUserDisplayPreferencesDidChangeCallback:(id /* block */)arg1;
- (bool)suggestionsDisabledInContext:(id)arg1;
- (id /* block */)userDisplayPreferencesDidChangeCallback;

@end

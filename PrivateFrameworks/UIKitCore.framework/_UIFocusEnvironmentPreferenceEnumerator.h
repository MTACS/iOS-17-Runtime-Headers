
@interface _UIFocusEnvironmentPreferenceEnumerator : NSObject <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> {
    bool  _allowsInferringPreferences;
    _UIDebugLogNode * _debugLog;
    id /* block */  _didVisitAllPreferencesForEnvironmentHandler;
    long long  _enumerationMode;
    id /* block */  _shouldInferPreferenceForEnvironmentHandler;
}

@property (nonatomic) bool allowsInferringPreferences;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _UIDebugLogNode *debugLog;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didVisitAllPreferencesForEnvironmentHandler;
@property (nonatomic, readonly) long long enumerationMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ shouldInferPreferenceForEnvironmentHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldInferDefaultPreferenceForEnvironmentInContext:(id)arg1;
- (bool)allowsInferringPreferences;
- (id)debugLog;
- (id /* block */)didVisitAllPreferencesForEnvironmentHandler;
- (void)enumeratePreferencesForEnvironment:(id)arg1 usingBlock:(id /* block */)arg2;
- (long long)enumerationMode;
- (id)init;
- (id)initWithEnumerationMode:(long long)arg1;
- (void)setAllowsInferringPreferences:(bool)arg1;
- (void)setDebugLog:(id)arg1;
- (void)setDidVisitAllPreferencesForEnvironmentHandler:(id /* block */)arg1;
- (void)setShouldInferPreferenceForEnvironmentHandler:(id /* block */)arg1;
- (id /* block */)shouldInferPreferenceForEnvironmentHandler;

@end

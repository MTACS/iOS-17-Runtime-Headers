
@interface _UIFocusEnvironmentPreferenceEnumerationContext : NSObject <_UIFocusEnvironmentPreferenceEnumerationContext> {
    NSHashTable * _allVisitedEnvironments;
    NSArray * _cachedPreferredEnvironments;
    bool  _cachedPrefersNothingFocused;
    _UIDebugLogStack * _debugStack;
    <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> * _delegate;
    <UIFocusEnvironment> * _environment;
    UIFocusSystem * _focusSystem;
    bool  _hasNeverPoppedInPreferredSubtree;
    bool  _hasResolvedPreferredFocusEnvironments;
    <UIFocusEnvironment> * _lastPrimaryPreferredEnvironment;
    NSMapTable * _preferredEnvironmentsMap;
    <UIFocusEnvironment> * _preferredSubtree;
    <UIFocusEnvironment> * _preferredSubtreeEntryPoint;
    NSMutableArray * _visitedEnvironmentStack;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _UIDebugLogStack *debugStack;
@property (nonatomic) <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <UIFocusEnvironment> *environment;
@property (readonly) unsigned long long hash;
@property (getter=isInPreferredSubtree, nonatomic, readonly) bool inPreferredSubtree;
@property (nonatomic, readonly) bool isLeafPreference;
@property (nonatomic, readonly) bool isPrimaryPreference;
@property (getter=isPreferredByItself, nonatomic, readonly) bool preferredByItself;
@property (nonatomic, readonly) NSArray *preferredEnvironments;
@property (nonatomic, readonly) <UIFocusEnvironment> *preferringEnvironment;
@property (nonatomic, readonly) bool prefersNothingFocused;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_inferPreferencesForEnvironment:(id)arg1;
- (void)_invalidatePreferredEnvironments;
- (bool)_isAllowedToPreferEnvironment:(id)arg1;
- (void)_reportInferredPreferredFocusEnvironment:(id)arg1;
- (void)_resolvePreferredFocusEnvironments;
- (id)_startLogging;
- (void)_stopLogging;
- (id)debugStack;
- (id)delegate;
- (id)environment;
- (id)init;
- (id)initWithFocusEnvironment:(id)arg1 enumerationMode:(long long)arg2;
- (bool)isInPreferredSubtree;
- (bool)isLeafPreference;
- (bool)isPreferredByItself;
- (bool)isPrimaryPreference;
- (void)popEnvironment;
- (id)preferredEnvironments;
- (id)preferringEnvironment;
- (bool)prefersNothingFocused;
- (void)pushEnvironment:(id)arg1;
- (void)setDebugStack:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

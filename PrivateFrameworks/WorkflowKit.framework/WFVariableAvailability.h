
@interface WFVariableAvailability : NSObject {
    NSMapTable * _actionOutputVariableActionsByUUID;
    NSHashTable * _actionsUsingShortcutInputVariable;
    NSCache * _cachedContentClassesForVariableNameAtIndex;
    NSMapTable * _providingActionsByVariableName;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _variableObservers;
    NSMapTable * _variableScopeEndActionsByStartAction;
    NSMapTable * _variableScopeLevelsByGroupingIdentifier;
    WFWorkflow * _workflow;
}

@property (nonatomic, retain) NSMapTable *actionOutputVariableActionsByUUID;
@property (nonatomic, retain) NSHashTable *actionsUsingShortcutInputVariable;
@property (nonatomic, retain) NSCache *cachedContentClassesForVariableNameAtIndex;
@property (nonatomic, retain) NSMapTable *providingActionsByVariableName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isShortcutInputVariableUsed, nonatomic, readonly) bool shortcutInputVariableUsed;
@property (nonatomic, retain) NSHashTable *variableObservers;
@property (nonatomic, retain) NSMapTable *variableScopeEndActionsByStartAction;
@property (nonatomic, retain) NSMapTable *variableScopeLevelsByGroupingIdentifier;
@property (nonatomic, readonly) WFWorkflow *workflow;

+ (bool)actionIsEligibleForOutputVariable:(id)arg1;

- (void).cxx_destruct;
- (id)_possibleContentClassesForVariableNamed:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3 excludingAction:(id)arg4;
- (void)actionDidChange:(id)arg1 moved:(bool)arg2 removed:(bool)arg3;
- (id)actionOutputVariableActionsByUUID;
- (id)actionProvidingVariableWithOutputUUID:(id)arg1;
- (void)actionsDidMove;
- (id)actionsProvidingVariableName:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)actionsUsingShortcutInputVariable;
- (void)addVariableObserver:(id)arg1;
- (bool)areActionOutputVariablesAvailableAtIndex:(unsigned long long)arg1;
- (bool)areVariablesAvailableAtIndex:(unsigned long long)arg1;
- (id)availableOutputActionsAtIndex:(unsigned long long)arg1;
- (id)availableVariableNamesAtIndex:(unsigned long long)arg1;
- (id)availableVariableNamesExcludingThoseProvidedByAction:(id)arg1;
- (id)cachedContentClassesForVariableNameAtIndex;
- (void)enumerateActionsInScopeAtIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithWorkflow:(id)arg1;
- (void)invalidateActionOutputProviderCache;
- (void)invalidateActionsUsingShortcutInputVariableCache;
- (void)invalidateCache;
- (void)invalidateContentClassCache;
- (bool)isShortcutInputVariableUsed;
- (bool)isVariableAvailableAtIndex:(unsigned long long)arg1 withActionTest:(id /* block */)arg2;
- (bool)isVariableWithName:(id)arg1 availableAtIndex:(unsigned long long)arg2;
- (bool)isVariableWithOutputUUIDAvailable:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)notifyContentClassesChanged;
- (void)notifyVariablesChanged;
- (void)populateActionOutputVariableActionsByUUID;
- (void)populateActionsUsingShortcutInputVariableCache;
- (void)populateCache;
- (id)possibleContentClassesForVariableNamed:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3 excludingAction:(id)arg4;
- (id)providingActionsByVariableName;
- (id)queue;
- (void)removeVariableObserver:(id)arg1;
- (void)renameVariable:(id)arg1 to:(id)arg2 fromAction:(id)arg3;
- (void)setActionOutputVariableActionsByUUID:(id)arg1;
- (void)setActionsUsingShortcutInputVariable:(id)arg1;
- (void)setCachedContentClassesForVariableNameAtIndex:(id)arg1;
- (void)setProvidingActionsByVariableName:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setVariableObservers:(id)arg1;
- (void)setVariableScopeEndActionsByStartAction:(id)arg1;
- (void)setVariableScopeLevelsByGroupingIdentifier:(id)arg1;
- (void)updateShortcutInputVariableUsageForChangeInAction:(id)arg1 removed:(bool)arg2;
- (id)variableObservers;
- (id)variableScopeEndActionsByStartAction;
- (unsigned long long)variableScopeLevelForGroupingIdentifier:(id)arg1;
- (id)variableScopeLevelsByGroupingIdentifier;
- (id)workflow;

@end

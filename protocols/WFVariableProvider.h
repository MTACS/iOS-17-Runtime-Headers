
@protocol WFVariableProvider <NSObject>

@required

- (WFAction *)actionProvidingVariableWithOutputUUID:(NSString *)arg1;
- (NSArray *)actionsProvidingVariableName:(NSString *)arg1;
- (void)addVariableObserver:(id <WFVariableObserver>)arg1;
- (NSArray *)availableOutputActions;
- (NSArray *)availableVariableNames;
- (bool)hasAvailableActionOutputVariables;
- (bool)hasAvailableVariables;
- (bool)isVariableWithNameAvailable:(NSString *)arg1;
- (bool)isVariableWithOutputUUIDAvailable:(NSString *)arg1;
- (NSOrderedSet *)possibleContentClassesForVariableNamed:(NSString *)arg1 context:(id <WFOutputTraversalContext>)arg2;
- (void)removeVariableObserver:(id <WFVariableObserver>)arg1;
- (NSArray *)workflowInputClasses;

@end

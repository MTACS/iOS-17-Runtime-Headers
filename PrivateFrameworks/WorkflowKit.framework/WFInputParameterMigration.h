
@interface WFInputParameterMigration : WFWorkflowMigration

+ (bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (id)findActionProvidingInputToActionAtIndex:(unsigned long long)arg1 inWorkflow:(id)arg2 reachedBeginning:(bool*)arg3 inputActionIndex:(unsigned long long*)arg4;
- (id)findGetVariableActionProvidingInputToActionAtIndex:(long long)arg1 inWorkflow:(id)arg2;
- (void)migrateLegacyInputVariablesInParameterDictionary:(id)arg1 toVariable:(id)arg2;
- (void)migrateWorkflow;
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inArray:(id)arg2 then:(id /* block */)arg3;
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inDictionary:(id)arg2 then:(id /* block */)arg3;
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inObject:(id)arg2 then:(id /* block */)arg3;

@end

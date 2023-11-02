
@interface WFAppToAppDescriptorMigration : WFWorkflowMigration

+ (bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (bool)actionDictionaryContainsSystemIntentAction:(id)arg1;
- (void)migrateAppToAppDescriptorForParameterKey:(id)arg1 parameters:(id)arg2;
- (void)migrateHideAppWithParameters:(id)arg1;
- (void)migrateOpenAppWithParameters:(id)arg1;
- (void)migrateOpenInWithParameters:(id)arg1;
- (void)migrateQuitAppWithParameters:(id)arg1;
- (void)migrateSplitScreenWithParameters:(id)arg1;
- (void)migrateSystemIntentActionsWithParameters:(id)arg1;
- (void)migrateWorkflow;

@end

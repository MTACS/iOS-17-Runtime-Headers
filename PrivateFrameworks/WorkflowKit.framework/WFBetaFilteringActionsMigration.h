
@interface WFBetaFilteringActionsMigration : WFWorkflowMigration

+ (id)actionIdentifierMapping;
+ (bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (void)migrateWorkflow;

@end

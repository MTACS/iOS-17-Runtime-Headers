
@interface WFShazamActionMigration : WFWorkflowMigration

+ (bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (void)migrateWorkflow;

@end

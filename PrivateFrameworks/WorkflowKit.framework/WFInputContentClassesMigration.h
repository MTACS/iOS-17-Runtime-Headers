
@interface WFInputContentClassesMigration : WFWorkflowMigration

+ (id)addedContentItemClassesByVersion;
+ (bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (void)migrateWorkflow;

@end

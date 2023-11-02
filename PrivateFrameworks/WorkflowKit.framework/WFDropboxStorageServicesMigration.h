
@interface WFDropboxStorageServicesMigration : WFWorkflowMigration

+ (id)migrationClassDependencies;
+ (bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (void)migrateWorkflow;

@end

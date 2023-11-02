
@interface WFFindMyFriendsIntentMigration : WFWorkflowMigration

+ (id)classNameConversion;
+ (id)launchIdConversion;
+ (id)parameterConversion;
+ (bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (bool)convertParametersAndUpdateIntent:(id*)arg1;
- (void)migrateWorkflow;
- (bool)updateBundleIdentifierForIntent:(id)arg1;
- (bool)updateClassNameForIntent:(id)arg1;

@end

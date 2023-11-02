
@interface WFWorkflowMigrator : NSObject

+ (void)initialize;
+ (void)migrateWorkflowIfNeeded:(id)arg1 completion:(id /* block */)arg2;
+ (id)migrationClasses;
+ (id)migrationClassesWithDependencies;
+ (id)orderedMigrationClassesWithoutDependencies;
+ (void)registerAllWorkflowKitMigrationClasses;
+ (void)registerMigrationClass:(Class)arg1;

@end

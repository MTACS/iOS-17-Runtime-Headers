
@protocol WFWorkflowMigration <NSObject>

@required

+ (bool)workflowNeedsMigration:(NSDictionary *)arg1 fromClientVersion:(NSString *)arg2;

- (void)migrateWorkflowIfNeeded:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSMutableDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*

@end

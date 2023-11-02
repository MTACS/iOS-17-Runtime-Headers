
@interface WFWorkflowMigration : NSObject <WFWorkflowMigration> {
    id /* block */  _completionHandler;
    NSMutableSet * _warnings;
    NSMutableDictionary * _workflow;
}

@property (nonatomic, readonly) NSString *actionIdentifierKey;
@property (nonatomic, readonly) NSString *actionParametersKey;
@property (nonatomic, readonly) NSMutableArray *actions;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableSet *warnings;
@property (nonatomic, readonly) NSMutableDictionary *workflow;

+ (id)migrationClassDependencies;
+ (bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (void).cxx_destruct;
- (id)actionIdentifierKey;
- (id)actionParametersKey;
- (id)actions;
- (id /* block */)completionHandler;
- (void)enumerateActionsWithIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)finish;
- (void)migrateWorkflow;
- (void)migrateWorkflowIfNeeded:(id)arg1 completion:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)warnings;
- (id)workflow;

@end

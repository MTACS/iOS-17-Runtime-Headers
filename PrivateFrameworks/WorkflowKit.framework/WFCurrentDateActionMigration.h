
@interface WFCurrentDateActionMigration : WFWorkflowMigration {
    NSDateFormatter * _dateFormatter;
}

@property (nonatomic, retain) NSDateFormatter *dateFormatter;

+ (bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (void).cxx_destruct;
- (id)dateFormatter;
- (void)migrateWorkflow;
- (void)setDateFormatter:(id)arg1;

@end

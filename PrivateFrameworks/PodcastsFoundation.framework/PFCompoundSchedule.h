
@interface PFCompoundSchedule : NSObject <PFOperationSchedule> {
    void children;
    void type;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(long long)arg1 children:(id)arg2;
- (bool)shouldExecuteOn:(id)arg1 previousExecution:(id)arg2;

@end


@interface PFMaximumFrequencySchedule : NSObject <PFOperationSchedule> {
    void interval;
}

- (id)init;
- (id)initWithFrequency:(long long)arg1;
- (id)initWithInterval:(double)arg1;
- (bool)shouldExecuteOn:(id)arg1 previousExecution:(id)arg2;

@end

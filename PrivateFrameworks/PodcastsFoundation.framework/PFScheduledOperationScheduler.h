
@interface PFScheduledOperationScheduler : NSObject {
    void schedule;
    void storage;
}

+ (id)weeklyScheduler;

- (void).cxx_destruct;
- (void)evaluateOperationWithIdentifier:(id)arg1 evaluationHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithSchedule:(id)arg1 scheduleStorage:(id)arg2;

@end

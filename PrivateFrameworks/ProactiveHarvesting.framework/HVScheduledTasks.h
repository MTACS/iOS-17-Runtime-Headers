
@interface HVScheduledTasks : NSObject {
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _delayedBudgetedTaskScheduled;
}

+ (void)delayedBudgetedContentAvailable;
+ (void)registerScheduledTasks;

- (id)init;

@end

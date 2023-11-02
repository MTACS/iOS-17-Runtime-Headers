
@interface ATXMetrics : NSObject {
    PETScalarEventTracker * _errorTracker;
    PETScalarEventTracker * _executeTracker;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    PETScalarEventTracker * _viewTracker;
}

+ (id)_sharedInstance;
+ (void)logActionExecuteForType:(long long)arg1 inContext:(long long)arg2;
+ (void)logActionViewForType:(long long)arg1 inContext:(long long)arg2;
+ (void)logError:(long long)arg1 inContext:(long long)arg2;

- (void).cxx_destruct;
- (void)_logActionExecuteForType:(long long)arg1 inContext:(long long)arg2;
- (void)_logActionViewForType:(long long)arg1 inContext:(long long)arg2;
- (void)_logError:(long long)arg1 inContext:(long long)arg2;
- (id)init;

@end

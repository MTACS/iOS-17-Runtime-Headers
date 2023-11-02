
@interface FCKeyValueStoreSavePolicy : NSObject

+ (id)appBackgroundPolicyWithActivityMonitor:(id)arg1 backgroundTaskable:(id)arg2;
+ (id)defaultPolicy;
+ (id)throttlePolicyWithDelay:(double)arg1;
+ (id)unthrottledPolicy;

- (void)scheduleSaveOnQueue:(id)arg1 handler:(id /* block */)arg2;

@end

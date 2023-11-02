
@interface AMSMetricsOperation : NSObject

+ (id)dropEventsOperation;
+ (id)flushOperationWithStrategy:(id)arg1 promise:(id)arg2;

- (id)_init;

@end

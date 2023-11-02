
@interface CNScheduler : NSObject

+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)inlineScheduler;
+ (id)mainThreadScheduler;
+ (id)offMainThreadScheduler;
+ (id)offMainThreadSchedulerWithBackgroundScheduler:(id)arg1;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)synchronousSerialDispatchQueueWithName:(id)arg1;

@end

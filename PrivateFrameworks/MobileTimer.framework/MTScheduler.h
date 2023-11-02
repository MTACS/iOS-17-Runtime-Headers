
@interface MTScheduler : NSObject

+ (unsigned int)defaultPriority;
+ (id)globalAsyncSchedulerWithPriority:(unsigned int)arg1;
+ (id)serialSchedulerForObject:(id)arg1;
+ (id)serialSchedulerForObject:(id)arg1 priority:(unsigned int)arg2;
+ (id)serialSchedulerWithName:(id)arg1;
+ (id)serialSchedulerWithName:(id)arg1 priority:(unsigned int)arg2;
+ (id)serialSchedulerWithQueue:(id)arg1;

@end

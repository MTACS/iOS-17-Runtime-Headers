
@interface NAScheduler : NSObject

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)mainThreadScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)arg1;
+ (id)schedulerWithDispatchQueue:(id)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id)mtMainThreadScheduler;
+ (id)mtSerialSchedulerForObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

+ (id)hkspMainThreadScheduler;

@end

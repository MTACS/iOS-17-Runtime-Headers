
@interface EFScheduler : NSObject

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

+ (id)_globalAsyncSchedulerWithQualityOfService:(long long)arg1;
+ (id)dispatchQueueSchedulerWithQueue:(id)arg1;
+ (id)globalAsyncScheduler;
+ (id)globalAsyncSchedulerWithQualityOfService:(long long)arg1;
+ (id)immediateScheduler;
+ (id)mainThreadScheduler;
+ (id)onScheduler:(id)arg1 performWithObject:(id)arg2;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1 qualityOfService:(long long)arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)__mui_nextRunLoopMainThreadScheduler;

// Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI

+ (void)mf_afterUIDelay:(double)arg1 performBlock:(id /* block */)arg2;

@end

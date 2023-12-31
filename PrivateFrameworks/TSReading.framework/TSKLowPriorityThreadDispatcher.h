
@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher {
    NSObject<OS_dispatch_queue> * _queue;
    int  _suspendCount;
}

@property (getter=isSuspended, readonly) bool suspended;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedLowPriorityDispatcher;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isSuspended;
- (id)p_dispatchQueue;
- (oneway void)release;
- (void)resume;
- (id)retain;
- (unsigned long long)retainCount;
- (void)suspend;

@end


@interface CKScheduler : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    double  _delayAfterXPCActivityRegister;
    NSNumber * _fakeDeviceCount;
    NSMutableDictionary * _handlersByCKActivityIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _xpcActivitiesByCKActivityIdentifier;
    NSObject<OS_dispatch_queue> * _xpcActivityRegisterQueue;
}

@property double delayAfterXPCActivityRegister;
@property (copy) NSNumber *fakeDeviceCount;
@property (nonatomic, readonly) NSMutableDictionary *handlersByCKActivityIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *xpcActivitiesByCKActivityIdentifier;

+ (id)activityFromXPCActivity:(id)arg1;
+ (id)identifierWithImmediateInvocationForIdentifier:(id)arg1;
+ (id)sharedScheduler;
+ (id)xpcActivityIdentifierForCKActivityIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)activityForActivityIdentifier:(id)arg1;
- (void)cancelActivityWithIdentifier:(id)arg1;
- (long long)currentPriorityForActivityIdentifier:(id)arg1;
- (double)delayAfterXPCActivityRegister;
- (id)fakeDeviceCount;
- (id)handlersByCKActivityIdentifier;
- (bool)hasPendingActivityWithActivityIdentifier:(id)arg1;
- (id)init;
- (id)initInternal;
- (bool)isXPCActivityPending:(id)arg1;
- (void)performAsyncOnQueue:(id /* block */)arg1;
- (void)registerActivityIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)registerActivityIdentifier:(id)arg1 replaceExistingHandler:(bool)arg2 handler:(id /* block */)arg3;
- (void)setDelayAfterXPCActivityRegister:(double)arg1;
- (void)setFakeDeviceCount:(id)arg1;
- (void)setXPCActivity:(id)arg1 forActivityIdentifier:(id)arg2;
- (void)submitActivity:(id)arg1;
- (void)submitActivity:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)suggestedXPCActivityCriteriaForActivity:(id)arg1;
- (void)unregisterActivityIdentifier:(id)arg1;
- (void)unregisterHandlerForActivityIdentifier:(id)arg1;
- (id)xpcActivitiesByCKActivityIdentifier;
- (id)xpcActivityForActivityWithIdentifier:(id)arg1;

@end

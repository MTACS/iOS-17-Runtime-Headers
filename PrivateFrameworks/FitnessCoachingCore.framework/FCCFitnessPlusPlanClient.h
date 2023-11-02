
@interface FCCFitnessPlusPlanClient : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    FCCXPCClient * _xpcClient;
}

- (void).cxx_destruct;
- (void)_hasPlanScheduledWorkoutsForTodayWithCompletion:(id /* block */)arg1;
- (void)_postNotificationWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)hasPlanScheduledWorkoutsForTodayWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1 xpcClient:(id)arg2;
- (void)postNotificationForType:(id)arg1 force:(bool)arg2 completion:(id /* block */)arg3;

@end


@interface FCCGoalProgressClient : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    FCCXPCClient * _xpcClient;
}

- (void).cxx_destruct;
- (void)_postGoalProgressNotification:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1 xpcClient:(id)arg2;
- (void)postGoalProgressNotification:(id)arg1 completion:(id /* block */)arg2;

@end

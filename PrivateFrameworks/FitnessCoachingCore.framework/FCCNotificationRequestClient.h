
@interface FCCNotificationRequestClient : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    FCCXPCClient * _xpcClient;
}

- (void).cxx_destruct;
- (void)_postSampleNotificationWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1 xpcClient:(id)arg2;
- (void)postSampleNotificationWithCompletion:(id /* block */)arg1;

@end

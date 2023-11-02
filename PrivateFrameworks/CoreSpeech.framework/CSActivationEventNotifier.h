
@interface CSActivationEventNotifier : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedNotifier;

- (void).cxx_destruct;
- (id)_createXPCClientConnection;
- (void)_notifyActivationEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)notifyActivationEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyActivationEvent:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyActivationEventSynchronously:(id)arg1 completion:(id /* block */)arg2;
- (id)queue;
- (void)setQueue:(id)arg1;

@end

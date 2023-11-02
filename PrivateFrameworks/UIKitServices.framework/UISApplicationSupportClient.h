
@interface UISApplicationSupportClient : NSObject <BSInvalidatable> {
    NSObject<OS_dispatch_queue> * _queue;
    BSServiceConnection * _queue_connection;
    bool  _queue_invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_applicationSupportServiceEndpoint;
- (id)_remoteTarget;
- (id)applicationInitializationContextWithParameters:(id)arg1;
- (void)dealloc;
- (void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(bool)arg3 completion:(id /* block */)arg4;
- (id)init;
- (void)invalidate;
- (void)requestPasscodeUnlockUIWithCompletion:(id /* block */)arg1;

@end

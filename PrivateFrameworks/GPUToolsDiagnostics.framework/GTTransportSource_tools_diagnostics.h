
@interface GTTransportSource_tools_diagnostics : NSObject {
    id /* block */  _cancellationHandler;
    id /* block */  _messageHandler;
    NSObject<OS_dispatch_queue> * _mqueue;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _registrationHandler;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _state;
    GTTransport_tools_diagnostics * _transport;
}

@property (nonatomic, copy) id /* block */ messageHandler;
@property (nonatomic, copy) id /* block */ registrationHandler;

- (void)_callCancellationHandler;
- (void)_callRegistrationHandler;
- (void)_cancel;
- (void)_dispatch:(id)arg1;
- (id)_initWithQueue:(id)arg1 transport:(id)arg2;
- (void)_register;
- (void)cancel;
- (id /* block */)cancellationHandler;
- (bool)cancelled;
- (void)dealloc;
- (id)init;
- (id /* block */)messageHandler;
- (id /* block */)registrationHandler;
- (void)resume;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)setRegistrationHandler:(id /* block */)arg1;
- (void)suspend;

@end

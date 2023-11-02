
@interface DYTransportSource : NSObject {
    id /* block */  _cancellationHandler;
    id /* block */  _messageHandler;
    NSObject<OS_dispatch_queue> * _mqueue;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _registrationHandler;
    _Atomic int  _state;
    DYTransport * _transport;
}

@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic, readonly) bool cancelled;
@property (nonatomic, copy) id /* block */ messageHandler;
@property (nonatomic, copy) id /* block */ registrationHandler;
@property (nonatomic, readonly, retain) DYTransport *transport;

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
- (id)transport;

@end

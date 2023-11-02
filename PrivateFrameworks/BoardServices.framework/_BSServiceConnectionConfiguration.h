
@interface _BSServiceConnectionConfiguration : NSObject <BSServiceConnectionConfiguring_DispatchingQueue, BSServiceConnectionInternalConfiguring> {
    id /* block */  _activationHandler;
    NSObject<OS_xpc_object> * _clientContext;
    id /* block */  _errorHandler;
    BSServiceInterface * _interface;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    struct os_unfair_lock_s { unsigned int x1; } * _lock;
    id /* block */  _messageHandler;
    NSString * _name;
    BSServiceQuality * _serviceQuality;
    id  _target;
    <BSServiceDispatchingQueue> * _targetDispatchingQueue;
    NSObject<OS_dispatch_queue> * _targetQueue;
    <NSCopying> * _userInfo;
}

- (void).cxx_destruct;
- (id)interface;
- (void)setActivationHandler:(id /* block */)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInterface:(id)arg1;
- (void)setInterfaceTarget:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setServiceQuality:(id)arg1;
- (void)setTargetDispatchingQueue:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setUserInfo:(id)arg1;

@end


@interface _BKSTouchDeliveryPolicyConcreteServerReference : NSObject <BKSTouchDeliveryPolicyServerInterface> {
    id /* block */  _errorHandler;
    _BKSTouchDeliveryPolicyConcreteServerInterface * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _BKSTouchDeliveryPolicyConcreteServerInterface *server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)errorHandler;
- (void)ipc_addPolicy:(id)arg1;
- (id)server;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setServer:(id)arg1;

@end

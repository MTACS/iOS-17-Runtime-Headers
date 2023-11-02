
@interface MGServiceListenerProvider : NSObject <MGServiceListenerProviderProtocol> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _entitlement;
    NSString * _serviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly, copy) NSString *entitlement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dispatchQueue;
- (id)entitlement;
- (id)initWithServiceName:(id)arg1 entitlement:(id)arg2;
- (id)serviceListener;
- (id)serviceName;
- (bool)serviceShouldAcceptNewConnection:(id)arg1;

@end

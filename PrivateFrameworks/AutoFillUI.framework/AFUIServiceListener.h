
@interface AFUIServiceListener : NSObject <BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener * _bsConnectionListener;
    NSString * _domainName;
    NSString * _serviceName;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (nonatomic, retain) BSServiceConnectionListener *bsConnectionListener;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *domainName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createListenerIfNecessary;
- (void)_destroyListenerIfNecessary;
- (id)bsConnectionListener;
- (id)domainName;
- (id)initDefaultServiceWithServiceQueue:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)listenerEndpoint;
- (id)serviceName;
- (id)serviceQueue;
- (void)setBsConnectionListener:(id)arg1;
- (void)setDomainName:(id)arg1;
- (void)setServiceName:(id)arg1;

@end

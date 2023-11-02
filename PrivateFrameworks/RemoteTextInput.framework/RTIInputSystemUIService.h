
@interface RTIInputSystemUIService : RTIInputSystemService <BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener * _bsConnectionListener;
    NSString * _domainName;
    NSString * _serviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RTIInputSystemService *rtiService;
@property (readonly) Class superclass;

+ (id)sharedServiceWithDomainName:(id)arg1 serviceName:(id)arg2;

- (void).cxx_destruct;
- (bool)_canResumeConnection;
- (void)_createListenerIfNecessary;
- (void)_destroyListenerIfNecessary;
- (id)initWithDomainName:(id)arg1 serviceName:(id)arg2;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)listenerEndpoint;
- (id)rtiService;

@end

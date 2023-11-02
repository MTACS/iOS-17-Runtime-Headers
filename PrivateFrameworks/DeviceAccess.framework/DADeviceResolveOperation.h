
@interface DADeviceResolveOperation : NSObject {
    struct _DNSServiceRef_t { } * _addrInfoQuery;
    DAEndpoint * _endpoint;
    DADeviceResolver * _resolver;
    struct _DNSServiceRef_t { } * _srvQuery;
}

@property (nonatomic) struct _DNSServiceRef_t { }*addrInfoQuery;
@property (nonatomic, retain) DAEndpoint *endpoint;
@property (nonatomic, retain) DADeviceResolver *resolver;
@property (nonatomic) struct _DNSServiceRef_t { }*srvQuery;

- (void).cxx_destruct;
- (struct _DNSServiceRef_t { }*)addrInfoQuery;
- (id)endpoint;
- (void)invalidate;
- (id)resolver;
- (void)setAddrInfoQuery:(struct _DNSServiceRef_t { }*)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setResolver:(id)arg1;
- (void)setSrvQuery:(struct _DNSServiceRef_t { }*)arg1;
- (struct _DNSServiceRef_t { }*)srvQuery;

@end

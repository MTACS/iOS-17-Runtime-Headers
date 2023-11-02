
@interface CRKConcreteNetworkInterface : NSObject <CRKNetworkInterface> {
    <CRKNetworkEndpoint> * _ipv4Endpoint;
    <CRKNetworkEndpoint> * _ipv6Endpoint;
    NSString * _name;
    NSObject<OS_nw_interface> * _underlyingInterface;
}

@property (nonatomic, readonly) <CRKNetworkEndpoint> *ipv4Endpoint;
@property (nonatomic, readonly) <CRKNetworkEndpoint> *ipv6Endpoint;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSObject<OS_nw_interface> *underlyingInterface;

- (void).cxx_destruct;
- (id)initWithUnderlyingInterface:(id)arg1;
- (id)ipv4Endpoint;
- (id)ipv6Endpoint;
- (id)makeLocalEndpointForRemoteEndpointWithHost:(id)arg1 port:(id)arg2;
- (id)name;
- (id)underlyingInterface;

@end

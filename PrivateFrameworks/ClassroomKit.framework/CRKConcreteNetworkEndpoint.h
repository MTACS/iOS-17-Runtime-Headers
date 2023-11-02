
@interface CRKConcreteNetworkEndpoint : NSObject <CRKNetworkEndpoint> {
    NSString * _IPAddress;
    NSObject<OS_nw_endpoint> * _underlyingEndpoint;
}

@property (nonatomic, readonly, copy) NSString *IPAddress;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *underlyingEndpoint;

- (void).cxx_destruct;
- (id)IPAddress;
- (id)initWithUnderlyingEndpoint:(id)arg1;
- (id)underlyingEndpoint;

@end


@interface MRDiscoveryUpdateEndpointsMessage : MRProtocolMessage {
    MRAVRoutingDiscoverySessionConfiguration * _configuration;
    NSArray * _endpoints;
}

@property (nonatomic, readonly) MRAVRoutingDiscoverySessionConfiguration *configuration;
@property (nonatomic, readonly) NSArray *endpoints;

- (void).cxx_destruct;
- (id)configuration;
- (id)endpoints;
- (id)initWithEndpoints:(id)arg1 configuration:(id)arg2;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (unsigned long long)type;

@end

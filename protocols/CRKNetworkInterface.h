
@protocol CRKNetworkInterface

@required

- (<CRKNetworkEndpoint> *)ipv4Endpoint;
- (<CRKNetworkEndpoint> *)ipv6Endpoint;
- (NSString *)name;

@end

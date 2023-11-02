
@interface NEIKEv2Server : NSObject <NSObject> {
    NSArray * _additionalIPv4ServerAddresses;
    NSArray * _additionalIPv6ServerAddresses;
    bool  _hasCompanionProxyInPath;
    NSString * _pathProxyConnectedRemoteEndpointString;
    NWAddressEndpoint * _pathProxyEndpoint;
    NSObject<OS_dispatch_source> * _redirectTimer;
    NSString * _redirectedFromAddress;
    unsigned int  _redirects;
    NEIKEv2AddressList * _resolvedAddressList;
    NSString * _serverAddress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end

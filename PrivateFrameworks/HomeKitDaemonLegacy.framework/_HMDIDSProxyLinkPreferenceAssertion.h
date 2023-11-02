
@interface _HMDIDSProxyLinkPreferenceAssertion : HMFObject {
    <HMDIDSService> * _proxyService;
}

@property (nonatomic, readonly) <HMDIDSService> *proxyService;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIDSProxyService:(id)arg1;
- (id)proxyService;

@end

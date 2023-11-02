
@interface HMDNetworkRouterClientConfiguration : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _clientIdentifier;
    HMDNetworkRouterCredential * _credential;
    HMDNetworkRouterLANFirewallConfiguration * _lanFirewallConfiguration;
    HAPTLVUnsignedNumberValue * _lanIdentifier;
    HMDNetworkRouterWANFirewallConfiguration * _wanFirewallConfiguration;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *clientIdentifier;
@property (nonatomic, retain) HMDNetworkRouterCredential *credential;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *fingerprint;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDNetworkRouterLANFirewallConfiguration *lanFirewallConfiguration;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *lanIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDNetworkRouterWANFirewallConfiguration *wanFirewallConfiguration;

+ (id)configurationForFirewallConfiguration:(id)arg1 hapAccessory:(bool)arg2 airplayAccessory:(bool)arg3 withClientIdentifier:(id)arg4;
+ (id)configurationForOpenProtectionWithClientIdentifier:(id)arg1;
+ (id)configurationWithClientIdentifier:(id)arg1 lanIdentifier:(long long)arg2;
+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credential;
- (id)description;
- (id)fingerprint;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1 lanIdentifier:(id)arg2 credential:(id)arg3 wanFirewallConfiguration:(id)arg4 lanFirewallConfiguration:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)lanFirewallConfiguration;
- (id)lanIdentifier;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setCredential:(id)arg1;
- (void)setLanFirewallConfiguration:(id)arg1;
- (void)setLanIdentifier:(id)arg1;
- (void)setWanFirewallConfiguration:(id)arg1;
- (id)wanFirewallConfiguration;

@end


@interface DMFSetAppExtensionUUIDsRequest : DMFAppRequest {
    NSString * _DNSProxyUUIDString;
    NSString * _VPNUUIDString;
    NSString * _cellularSliceUUIDString;
    NSString * _contentFilterUUIDString;
    NSString * _relayUUIDString;
}

@property (nonatomic, copy) NSString *DNSProxyUUIDString;
@property (nonatomic, copy) NSString *VPNUUIDString;
@property (nonatomic, copy) NSString *cellularSliceUUIDString;
@property (nonatomic, copy) NSString *contentFilterUUIDString;
@property (nonatomic, copy) NSString *relayUUIDString;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DNSProxyUUIDString;
- (id)VPNUUIDString;
- (id)cellularSliceUUIDString;
- (id)contentFilterUUIDString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)relayUUIDString;
- (void)setCellularSliceUUIDString:(id)arg1;
- (void)setContentFilterUUIDString:(id)arg1;
- (void)setDNSProxyUUIDString:(id)arg1;
- (void)setRelayUUIDString:(id)arg1;
- (void)setVPNUUIDString:(id)arg1;

@end

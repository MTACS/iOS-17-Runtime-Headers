
@interface DMFMDMv1StartManagingAppRequest : DMFAppRequest {
    NSString * _DNSProxyUUIDString;
    NSString * _VPNUUIDString;
    NSArray * _associatedDomains;
    NSNumber * _associatedDomainsEnableDirectDownloads;
    NSString * _cellularSliceUUIDString;
    NSDictionary * _configuration;
    NSString * _contentFilterUUIDString;
    NSNumber * _internal;
    unsigned long long  _managementOptions;
    NSString * _originator;
    NSString * _relayUUIDString;
    NSNumber * _removable;
    NSNumber * _tapToPayScreenLock;
}

@property (nonatomic, copy) NSString *DNSProxyUUIDString;
@property (nonatomic, copy) NSString *VPNUUIDString;
@property (nonatomic, copy) NSArray *associatedDomains;
@property (nonatomic, copy) NSNumber *associatedDomainsEnableDirectDownloads;
@property (nonatomic, copy) NSString *cellularSliceUUIDString;
@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic, copy) NSString *contentFilterUUIDString;
@property (nonatomic, copy) NSNumber *internal;
@property (nonatomic) unsigned long long managementOptions;
@property (nonatomic, copy) NSString *originator;
@property (nonatomic, copy) NSString *relayUUIDString;
@property (nonatomic, copy) NSNumber *removable;
@property (nonatomic, copy) NSNumber *tapToPayScreenLock;

+ (Class)allowlistedClassForResultObject;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DNSProxyUUIDString;
- (id)VPNUUIDString;
- (id)associatedDomains;
- (id)associatedDomainsEnableDirectDownloads;
- (id)cellularSliceUUIDString;
- (id)configuration;
- (id)contentFilterUUIDString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)internal;
- (unsigned long long)managementOptions;
- (id)originator;
- (id)relayUUIDString;
- (id)removable;
- (void)setAssociatedDomains:(id)arg1;
- (void)setAssociatedDomainsEnableDirectDownloads:(id)arg1;
- (void)setCellularSliceUUIDString:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContentFilterUUIDString:(id)arg1;
- (void)setDNSProxyUUIDString:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setManagementOptions:(unsigned long long)arg1;
- (void)setOriginator:(id)arg1;
- (void)setRelayUUIDString:(id)arg1;
- (void)setRemovable:(id)arg1;
- (void)setTapToPayScreenLock:(id)arg1;
- (void)setVPNUUIDString:(id)arg1;
- (id)tapToPayScreenLock;

@end

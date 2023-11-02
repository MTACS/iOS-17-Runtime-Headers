
@interface RMModelAppManagedDeclaration_Attributes : RMModelPayloadBase {
    NSArray * _payloadAssociatedDomains;
    NSNumber * _payloadAssociatedDomainsEnableDirectDownloads;
    NSString * _payloadCellularSliceUUID;
    NSString * _payloadContentFilterUUID;
    NSString * _payloadDNSProxyUUID;
    NSString * _payloadRelayUUID;
    NSNumber * _payloadTapToPayScreenLock;
    NSString * _payloadVPNUUID;
}

@property (nonatomic, copy) NSArray *payloadAssociatedDomains;
@property (nonatomic, copy) NSNumber *payloadAssociatedDomainsEnableDirectDownloads;
@property (nonatomic, copy) NSString *payloadCellularSliceUUID;
@property (nonatomic, copy) NSString *payloadContentFilterUUID;
@property (nonatomic, copy) NSString *payloadDNSProxyUUID;
@property (nonatomic, copy) NSString *payloadRelayUUID;
@property (nonatomic, copy) NSNumber *payloadTapToPayScreenLock;
@property (nonatomic, copy) NSString *payloadVPNUUID;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAssociatedDomains:(id)arg1 associatedDomainsEnableDirectDownloads:(id)arg2 cellularSliceUUID:(id)arg3 contentFilterUUID:(id)arg4 dnsProxyUUID:(id)arg5 relayUUID:(id)arg6 tapToPayScreenLock:(id)arg7 VPNUUID:(id)arg8;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAssociatedDomains;
- (id)payloadAssociatedDomainsEnableDirectDownloads;
- (id)payloadCellularSliceUUID;
- (id)payloadContentFilterUUID;
- (id)payloadDNSProxyUUID;
- (id)payloadRelayUUID;
- (id)payloadTapToPayScreenLock;
- (id)payloadVPNUUID;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadAssociatedDomains:(id)arg1;
- (void)setPayloadAssociatedDomainsEnableDirectDownloads:(id)arg1;
- (void)setPayloadCellularSliceUUID:(id)arg1;
- (void)setPayloadContentFilterUUID:(id)arg1;
- (void)setPayloadDNSProxyUUID:(id)arg1;
- (void)setPayloadRelayUUID:(id)arg1;
- (void)setPayloadTapToPayScreenLock:(id)arg1;
- (void)setPayloadVPNUUID:(id)arg1;

@end

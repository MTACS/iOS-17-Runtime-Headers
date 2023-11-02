
@interface CEMNetworkVPNAppToAppLayerMappingDeclaration_AppLayerVPNMappingItem : CEMPayloadBase {
    NSString * _payloadCellularSliceUUID;
    NSString * _payloadDesignatedRequirement;
    NSString * _payloadIdentifier;
    NSString * _payloadSigningIdentifier;
    NSString * _payloadVPNUUID;
}

@property (nonatomic, copy) NSString *payloadCellularSliceUUID;
@property (nonatomic, copy) NSString *payloadDesignatedRequirement;
@property (nonatomic, copy) NSString *payloadIdentifier;
@property (nonatomic, copy) NSString *payloadSigningIdentifier;
@property (nonatomic, copy) NSString *payloadVPNUUID;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withCellularSliceUUID:(id)arg3 withDesignatedRequirement:(id)arg4 withSigningIdentifier:(id)arg5;
+ (id)buildWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withCellularSliceUUID:(id)arg3 withDesignatedRequirement:(id)arg4 withSigningIdentifier:(id)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadCellularSliceUUID;
- (id)payloadDesignatedRequirement;
- (id)payloadIdentifier;
- (id)payloadSigningIdentifier;
- (id)payloadVPNUUID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCellularSliceUUID:(id)arg1;
- (void)setPayloadDesignatedRequirement:(id)arg1;
- (void)setPayloadIdentifier:(id)arg1;
- (void)setPayloadSigningIdentifier:(id)arg1;
- (void)setPayloadVPNUUID:(id)arg1;

@end

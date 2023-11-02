
@interface RMModelNetworkWiFiDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSNumber * _payloadAutoJoin;
    NSNumber * _payloadCaptiveBypass;
    NSString * _payloadCertificateIdentityAssetReference;
    NSNumber * _payloadDisableAssociationMACRandomization;
    NSString * _payloadEAPClientConfigurationUUID;
    NSString * _payloadEncryptionType;
    RMModelNetworkWiFiDeclaration_HotSpot * _payloadHotSpot;
    NSNumber * _payloadIsHiddenNetwork;
    NSString * _payloadPasswordAssetReference;
    RMModelNetworkWiFiDeclaration_Proxy * _payloadProxy;
    RMModelNetworkWiFiDeclaration_QoSMarkingPolicy * _payloadQoSMarkingPolicy;
    NSString * _payloadSSID;
    NSArray * _payloadSetupModes;
    NSNumber * _payloadTLSCertificateRequired;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAutoJoin;
@property (nonatomic, copy) NSNumber *payloadCaptiveBypass;
@property (nonatomic, copy) NSString *payloadCertificateIdentityAssetReference;
@property (nonatomic, copy) NSNumber *payloadDisableAssociationMACRandomization;
@property (nonatomic, copy) NSString *payloadEAPClientConfigurationUUID;
@property (nonatomic, copy) NSString *payloadEncryptionType;
@property (nonatomic, copy) RMModelNetworkWiFiDeclaration_HotSpot *payloadHotSpot;
@property (nonatomic, copy) NSNumber *payloadIsHiddenNetwork;
@property (nonatomic, copy) NSString *payloadPasswordAssetReference;
@property (nonatomic, copy) RMModelNetworkWiFiDeclaration_Proxy *payloadProxy;
@property (nonatomic, copy) RMModelNetworkWiFiDeclaration_QoSMarkingPolicy *payloadQoSMarkingPolicy;
@property (nonatomic, copy) NSString *payloadSSID;
@property (nonatomic, copy) NSArray *payloadSetupModes;
@property (nonatomic, copy) NSNumber *payloadTLSCertificateRequired;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 autoJoin:(id)arg2 SSID:(id)arg3 isHiddenNetwork:(id)arg4 encryptionType:(id)arg5 passwordAssetReference:(id)arg6 certificateIdentityAssetReference:(id)arg7 hotSpot:(id)arg8 captiveBypass:(id)arg9 qoSMarkingPolicy:(id)arg10 setupModes:(id)arg11 tlsCertificateRequired:(id)arg12 proxy:(id)arg13 disableAssociationMACRandomization:(id)arg14 eapClientConfigurationUUID:(id)arg15;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAutoJoin;
- (id)payloadCaptiveBypass;
- (id)payloadCertificateIdentityAssetReference;
- (id)payloadDisableAssociationMACRandomization;
- (id)payloadEAPClientConfigurationUUID;
- (id)payloadEncryptionType;
- (id)payloadHotSpot;
- (id)payloadIsHiddenNetwork;
- (id)payloadPasswordAssetReference;
- (id)payloadProxy;
- (id)payloadQoSMarkingPolicy;
- (id)payloadSSID;
- (id)payloadSetupModes;
- (id)payloadTLSCertificateRequired;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadAutoJoin:(id)arg1;
- (void)setPayloadCaptiveBypass:(id)arg1;
- (void)setPayloadCertificateIdentityAssetReference:(id)arg1;
- (void)setPayloadDisableAssociationMACRandomization:(id)arg1;
- (void)setPayloadEAPClientConfigurationUUID:(id)arg1;
- (void)setPayloadEncryptionType:(id)arg1;
- (void)setPayloadHotSpot:(id)arg1;
- (void)setPayloadIsHiddenNetwork:(id)arg1;
- (void)setPayloadPasswordAssetReference:(id)arg1;
- (void)setPayloadProxy:(id)arg1;
- (void)setPayloadQoSMarkingPolicy:(id)arg1;
- (void)setPayloadSSID:(id)arg1;
- (void)setPayloadSetupModes:(id)arg1;
- (void)setPayloadTLSCertificateRequired:(id)arg1;

@end

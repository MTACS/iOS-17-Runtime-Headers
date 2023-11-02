
@interface RMModelWatchEnrollmentDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSArray * _payloadAnchorCertificateAssetReferences;
    NSString * _payloadEnrollmentProfileURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadAnchorCertificateAssetReferences;
@property (nonatomic, copy) NSString *payloadEnrollmentProfileURL;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 enrollmentProfileURL:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 enrollmentProfileURL:(id)arg2 anchorCertificateAssetReferences:(id)arg3;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAnchorCertificateAssetReferences;
- (id)payloadEnrollmentProfileURL;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadAnchorCertificateAssetReferences:(id)arg1;
- (void)setPayloadEnrollmentProfileURL:(id)arg1;

@end

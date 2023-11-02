
@interface CEMMediaSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowBookstore;
    NSNumber * _payloadAllowBookstoreErotica;
    NSNumber * _payloadAllowEnterpriseBookBackup;
    NSNumber * _payloadAllowEnterpriseBookMetadataSync;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowBookstore;
@property (nonatomic, copy) NSNumber *payloadAllowBookstoreErotica;
@property (nonatomic, copy) NSNumber *payloadAllowEnterpriseBookBackup;
@property (nonatomic, copy) NSNumber *payloadAllowEnterpriseBookMetadataSync;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowBookstore:(id)arg2 withAllowBookstoreErotica:(id)arg3 withAllowEnterpriseBookBackup:(id)arg4 withAllowEnterpriseBookMetadataSync:(id)arg5;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAllowBookstore;
- (id)payloadAllowBookstoreErotica;
- (id)payloadAllowEnterpriseBookBackup;
- (id)payloadAllowEnterpriseBookMetadataSync;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowBookstore:(id)arg1;
- (void)setPayloadAllowBookstoreErotica:(id)arg1;
- (void)setPayloadAllowEnterpriseBookBackup:(id)arg1;
- (void)setPayloadAllowEnterpriseBookMetadataSync:(id)arg1;

@end

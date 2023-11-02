
@interface CEMApplicationStoreMacOSDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadDisableSoftwareUpdateNotifications;
    NSNumber * _payloadRestrictStoreDisableAppAdoption;
    NSNumber * _payloadRestrictStoreMdmInstallSoftwareupdateOnly;
    NSNumber * _payloadRestrictStoreRequireAdminToInstall;
    NSNumber * _payloadRestrictStoreSoftwareupdateOnly;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadDisableSoftwareUpdateNotifications;
@property (nonatomic, copy) NSNumber *payloadRestrictStoreDisableAppAdoption;
@property (nonatomic, copy) NSNumber *payloadRestrictStoreMdmInstallSoftwareupdateOnly;
@property (nonatomic, copy) NSNumber *payloadRestrictStoreRequireAdminToInstall;
@property (nonatomic, copy) NSNumber *payloadRestrictStoreSoftwareupdateOnly;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withRestrictStoreRequireAdminToInstall:(id)arg2 withRestrictStoreSoftwareupdateOnly:(id)arg3 withRestrictStoreDisableAppAdoption:(id)arg4 withDisableSoftwareUpdateNotifications:(id)arg5 withRestrictStoreMdmInstallSoftwareupdateOnly:(id)arg6;
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
- (id)payloadDisableSoftwareUpdateNotifications;
- (id)payloadRestrictStoreDisableAppAdoption;
- (id)payloadRestrictStoreMdmInstallSoftwareupdateOnly;
- (id)payloadRestrictStoreRequireAdminToInstall;
- (id)payloadRestrictStoreSoftwareupdateOnly;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDisableSoftwareUpdateNotifications:(id)arg1;
- (void)setPayloadRestrictStoreDisableAppAdoption:(id)arg1;
- (void)setPayloadRestrictStoreMdmInstallSoftwareupdateOnly:(id)arg1;
- (void)setPayloadRestrictStoreRequireAdminToInstall:(id)arg1;
- (void)setPayloadRestrictStoreSoftwareupdateOnly:(id)arg1;

@end

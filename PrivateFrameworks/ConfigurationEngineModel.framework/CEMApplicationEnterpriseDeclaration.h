
@interface CEMApplicationEnterpriseDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {
    CEMApplicationEnterpriseDeclaration_AppPackage * _payloadAppPackage;
    NSString * _payloadAppPackageHashMD5;
    NSString * _payloadBundleIdentifier;
    CEMAssetBaseDescriptor * _payloadDescriptor;
    NSString * _payloadDisplayImage;
    NSString * _payloadDisplayImageHashMD5;
    NSString * _payloadFullSizeImage;
    NSString * _payloadFullSizeImageHashMD5;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMApplicationEnterpriseDeclaration_AppPackage *payloadAppPackage;
@property (nonatomic, copy) NSString *payloadAppPackageHashMD5;
@property (nonatomic, copy) NSString *payloadBundleIdentifier;
@property (nonatomic, copy) CEMAssetBaseDescriptor *payloadDescriptor;
@property (nonatomic, copy) NSString *payloadDisplayImage;
@property (nonatomic, copy) NSString *payloadDisplayImageHashMD5;
@property (nonatomic, copy) NSString *payloadFullSizeImage;
@property (nonatomic, copy) NSString *payloadFullSizeImageHashMD5;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withAppPackage:(id)arg4 withAppPackageHashMD5:(id)arg5;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withAppPackage:(id)arg4 withAppPackageHashMD5:(id)arg5 withDisplayImage:(id)arg6 withDisplayImageHashMD5:(id)arg7 withFullSizeImage:(id)arg8 withFullSizeImageHashMD5:(id)arg9;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAppPackage;
- (id)payloadAppPackageHashMD5;
- (id)payloadBundleIdentifier;
- (id)payloadDescriptor;
- (id)payloadDisplayImage;
- (id)payloadDisplayImageHashMD5;
- (id)payloadFullSizeImage;
- (id)payloadFullSizeImageHashMD5;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAppPackage:(id)arg1;
- (void)setPayloadAppPackageHashMD5:(id)arg1;
- (void)setPayloadBundleIdentifier:(id)arg1;
- (void)setPayloadDescriptor:(id)arg1;
- (void)setPayloadDisplayImage:(id)arg1;
- (void)setPayloadDisplayImageHashMD5:(id)arg1;
- (void)setPayloadFullSizeImage:(id)arg1;
- (void)setPayloadFullSizeImageHashMD5:(id)arg1;

@end

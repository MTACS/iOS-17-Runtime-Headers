
@interface CEMSystemXsanSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadFsnameservers;
    NSString * _payloadSanAuthMethod;
    NSArray * _payloadSanConfigURLs;
    NSString * _payloadSanName;
    NSString * _payloadSharedSecret;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadFsnameservers;
@property (nonatomic, copy) NSString *payloadSanAuthMethod;
@property (nonatomic, copy) NSArray *payloadSanConfigURLs;
@property (nonatomic, copy) NSString *payloadSanName;
@property (nonatomic, copy) NSString *payloadSharedSecret;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withSanName:(id)arg2 withSanConfigURLs:(id)arg3 withFsnameservers:(id)arg4 withSharedSecret:(id)arg5;
+ (id)buildWithIdentifier:(id)arg1 withSanName:(id)arg2 withSanConfigURLs:(id)arg3 withFsnameservers:(id)arg4 withSanAuthMethod:(id)arg5 withSharedSecret:(id)arg6;
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
- (id)payloadFsnameservers;
- (id)payloadSanAuthMethod;
- (id)payloadSanConfigURLs;
- (id)payloadSanName;
- (id)payloadSharedSecret;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadFsnameservers:(id)arg1;
- (void)setPayloadSanAuthMethod:(id)arg1;
- (void)setPayloadSanConfigURLs:(id)arg1;
- (void)setPayloadSanName:(id)arg1;
- (void)setPayloadSharedSecret:(id)arg1;

@end

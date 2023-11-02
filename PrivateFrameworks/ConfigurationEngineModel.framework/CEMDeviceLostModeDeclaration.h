
@interface CEMDeviceLostModeDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadEnable;
    NSString * _payloadFootnote;
    NSString * _payloadMessage;
    NSString * _payloadPhoneNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadEnable;
@property (nonatomic, copy) NSString *payloadFootnote;
@property (nonatomic, copy) NSString *payloadMessage;
@property (nonatomic, copy) NSString *payloadPhoneNumber;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEnable:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withEnable:(id)arg2 withMessage:(id)arg3 withPhoneNumber:(id)arg4 withFootnote:(id)arg5;
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
- (id)payloadEnable;
- (id)payloadFootnote;
- (id)payloadMessage;
- (id)payloadPhoneNumber;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadEnable:(id)arg1;
- (void)setPayloadFootnote:(id)arg1;
- (void)setPayloadMessage:(id)arg1;
- (void)setPayloadPhoneNumber:(id)arg1;

@end

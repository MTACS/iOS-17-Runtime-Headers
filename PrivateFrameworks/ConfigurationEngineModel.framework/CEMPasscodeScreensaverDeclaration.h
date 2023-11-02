
@interface CEMPasscodeScreensaverDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAskForPassword;
    NSNumber * _payloadAskForPasswordDelay;
    NSNumber * _payloadLoginWindowIdleTime;
    NSString * _payloadLoginWindowModulePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAskForPassword;
@property (nonatomic, copy) NSNumber *payloadAskForPasswordDelay;
@property (nonatomic, copy) NSNumber *payloadLoginWindowIdleTime;
@property (nonatomic, copy) NSString *payloadLoginWindowModulePath;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAskForPassword:(id)arg2 withAskForPasswordDelay:(id)arg3 withLoginWindowIdleTime:(id)arg4 withLoginWindowModulePath:(id)arg5;
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
- (id)payloadAskForPassword;
- (id)payloadAskForPasswordDelay;
- (id)payloadLoginWindowIdleTime;
- (id)payloadLoginWindowModulePath;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAskForPassword:(id)arg1;
- (void)setPayloadAskForPasswordDelay:(id)arg1;
- (void)setPayloadLoginWindowIdleTime:(id)arg1;
- (void)setPayloadLoginWindowModulePath:(id)arg1;

@end

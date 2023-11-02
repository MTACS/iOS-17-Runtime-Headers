
@interface CEMSystemWatchDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowPairedWatch;
    NSNumber * _payloadForceWatchWristDetection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowPairedWatch;
@property (nonatomic, copy) NSNumber *payloadForceWatchWristDetection;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withForceWatchWristDetection:(id)arg2 withAllowPairedWatch:(id)arg3;
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
- (id)payloadAllowPairedWatch;
- (id)payloadForceWatchWristDetection;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowPairedWatch:(id)arg1;
- (void)setPayloadForceWatchWristDetection:(id)arg1;

@end

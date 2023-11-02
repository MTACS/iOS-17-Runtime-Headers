
@interface CEMSystemXsanVolumePreferencesDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadDenyDLC;
    NSArray * _payloadDenyMount;
    NSArray * _payloadOnlyMount;
    NSArray * _payloadPreferDLC;
    NSNumber * _payloadUseDLC;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadDenyDLC;
@property (nonatomic, copy) NSArray *payloadDenyMount;
@property (nonatomic, copy) NSArray *payloadOnlyMount;
@property (nonatomic, copy) NSArray *payloadPreferDLC;
@property (nonatomic, copy) NSNumber *payloadUseDLC;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withOnlyMount:(id)arg2 withDenyMount:(id)arg3 withDenyDLC:(id)arg4 withPreferDLC:(id)arg5 withUseDLC:(id)arg6;
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
- (id)payloadDenyDLC;
- (id)payloadDenyMount;
- (id)payloadOnlyMount;
- (id)payloadPreferDLC;
- (id)payloadUseDLC;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDenyDLC:(id)arg1;
- (void)setPayloadDenyMount:(id)arg1;
- (void)setPayloadOnlyMount:(id)arg1;
- (void)setPayloadPreferDLC:(id)arg1;
- (void)setPayloadUseDLC:(id)arg1;

@end

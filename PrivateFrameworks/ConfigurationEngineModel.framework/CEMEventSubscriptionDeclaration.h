
@interface CEMEventSubscriptionDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadEvents;
    CEMEventSubscriptionDeclaration_Schedule * _payloadSchedule;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadEvents;
@property (nonatomic, copy) CEMEventSubscriptionDeclaration_Schedule *payloadSchedule;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEvents:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withEvents:(id)arg2 withSchedule:(id)arg3;
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
- (id)payloadEvents;
- (id)payloadSchedule;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadEvents:(id)arg1;
- (void)setPayloadSchedule:(id)arg1;

@end

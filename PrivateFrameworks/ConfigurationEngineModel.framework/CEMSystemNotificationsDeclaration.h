
@interface CEMSystemNotificationsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowNotificationsModification;
    NSArray * _payloadNotificationSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowNotificationsModification;
@property (nonatomic, copy) NSArray *payloadNotificationSettings;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withNotificationSettings:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withNotificationSettings:(id)arg2 withAllowNotificationsModification:(id)arg3;
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
- (id)payloadAllowNotificationsModification;
- (id)payloadNotificationSettings;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowNotificationsModification:(id)arg1;
- (void)setPayloadNotificationSettings:(id)arg1;

@end

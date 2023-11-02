
@interface CEMPasscodeLockscreenSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAssistantWhileLocked;
    NSNumber * _payloadAllowLockScreenControlCenter;
    NSNumber * _payloadAllowLockScreenNotificationsView;
    NSNumber * _payloadAllowLockScreenTodayView;
    NSNumber * _payloadAllowLockScreenWiFiModification;
    NSNumber * _payloadAllowPassbookWhileLocked;
    NSNumber * _payloadAllowVoiceDialing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAssistantWhileLocked;
@property (nonatomic, copy) NSNumber *payloadAllowLockScreenControlCenter;
@property (nonatomic, copy) NSNumber *payloadAllowLockScreenNotificationsView;
@property (nonatomic, copy) NSNumber *payloadAllowLockScreenTodayView;
@property (nonatomic, copy) NSNumber *payloadAllowLockScreenWiFiModification;
@property (nonatomic, copy) NSNumber *payloadAllowPassbookWhileLocked;
@property (nonatomic, copy) NSNumber *payloadAllowVoiceDialing;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowVoiceDialing:(id)arg2 withAllowAssistantWhileLocked:(id)arg3 withAllowLockScreenTodayView:(id)arg4 withAllowPassbookWhileLocked:(id)arg5 withAllowLockScreenNotificationsView:(id)arg6 withAllowLockScreenControlCenter:(id)arg7 withAllowLockScreenWiFiModification:(id)arg8;
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
- (id)payloadAllowAssistantWhileLocked;
- (id)payloadAllowLockScreenControlCenter;
- (id)payloadAllowLockScreenNotificationsView;
- (id)payloadAllowLockScreenTodayView;
- (id)payloadAllowLockScreenWiFiModification;
- (id)payloadAllowPassbookWhileLocked;
- (id)payloadAllowVoiceDialing;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAssistantWhileLocked:(id)arg1;
- (void)setPayloadAllowLockScreenControlCenter:(id)arg1;
- (void)setPayloadAllowLockScreenNotificationsView:(id)arg1;
- (void)setPayloadAllowLockScreenTodayView:(id)arg1;
- (void)setPayloadAllowLockScreenWiFiModification:(id)arg1;
- (void)setPayloadAllowPassbookWhileLocked:(id)arg1;
- (void)setPayloadAllowVoiceDialing:(id)arg1;

@end

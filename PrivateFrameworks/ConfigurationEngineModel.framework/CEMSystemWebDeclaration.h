
@interface CEMSystemWebDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadForceAuthenticationBeforeAutoFill;
    NSNumber * _payloadForceLimitAdTracking;
    NSNumber * _payloadSafariAcceptCookies;
    NSNumber * _payloadSafariAllowAutoFill;
    NSNumber * _payloadSafariAllowJavaScript;
    NSNumber * _payloadSafariAllowPopups;
    NSNumber * _payloadSafariForceFraudWarning;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadForceAuthenticationBeforeAutoFill;
@property (nonatomic, copy) NSNumber *payloadForceLimitAdTracking;
@property (nonatomic, copy) NSNumber *payloadSafariAcceptCookies;
@property (nonatomic, copy) NSNumber *payloadSafariAllowAutoFill;
@property (nonatomic, copy) NSNumber *payloadSafariAllowJavaScript;
@property (nonatomic, copy) NSNumber *payloadSafariAllowPopups;
@property (nonatomic, copy) NSNumber *payloadSafariForceFraudWarning;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withForceLimitAdTracking:(id)arg2 withSafariAllowAutoFill:(id)arg3 withSafariForceFraudWarning:(id)arg4 withSafariAllowJavaScript:(id)arg5 withSafariAllowPopups:(id)arg6 withSafariAcceptCookies:(id)arg7 withForceAuthenticationBeforeAutoFill:(id)arg8;
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
- (id)payloadForceAuthenticationBeforeAutoFill;
- (id)payloadForceLimitAdTracking;
- (id)payloadSafariAcceptCookies;
- (id)payloadSafariAllowAutoFill;
- (id)payloadSafariAllowJavaScript;
- (id)payloadSafariAllowPopups;
- (id)payloadSafariForceFraudWarning;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadForceAuthenticationBeforeAutoFill:(id)arg1;
- (void)setPayloadForceLimitAdTracking:(id)arg1;
- (void)setPayloadSafariAcceptCookies:(id)arg1;
- (void)setPayloadSafariAllowAutoFill:(id)arg1;
- (void)setPayloadSafariAllowJavaScript:(id)arg1;
- (void)setPayloadSafariAllowPopups:(id)arg1;
- (void)setPayloadSafariForceFraudWarning:(id)arg1;

@end

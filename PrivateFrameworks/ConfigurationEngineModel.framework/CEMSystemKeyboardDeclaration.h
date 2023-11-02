
@interface CEMSystemKeyboardDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAutoCorrection;
    NSNumber * _payloadAllowKeyboardShortcuts;
    NSNumber * _payloadAllowPredictiveKeyboard;
    NSNumber * _payloadAllowSpellCheck;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAutoCorrection;
@property (nonatomic, copy) NSNumber *payloadAllowKeyboardShortcuts;
@property (nonatomic, copy) NSNumber *payloadAllowPredictiveKeyboard;
@property (nonatomic, copy) NSNumber *payloadAllowSpellCheck;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowPredictiveKeyboard:(id)arg2 withAllowAutoCorrection:(id)arg3 withAllowSpellCheck:(id)arg4 withAllowKeyboardShortcuts:(id)arg5;
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
- (id)payloadAllowAutoCorrection;
- (id)payloadAllowKeyboardShortcuts;
- (id)payloadAllowPredictiveKeyboard;
- (id)payloadAllowSpellCheck;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAutoCorrection:(id)arg1;
- (void)setPayloadAllowKeyboardShortcuts:(id)arg1;
- (void)setPayloadAllowPredictiveKeyboard:(id)arg1;
- (void)setPayloadAllowSpellCheck:(id)arg1;

@end

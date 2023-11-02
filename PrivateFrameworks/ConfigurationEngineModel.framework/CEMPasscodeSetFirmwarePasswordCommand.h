
@interface CEMPasscodeSetFirmwarePasswordCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowOroms;
    NSString * _payloadCurrentPassword;
    NSString * _payloadNewPassword;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowOroms;
@property (nonatomic, copy) NSString *payloadCurrentPassword;
@property (nonatomic, copy) NSString *payloadNewPassword;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withNewPassword:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withCurrentPassword:(id)arg2 withNewPassword:(id)arg3 withAllowOroms:(id)arg4;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadAllowOroms;
- (id)payloadCurrentPassword;
- (id)payloadNewPassword;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowOroms:(id)arg1;
- (void)setPayloadCurrentPassword:(id)arg1;
- (void)setPayloadNewPassword:(id)arg1;

@end

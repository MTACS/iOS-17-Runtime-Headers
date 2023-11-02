
@interface CEMDeviceLockCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadMessage;
    NSString * _payloadPhoneNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadMessage;
@property (nonatomic, copy) NSString *payloadPhoneNumber;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withMessage:(id)arg2 withPhoneNumber:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadMessage;
- (id)payloadPhoneNumber;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadMessage:(id)arg1;
- (void)setPayloadPhoneNumber:(id)arg1;

@end


@interface CEMNetworkCellularDeclaration_AttachAPN : CEMPayloadBase {
    NSNumber * _payloadAllowedProtocolMask;
    NSString * _payloadAuthenticationType;
    NSString * _payloadName;
    NSString * _payloadPassword;
    NSString * _payloadUsername;
}

@property (nonatomic, copy) NSNumber *payloadAllowedProtocolMask;
@property (nonatomic, copy) NSString *payloadAuthenticationType;
@property (nonatomic, copy) NSString *payloadName;
@property (nonatomic, copy) NSString *payloadPassword;
@property (nonatomic, copy) NSString *payloadUsername;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithName:(id)arg1;
+ (id)buildWithName:(id)arg1 withAuthenticationType:(id)arg2 withUsername:(id)arg3 withPassword:(id)arg4 withAllowedProtocolMask:(id)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAllowedProtocolMask;
- (id)payloadAuthenticationType;
- (id)payloadName;
- (id)payloadPassword;
- (id)payloadUsername;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowedProtocolMask:(id)arg1;
- (void)setPayloadAuthenticationType:(id)arg1;
- (void)setPayloadName:(id)arg1;
- (void)setPayloadPassword:(id)arg1;
- (void)setPayloadUsername:(id)arg1;

@end


@interface CEMManagementTestCommandCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadEcho;
    NSString * _payloadReturnStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadEcho;
@property (nonatomic, copy) NSString *payloadReturnStatus;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEcho:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withEcho:(id)arg2 withReturnStatus:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadEcho;
- (id)payloadReturnStatus;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadEcho:(id)arg1;
- (void)setPayloadReturnStatus:(id)arg1;

@end

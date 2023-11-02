
@interface CEMManagementRetryActivatedConfigurationCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadActivationIdentifier;
    NSString * _payloadConfigurationIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadActivationIdentifier;
@property (nonatomic, copy) NSString *payloadConfigurationIdentifier;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withActivationIdentifier:(id)arg2 withConfigurationIdentifier:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withActivationIdentifier:(id)arg2 withConfigurationIdentifier:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadActivationIdentifier;
- (id)payloadConfigurationIdentifier;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadActivationIdentifier:(id)arg1;
- (void)setPayloadConfigurationIdentifier:(id)arg1;

@end

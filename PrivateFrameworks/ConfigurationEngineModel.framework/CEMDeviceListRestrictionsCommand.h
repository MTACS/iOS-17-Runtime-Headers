
@interface CEMDeviceListRestrictionsCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadProfileRestrictions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadProfileRestrictions;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withProfileRestrictions:(id)arg2;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadProfileRestrictions;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadProfileRestrictions:(id)arg1;

@end

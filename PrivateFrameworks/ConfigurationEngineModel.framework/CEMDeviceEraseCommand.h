
@interface CEMDeviceEraseCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadDisallowProximitySetup;
    NSString * _payloadPIN;
    NSNumber * _payloadPreserveDataPlan;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadDisallowProximitySetup;
@property (nonatomic, copy) NSString *payloadPIN;
@property (nonatomic, copy) NSNumber *payloadPreserveDataPlan;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withPIN:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withPreserveDataPlan:(id)arg2 withDisallowProximitySetup:(id)arg3 withPIN:(id)arg4;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadDisallowProximitySetup;
- (id)payloadPIN;
- (id)payloadPreserveDataPlan;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDisallowProximitySetup:(id)arg1;
- (void)setPayloadPIN:(id)arg1;
- (void)setPayloadPreserveDataPlan:(id)arg1;

@end

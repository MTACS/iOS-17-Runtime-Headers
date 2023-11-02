
@interface CEMDeviceeSIMCellularPlanManagementCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadESIMServerURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadESIMServerURL;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withESIMServerURL:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withESIMServerURL:(id)arg2;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadESIMServerURL;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadESIMServerURL:(id)arg1;

@end


@interface CEMClassroomRequestMirroringCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadDestinationDeviceID;
    NSString * _payloadDestinationName;
    NSString * _payloadPassword;
    NSNumber * _payloadScanTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadDestinationDeviceID;
@property (nonatomic, copy) NSString *payloadDestinationName;
@property (nonatomic, copy) NSString *payloadPassword;
@property (nonatomic, copy) NSNumber *payloadScanTime;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withDestinationName:(id)arg2 withDestinationDeviceID:(id)arg3 withScanTime:(id)arg4 withPassword:(id)arg5;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadDestinationDeviceID;
- (id)payloadDestinationName;
- (id)payloadPassword;
- (id)payloadScanTime;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDestinationDeviceID:(id)arg1;
- (void)setPayloadDestinationName:(id)arg1;
- (void)setPayloadPassword:(id)arg1;
- (void)setPayloadScanTime:(id)arg1;

@end

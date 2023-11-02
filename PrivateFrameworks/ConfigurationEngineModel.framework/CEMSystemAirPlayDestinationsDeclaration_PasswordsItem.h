
@interface CEMSystemAirPlayDestinationsDeclaration_PasswordsItem : CEMPayloadBase {
    NSString * _payloadDeviceID;
    NSString * _payloadDeviceName;
    NSString * _payloadPassword;
}

@property (nonatomic, copy) NSString *payloadDeviceID;
@property (nonatomic, copy) NSString *payloadDeviceName;
@property (nonatomic, copy) NSString *payloadPassword;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithDeviceName:(id)arg1 withPassword:(id)arg2 withDeviceID:(id)arg3;
+ (id)buildWithDeviceName:(id)arg1 withPassword:(id)arg2 withDeviceID:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDeviceID;
- (id)payloadDeviceName;
- (id)payloadPassword;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDeviceID:(id)arg1;
- (void)setPayloadDeviceName:(id)arg1;
- (void)setPayloadPassword:(id)arg1;

@end

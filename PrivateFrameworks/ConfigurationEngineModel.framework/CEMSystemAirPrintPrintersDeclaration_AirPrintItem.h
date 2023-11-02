
@interface CEMSystemAirPrintPrintersDeclaration_AirPrintItem : CEMPayloadBase {
    NSNumber * _payloadForceTLS;
    NSString * _payloadIPAddress;
    NSNumber * _payloadPort;
    NSString * _payloadResourcePath;
}

@property (nonatomic, copy) NSNumber *payloadForceTLS;
@property (nonatomic, copy) NSString *payloadIPAddress;
@property (nonatomic, copy) NSNumber *payloadPort;
@property (nonatomic, copy) NSString *payloadResourcePath;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIPAddress:(id)arg1 withResourcePath:(id)arg2;
+ (id)buildWithIPAddress:(id)arg1 withResourcePath:(id)arg2 withPort:(id)arg3 withForceTLS:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadForceTLS;
- (id)payloadIPAddress;
- (id)payloadPort;
- (id)payloadResourcePath;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadForceTLS:(id)arg1;
- (void)setPayloadIPAddress:(id)arg1;
- (void)setPayloadPort:(id)arg1;
- (void)setPayloadResourcePath:(id)arg1;

@end

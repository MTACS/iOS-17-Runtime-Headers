
@interface CEMNetworkVPNDeclaration_AlwaysOnServiceException : CEMPayloadBase {
    NSString * _payloadAction;
    NSString * _payloadServiceName;
}

@property (nonatomic, copy) NSString *payloadAction;
@property (nonatomic, copy) NSString *payloadServiceName;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithServiceName:(id)arg1 withAction:(id)arg2;
+ (id)buildWithServiceName:(id)arg1 withAction:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAction;
- (id)payloadServiceName;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAction:(id)arg1;
- (void)setPayloadServiceName:(id)arg1;

@end

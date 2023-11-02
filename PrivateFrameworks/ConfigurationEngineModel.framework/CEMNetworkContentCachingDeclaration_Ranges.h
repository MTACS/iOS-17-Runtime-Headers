
@interface CEMNetworkContentCachingDeclaration_Ranges : CEMPayloadBase {
    NSString * _payloadFirst;
    NSString * _payloadLast;
    NSString * _payloadType;
}

@property (nonatomic, copy) NSString *payloadFirst;
@property (nonatomic, copy) NSString *payloadLast;
@property (nonatomic, copy) NSString *payloadType;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithFirst:(id)arg1 withLast:(id)arg2;
+ (id)buildWithType:(id)arg1 withFirst:(id)arg2 withLast:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadFirst;
- (id)payloadLast;
- (id)payloadType;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadFirst:(id)arg1;
- (void)setPayloadLast:(id)arg1;
- (void)setPayloadType:(id)arg1;

@end

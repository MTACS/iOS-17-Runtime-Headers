
@interface CEMNetworkVPNDeclaration_VendorConfig : CEMPayloadBase {
    NSString * _payloadGroup;
    NSString * _payloadLoginGroupOrDomain;
    NSString * _payloadRealm;
    NSString * _payloadRole;
}

@property (nonatomic, copy) NSString *payloadGroup;
@property (nonatomic, copy) NSString *payloadLoginGroupOrDomain;
@property (nonatomic, copy) NSString *payloadRealm;
@property (nonatomic, copy) NSString *payloadRole;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRealm:(id)arg1 withRole:(id)arg2 withGroup:(id)arg3 withLoginGroupOrDomain:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadGroup;
- (id)payloadLoginGroupOrDomain;
- (id)payloadRealm;
- (id)payloadRole;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadGroup:(id)arg1;
- (void)setPayloadLoginGroupOrDomain:(id)arg1;
- (void)setPayloadRealm:(id)arg1;
- (void)setPayloadRole:(id)arg1;

@end


@interface RMModelAccountExchangeDeclaration_SMIMESigning : RMModelPayloadBase {
    NSNumber * _payloadEnabled;
    NSString * _payloadIdentityAssetReference;
    NSNumber * _payloadIdentityUserOverrideable;
    NSNumber * _payloadUserOverrideable;
}

@property (nonatomic, copy) NSNumber *payloadEnabled;
@property (nonatomic, copy) NSString *payloadIdentityAssetReference;
@property (nonatomic, copy) NSNumber *payloadIdentityUserOverrideable;
@property (nonatomic, copy) NSNumber *payloadUserOverrideable;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithEnabled:(id)arg1;
+ (id)buildWithEnabled:(id)arg1 identityAssetReference:(id)arg2 userOverrideable:(id)arg3 identityUserOverrideable:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadEnabled;
- (id)payloadIdentityAssetReference;
- (id)payloadIdentityUserOverrideable;
- (id)payloadUserOverrideable;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadEnabled:(id)arg1;
- (void)setPayloadIdentityAssetReference:(id)arg1;
- (void)setPayloadIdentityUserOverrideable:(id)arg1;
- (void)setPayloadUserOverrideable:(id)arg1;

@end

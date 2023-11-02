
@interface RMModelAccountLDAPDeclaration_SearchSettingsItem : RMModelPayloadBase {
    NSString * _payloadScope;
    NSString * _payloadSearchBase;
    NSString * _payloadVisibleDescription;
}

@property (nonatomic, copy) NSString *payloadScope;
@property (nonatomic, copy) NSString *payloadSearchBase;
@property (nonatomic, copy) NSString *payloadVisibleDescription;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithSearchBase:(id)arg1;
+ (id)buildWithVisibleDescription:(id)arg1 searchBase:(id)arg2 scope:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadScope;
- (id)payloadSearchBase;
- (id)payloadVisibleDescription;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadScope:(id)arg1;
- (void)setPayloadSearchBase:(id)arg1;
- (void)setPayloadVisibleDescription:(id)arg1;

@end

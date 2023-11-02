
@interface CEMAccountLDAPDeclaration_LDAPSearchSettingsItem : CEMPayloadBase {
    NSString * _payloadLDAPSearchSettingDescription;
    NSString * _payloadLDAPSearchSettingScope;
    NSString * _payloadLDAPSearchSettingSearchBase;
}

@property (nonatomic, copy) NSString *payloadLDAPSearchSettingDescription;
@property (nonatomic, copy) NSString *payloadLDAPSearchSettingScope;
@property (nonatomic, copy) NSString *payloadLDAPSearchSettingSearchBase;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithLDAPSearchSettingSearchBase:(id)arg1;
+ (id)buildWithLDAPSearchSettingDescription:(id)arg1 withLDAPSearchSettingSearchBase:(id)arg2 withLDAPSearchSettingScope:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadLDAPSearchSettingDescription;
- (id)payloadLDAPSearchSettingScope;
- (id)payloadLDAPSearchSettingSearchBase;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadLDAPSearchSettingDescription:(id)arg1;
- (void)setPayloadLDAPSearchSettingScope:(id)arg1;
- (void)setPayloadLDAPSearchSettingSearchBase:(id)arg1;

@end


@interface RMModelNetworkWiFiDeclaration_HotSpot : RMModelPayloadBase {
    NSString * _payloadDisplayedOperatorName;
    NSString * _payloadDomainName;
    NSString * _payloadHESSID;
    NSArray * _payloadMCCAndMNCs;
    NSArray * _payloadNAIRealmNames;
    NSArray * _payloadRoamingConsortiumOIs;
    NSNumber * _payloadServiceProviderRoamingEnabled;
}

@property (nonatomic, copy) NSString *payloadDisplayedOperatorName;
@property (nonatomic, copy) NSString *payloadDomainName;
@property (nonatomic, copy) NSString *payloadHESSID;
@property (nonatomic, copy) NSArray *payloadMCCAndMNCs;
@property (nonatomic, copy) NSArray *payloadNAIRealmNames;
@property (nonatomic, copy) NSArray *payloadRoamingConsortiumOIs;
@property (nonatomic, copy) NSNumber *payloadServiceProviderRoamingEnabled;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithDisplayedOperatorName:(id)arg1 domainName:(id)arg2 roamingConsortiumOIs:(id)arg3 serviceProviderRoamingEnabled:(id)arg4 HESSID:(id)arg5 naiRealmNames:(id)arg6 mccAndMNCs:(id)arg7;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadDisplayedOperatorName;
- (id)payloadDomainName;
- (id)payloadHESSID;
- (id)payloadMCCAndMNCs;
- (id)payloadNAIRealmNames;
- (id)payloadRoamingConsortiumOIs;
- (id)payloadServiceProviderRoamingEnabled;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadDisplayedOperatorName:(id)arg1;
- (void)setPayloadDomainName:(id)arg1;
- (void)setPayloadHESSID:(id)arg1;
- (void)setPayloadMCCAndMNCs:(id)arg1;
- (void)setPayloadNAIRealmNames:(id)arg1;
- (void)setPayloadRoamingConsortiumOIs:(id)arg1;
- (void)setPayloadServiceProviderRoamingEnabled:(id)arg1;

@end


@interface CEMAccountCalDAVDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadCalDAVAccountDescription;
    NSString * _payloadCalDAVCredentials;
    NSString * _payloadCalDAVHostName;
    NSNumber * _payloadCalDAVPort;
    NSString * _payloadCalDAVPrincipalURL;
    NSNumber * _payloadCalDAVUseSSL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadCalDAVAccountDescription;
@property (nonatomic, copy) NSString *payloadCalDAVCredentials;
@property (nonatomic, copy) NSString *payloadCalDAVHostName;
@property (nonatomic, copy) NSNumber *payloadCalDAVPort;
@property (nonatomic, copy) NSString *payloadCalDAVPrincipalURL;
@property (nonatomic, copy) NSNumber *payloadCalDAVUseSSL;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withCalDAVHostName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withCalDAVAccountDescription:(id)arg2 withCalDAVHostName:(id)arg3 withCalDAVPrincipalURL:(id)arg4 withCalDAVUseSSL:(id)arg5 withCalDAVPort:(id)arg6 withCalDAVCredentials:(id)arg7;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadCalDAVAccountDescription;
- (id)payloadCalDAVCredentials;
- (id)payloadCalDAVHostName;
- (id)payloadCalDAVPort;
- (id)payloadCalDAVPrincipalURL;
- (id)payloadCalDAVUseSSL;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCalDAVAccountDescription:(id)arg1;
- (void)setPayloadCalDAVCredentials:(id)arg1;
- (void)setPayloadCalDAVHostName:(id)arg1;
- (void)setPayloadCalDAVPort:(id)arg1;
- (void)setPayloadCalDAVPrincipalURL:(id)arg1;
- (void)setPayloadCalDAVUseSSL:(id)arg1;

@end

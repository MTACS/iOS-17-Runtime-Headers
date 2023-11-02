
@interface CEMSystemAirPlayDestinationsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadPasswords;
    NSArray * _payloadWhitelist;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadPasswords;
@property (nonatomic, copy) NSArray *payloadWhitelist;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withWhitelist:(id)arg2 withPasswords:(id)arg3;
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
- (id)payloadPasswords;
- (id)payloadWhitelist;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadPasswords:(id)arg1;
- (void)setPayloadWhitelist:(id)arg1;

@end

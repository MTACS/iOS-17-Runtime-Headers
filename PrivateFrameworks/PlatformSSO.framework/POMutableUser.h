
@interface POMutableUser : POUser <POMutableJWTBody>

@property (readonly) NSDictionary *allData;
@property (copy) NSString *altSecurityIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *generatedUUID;
@property (readonly) unsigned long long hash;
@property (copy) NSString *loginUserName;
@property (readonly) Class superclass;
@property (copy) NSString *uid;
@property (copy) NSString *uniqueIdpIdentifier;

- (void)addCustomClaims:(id)arg1;
- (void)setAltSecurityIdentity:(id)arg1;
- (void)setGeneratedUUID:(id)arg1;
- (void)setLoginUserName:(id)arg1;
- (void)setUid:(id)arg1;
- (void)setUniqueIdpIdentifier:(id)arg1;

@end

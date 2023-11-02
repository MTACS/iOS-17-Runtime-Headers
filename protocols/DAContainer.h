
@protocol DAContainer <DACardDAVRecord>

@required

- (NSString *)accountIdentifier;
- (bool)arePropertiesReadonly;
- (CNContainer *)asContainer;
- (void*)asSource;
- (NSString *)cTag;
- (NSString *)constraintsPath;
- (NSString *)externalIdentifier;
- (NSString *)identifier;
- (bool)isContentReadonly;
- (bool)isGuardianRestricted;
- (bool)isGuardianStateDirty;
- (bool)isLocal;
- (bool)isSearchContainer;
- (void)markAsDefault;
- (NSString *)meContactIdentifier;
- (NSString *)name;
- (void)setAccountIdentifier:(NSString *)arg1;
- (void)setArePropertiesReadonly:(bool)arg1;
- (void)setCTag:(NSString *)arg1;
- (void)setConstraintsPath:(NSString *)arg1;
- (void)setContentReadonly:(bool)arg1;
- (void)setExternalIdentifier:(NSString *)arg1;
- (void)setGuardianRestricted:(bool)arg1;
- (void)setGuardianStateDirty:(bool)arg1;
- (void)setMeContactIdentifier:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setSyncData:(NSData *)arg1;
- (void)setSyncTag:(NSString *)arg1;
- (void)setType:(long long)arg1;
- (NSData *)syncData;
- (NSString *)syncTag;
- (long long)type;

@end

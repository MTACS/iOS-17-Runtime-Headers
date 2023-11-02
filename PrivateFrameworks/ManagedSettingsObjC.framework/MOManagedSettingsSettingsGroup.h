
@interface MOManagedSettingsSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSSet *allowedClients;
@property (nonatomic, retain) NSSet *tokenDecodingKeys;
@property (nonatomic, retain) NSData *tokenEncodingKey;

+ (id)allowedClientsMetadata;
+ (id)groupName;
+ (id)tokenDecodingKeysMetadata;
+ (id)tokenEncodingKeyMetadata;

- (id)allowedClients;
- (void)setAllowedClients:(id)arg1;
- (void)setTokenDecodingKeys:(id)arg1;
- (void)setTokenEncodingKey:(id)arg1;
- (id)tokenDecodingKeys;
- (id)tokenEncodingKey;

@end

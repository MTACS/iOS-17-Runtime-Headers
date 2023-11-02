
@interface MOAccountSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSNumber *denyiCloudLogout;
@property (nonatomic, retain) NSNumber *lockAccounts;

+ (id)denyiCloudLogoutMetadata;
+ (id)groupName;
+ (id)lockAccountsMetadata;

- (id)denyiCloudLogout;
- (id)lockAccounts;
- (void)setDenyiCloudLogout:(id)arg1;
- (void)setLockAccounts:(id)arg1;

@end

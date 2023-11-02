
@interface ICLegacyAccountUtilities : NSObject

+ (id)accountForAccountIdentifier:(id)arg1 context:(id)arg2;
+ (id)accountForEmailAddress:(id)arg1 context:(id)arg2;
+ (id)accountIdentifierForAccount:(id)arg1;
+ (bool)didChooseToMigrateAccount:(id)arg1 context:(id)arg2;
+ (bool)didChooseToMigrateAccountsForContext:(id)arg1 forAccountPassingTest:(id /* block */)arg2;
+ (bool)didChooseToMigrateLegacyAccountType:(long long)arg1;
+ (id)emailAddressForAccount:(id)arg1;
+ (bool)isLegacyLocalAccount:(id)arg1;
+ (id)legacyAccountForICloudACAccount:(id)arg1 context:(id)arg2;
+ (id)legacyAccountForICloudAccount:(id)arg1 context:(id)arg2;
+ (id)legacyAccountForLegacyAccountType:(long long)arg1 context:(id)arg2;
+ (id)legacyAccountForLocalAccountWithContext:(id)arg1;
+ (id)legacyAccountForPrimaryICloudAccountWithContext:(id)arg1;

@end


@interface DAAccountUpgrader : NSObject

+ (void)_moveExchangeCredentialsToAppleAccessGroup;
+ (void)_notifyDaHolidaySubCalAccount;
+ (void)_updateFacebookAccountAuthenticationTypes;
+ (void)_upgradeDAAccounts;
+ (void)_writeDeviceSpecificID;
+ (void)upgradeAccounts:(bool)arg1;

@end

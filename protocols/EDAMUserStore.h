
@protocol EDAMUserStore <NSObject>

@required

- (EDAMAuthenticationResult *)authenticate:(NSString *)arg1 password:(NSString *)arg2 consumerKey:(NSString *)arg3 consumerSecret:(NSString *)arg4 supportsTwoFactor:(bool)arg5;
- (EDAMAuthenticationResult *)authenticateLongSession:(NSString *)arg1 password:(NSString *)arg2 consumerKey:(NSString *)arg3 consumerSecret:(NSString *)arg4 deviceIdentifier:(NSString *)arg5 deviceDescription:(NSString *)arg6 supportsTwoFactor:(bool)arg7;
- (EDAMAuthenticationResult *)authenticateLongSessionV2:(EDAMAuthenticationParameters *)arg1;
- (EDAMAuthenticationResult *)authenticateOpenID:(EDAMOpenIdCredential *)arg1 consumerKey:(NSString *)arg2 consumerSecret:(NSString *)arg3 deviceIdentifier:(NSString *)arg4 deviceDescription:(NSString *)arg5 authLongSession:(bool)arg6 supportsTwoFactor:(bool)arg7;
- (EDAMAuthenticationResult *)authenticateToBusiness:(NSString *)arg1;
- (bool)checkVersion:(NSString *)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3;
- (EDAMAuthenticationResult *)completeTwoFactorAuthentication:(NSString *)arg1 oneTimeCode:(NSString *)arg2 deviceIdentifier:(NSString *)arg3 deviceDescription:(NSString *)arg4;
- (NSString *)createSessionAuthenticationToken:(NSString *)arg1;
- (EDAMAccountLimits *)getAccountLimits:(int)arg1;
- (EDAMBootstrapInfo *)getBootstrapInfo:(NSString *)arg1;
- (NSDictionary *)getConnectedIdentities:(NSString *)arg1 identityIds:(NSArray *)arg2;
- (NSString *)getNoteStoreUrl:(NSString *)arg1;
- (EDAMPremiumInfo *)getPremiumInfo:(NSString *)arg1;
- (EDAMPublicUserInfo *)getPublicUserInfo:(NSString *)arg1;
- (EDAMSubscriptionInfo *)getSubscriptionInfo:(NSString *)arg1;
- (EDAMUser *)getUser:(NSString *)arg1;
- (EDAMUserUrls *)getUserUrls:(NSString *)arg1;
- (void)inviteToBusiness:(NSString *)arg1 emailAddress:(NSString *)arg2;
- (NSArray *)listBusinessInvitations:(NSString *)arg1 includeRequestedInvitations:(bool)arg2;
- (NSArray *)listBusinessUsers:(NSString *)arg1;
- (EDAMAuthenticationResult *)refreshAuthentication:(NSString *)arg1;
- (EDAMRegisterForSyncPushNotificationsResult *)registerForSyncPushNotifications:(NSString *)arg1 credentials:(EDAMPushNotificationCredentials *)arg2;
- (void)removeFromBusiness:(NSString *)arg1 emailAddress:(NSString *)arg2;
- (void)revokeLongSession:(NSString *)arg1;
- (void)unregisterForSyncPushNotifications:(NSString *)arg1;
- (void)updateBusinessUserIdentifier:(NSString *)arg1 oldEmailAddress:(NSString *)arg2 newEmailAddress:(NSString *)arg3;

@end

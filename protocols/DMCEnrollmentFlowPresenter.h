
@protocol DMCEnrollmentFlowPresenter <NSObject>

@required

- (void)requestMAIDSignInWithAuthenticationResults:(void *)arg1 personaID:(void *)arg2 makeiTunesAccountActive:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSMutableDictionary *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)showEnrollmentCompletionScene;
- (void)showEnrollmentFailure:(NSError *)arg1;

@optional

- (void)dismissEnrollmentScene;
- (void)displayManagementDetailsOverviewWithProfileData:(void *)arg1 managedAppleID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSString *)notificationNameForApplicationWillTerminate;
- (void)requestAuthServicesAuthenticationWithWebAuthURL:(void *)arg1 callbackURLScheme:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, bool, NSError *, void*
- (void)requestDebuggingApplicationsInstallation:(void *)arg1 requiredEntitlements:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestDevicePasscodeDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, unsigned long long, bool, void*
- (void)requestDevicePasscodeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, void*
- (void)requestESSOApplicationInstallationWithITunesItemID:(void *)arg1 requiredEntitlements:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestMAIDAuthenticationWithManagedAppleID:(void *)arg1 personaID:(void *)arg2 ephemeral:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSMutableDictionary *, bool, NSError *, void*
- (void)requestMAIDAuthenticationWithManagedAppleID:(void *)arg1 personaID:(void *)arg2 ephemeral:(void *)arg3 requireAppleMAID:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 12: NSString *, NSString *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSMutableDictionary *, bool, NSError *, void*
- (void)requestSilentMAIDAuthenticationWithAuthenticationResults:(void *)arg1 personaID:(void *)arg2 requireAppleMAID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSMutableDictionary *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSMutableDictionary *, bool, NSError *, void*
- (void)requestUserConsentWithProfileData:(void *)arg1 managedAppleID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)requestUsernameWithDefaultUsername:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, void*
- (void)requestWebAuthenticationWithWebAuthURL:(void *)arg1 authenticator:(void *)arg2 authParams:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSURL *, <MDMAuthenticatorProtocol> *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, bool, NSError *, void*
- (void)requestiCloudSignInConfirmationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)showInstallingEnrollmentProfileScene;
- (void)showiCloudPromotionPageWithiCloudQuotaString:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)suggestRestoreForAccountWithUsername:(void *)arg1 personaID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end


@protocol FCAppleAccount <NSObject>

@required

- (NSString *)DSID;
- (ACAccount *)activeiTunesAccount;
- (void)addObserver:(id <FCAppleAccountObserver>)arg1;
- (NSArray *)allEmailAddresses;
- (NSString *)altDSID;
- (NSString *)appStoreEmailAddress;
- (void)checkAllDevicesRunningMinimumiOSVersion:(void *)arg1 macOSVersion:(void *)arg2 orInactiveForTimeInterval:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: struct { long long x1; long long x2; }, struct { long long x1; long long x2; }, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(void *)arg1 orInactiveForTimeInterval:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: struct { long long x1; long long x2; }, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSString *)contentStoreFrontID;
- (NSString *)currentStoreFrontID;
- (NSString *)endpointConnectionClientID;
- (NFPromise *)getGSToken;
- (void)getGSTokenWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (NSString *)iCloudAccountDSID;
- (NSString *)iTunesAccountDSID;
- (NSString *)iTunesAccountName;
- (void)invalidateGSTokenCache;
- (bool)isContentStoreFrontSupported;
- (bool)isPrimaryAccountEmailAddress;
- (bool)isPrivateDataSyncingEnabled;
- (bool)isSignedInStoreFrontSupported;
- (bool)isUserSignedInToiCloud;
- (bool)isUserSignedIntoiTunes;
- (void)loadStoreFrontWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)primaryEmailAddress;
- (NSString *)primaryLanguageCode;
- (void)removeObserver:(id <FCAppleAccountObserver>)arg1;
- (long long)supportedContentLanguage;
- (NSString *)supportedContentStoreFrontID;
- (NSString *)userStoreFrontID;

@end

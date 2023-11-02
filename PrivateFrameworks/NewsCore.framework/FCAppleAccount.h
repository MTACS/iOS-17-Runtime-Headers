
@interface FCAppleAccount : NSObject <FCAppleAccount> {
    NSString * _DSID;
    ACAccountStore * _accountStore;
    NSString * _altDSID;
    NFPromise * _base64GSTokenPromise;
    NSString * _contentStoreFrontID;
    ACAccount * _iTunesAccount;
    NSHashTable * _observers;
    NSString * _overrideContentStoreFrontID;
    ACAccount * _primaryAccount;
    bool  _runningPPT;
    NSString * _userStoreFrontID;
}

@property (nonatomic, copy) NSString *DSID;
@property (nonatomic, readonly) ACAccount *activeiTunesAccount;
@property (nonatomic, readonly) NSArray *allEmailAddresses;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, readonly) NSString *appStoreEmailAddress;
@property (nonatomic, copy) NSString *contentStoreFrontID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *endpointConnectionClientID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isContentStoreFrontSupported;
@property (nonatomic, readonly) bool isSignedInStoreFrontSupported;
@property (nonatomic, readonly) NSString *primaryEmailAddress;
@property (nonatomic, readonly) NSString *primaryLanguageCode;
@property (getter=isPrivateDataSyncingEnabled, nonatomic, readonly) bool privateDataSyncingEnabled;
@property (getter=isRunningPPT) bool runningPPT;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long supportedContentLanguage;
@property (nonatomic, readonly) NSString *supportedContentStoreFrontID;
@property (getter=isUserSignedInToiCloud, nonatomic, readonly) bool userSignedInToiCloud;
@property (nonatomic, copy) NSString *userStoreFrontID;

+ (void)enableStoreFrontLocking;
+ (id)sharedAccount;

- (void).cxx_destruct;
- (id)DSID;
- (void)_accountStoreDidChange;
- (void)_reloadAccountsFromAccountStore;
- (id)activeiTunesAccount;
- (void)addObserver:(id)arg1;
- (id)allEmailAddresses;
- (id)altDSID;
- (id)appStoreEmailAddress;
- (void)checkAllDevicesRunningMinimumiOSVersion:(struct { long long x1; long long x2; })arg1 macOSVersion:(struct { long long x1; long long x2; })arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(struct { long long x1; long long x2; })arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)contentStoreFrontID;
- (id)currentStoreFrontID;
- (id)endpointConnectionClientID;
- (id)getGSToken;
- (void)getGSTokenWithCompletionHandler:(id /* block */)arg1;
- (id)iCloudAccountDSID;
- (id)iTunesAccountDSID;
- (id)iTunesAccountName;
- (id)init;
- (void)invalidateGSTokenCache;
- (bool)isContentStoreFrontSupported;
- (bool)isPrimaryAccountEmailAddress;
- (bool)isPrivateDataSyncingEnabled;
- (bool)isRunningPPT;
- (bool)isSignedInStoreFrontSupported;
- (bool)isUserSignedInToiCloud;
- (bool)isUserSignedIntoiTunes;
- (void)loadStoreFrontWithCompletionHandler:(id /* block */)arg1;
- (id)primaryEmailAddress;
- (id)primaryLanguageCode;
- (void)reloadiTunesAccount;
- (void)removeObserver:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setContentStoreFrontID:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setRunningPPT:(bool)arg1;
- (void)setUserStoreFrontID:(id)arg1;
- (long long)supportedContentLanguage;
- (id)supportedContentStoreFrontID;
- (void)t_startOverridingContentStoreFrontID:(id)arg1;
- (void)t_stopOverridingContentStoreFrontID;
- (id)userStoreFrontID;

@end
